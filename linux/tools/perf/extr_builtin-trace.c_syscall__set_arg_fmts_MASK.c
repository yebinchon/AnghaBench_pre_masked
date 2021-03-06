
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tep_format_field {int flags; scalar_t__ size; scalar_t__ offset; scalar_t__ name; scalar_t__ type; struct tep_format_field* next; } ;
struct syscall {scalar_t__ args_size; TYPE_3__* arg_fmt; TYPE_2__* fmt; struct tep_format_field* args; } ;
struct TYPE_6__ {int scnprintf; } ;
struct TYPE_5__ {TYPE_1__* arg; } ;
struct TYPE_4__ {scalar_t__ scnprintf; } ;


 int SCA_FD ;
 int SCA_FILENAME ;
 int SCA_MODE_T ;
 int SCA_PID ;
 int SCA_PTR ;
 int TEP_FIELD_IS_POINTER ;
 scalar_t__ strcmp (scalar_t__,char*) ;
 int strlen (scalar_t__) ;
 int * strstr (scalar_t__,char*) ;

__attribute__((used)) static int syscall__set_arg_fmts(struct syscall *sc)
{
 struct tep_format_field *field, *last_field = ((void*)0);
 int idx = 0, len;

 for (field = sc->args; field; field = field->next, ++idx) {
  last_field = field;

  if (sc->fmt && sc->fmt->arg[idx].scnprintf)
   continue;

  len = strlen(field->name);

  if (strcmp(field->type, "const char *") == 0 &&
      ((len >= 4 && strcmp(field->name + len - 4, "name") == 0) ||
       strstr(field->name, "path") != ((void*)0)))
   sc->arg_fmt[idx].scnprintf = SCA_FILENAME;
  else if ((field->flags & TEP_FIELD_IS_POINTER) || strstr(field->name, "addr"))
   sc->arg_fmt[idx].scnprintf = SCA_PTR;
  else if (strcmp(field->type, "pid_t") == 0)
   sc->arg_fmt[idx].scnprintf = SCA_PID;
  else if (strcmp(field->type, "umode_t") == 0)
   sc->arg_fmt[idx].scnprintf = SCA_MODE_T;
  else if ((strcmp(field->type, "int") == 0 ||
     strcmp(field->type, "unsigned int") == 0 ||
     strcmp(field->type, "long") == 0) &&
    len >= 2 && strcmp(field->name + len - 2, "fd") == 0) {







   sc->arg_fmt[idx].scnprintf = SCA_FD;
  }
 }

 if (last_field)
  sc->args_size = last_field->offset + last_field->size;

 return 0;
}
