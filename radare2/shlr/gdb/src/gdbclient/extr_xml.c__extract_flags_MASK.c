
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int ut64 ;
typedef void* ut32 ;
struct TYPE_12__ {char* type; int num_bits; int num_fields; TYPE_1__* fields; } ;
typedef TYPE_2__ gdbr_xml_flags_t ;
struct TYPE_13__ {int (* free ) (TYPE_2__*) ;} ;
struct TYPE_11__ {char* name; void* bit_num; void* sz; } ;
typedef TYPE_3__ RList ;


 TYPE_2__* FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (char) ;
 int FUNC_3 (TYPE_3__*) ;
 TYPE_3__* FUNC_4 () ;
 int FUNC_5 (TYPE_3__*,TYPE_2__*) ;
 char* FUNC_6 (char*,char) ;
 int FUNC_7 (char*,char*,int) ;
 char* FUNC_8 (char*,char*) ;
 scalar_t__ FUNC_9 (char*,int *,int) ;

__attribute__((used)) static RList* FUNC_10(char *VAR_0) {
 char *VAR_1, *VAR_2, *VAR_3, *VAR_4, *VAR_5;
 ut64 VAR_6, VAR_7, VAR_8;
 gdbr_xml_flags_t *VAR_9 = ((void*)0);
 RList *VAR_10;
 if (!(VAR_10 = FUNC_4 ())) {
  return ((void*)0);
 }
 VAR_10->free = FUNC_1;
 while ((VAR_0 = FUNC_8 (VAR_0, "<flags"))) {
  if (!(VAR_3 = FUNC_8 (VAR_0, "</flags>"))) {
   goto exit_err;
  }
  *VAR_3 = '\0';
  if (!(VAR_9 = FUNC_0 (1, sizeof (gdbr_xml_flags_t)))) {
   goto exit_err;
  }

  if (!(VAR_1 = FUNC_8 (VAR_0, "id="))) {
   goto exit_err;
  }
  VAR_1 += 4;
  if (!(VAR_2 = FUNC_6 (VAR_1, '"'))) {
   goto exit_err;
  }
  *VAR_2 = '\0';
  VAR_7 = sizeof (VAR_9->type);
  FUNC_7 (VAR_9->type, VAR_1, VAR_7 - 1);
  VAR_9->type[VAR_7 - 1] = '\0';
  *VAR_2 = '"';

  if (!(VAR_1 = FUNC_8 (VAR_0, "size="))) {
   goto exit_err;
  }
  VAR_1 += 6;
  if (!(VAR_9->num_bits = (ut32) FUNC_9 (VAR_1, ((void*)0), 10))) {
   goto exit_err;
  }
  VAR_9->num_bits *= 8;

  VAR_6 = 0;
  VAR_4 = VAR_0;
  while ((VAR_4 = FUNC_8 (VAR_4, "<field"))) {

   if (VAR_6 >= 64) {
    break;
   }
   if (!(VAR_5 = FUNC_8 (VAR_4, "/>"))) {
    goto exit_err;
   }
   *VAR_5 = '\0';

   if (!(VAR_1 = FUNC_8 (VAR_4, "name="))) {
    goto exit_err;
   }
   VAR_1 += 6;
   if (!(VAR_2 = FUNC_6 (VAR_1, '"'))) {
    goto exit_err;
   }

   if (VAR_2 - VAR_1 <= 1) {
    *VAR_5 = '/';
    VAR_4 = VAR_5 + 1;
    continue;
   }
   *VAR_2 = '\0';
   VAR_8 = sizeof (VAR_9->fields[VAR_6].name);
   FUNC_7 (VAR_9->fields[VAR_6].name, VAR_1, VAR_8 - 1);
   VAR_9->fields[VAR_6].name[VAR_8 - 1] = '\0';
   *VAR_2 = '"';

   if (!(VAR_1 = FUNC_8 (VAR_4, "start="))) {
    goto exit_err;
   }
   VAR_1 += 7;
   if (!FUNC_2 (*VAR_1)) {
    goto exit_err;
   }
   VAR_9->fields[VAR_6].bit_num = (ut32) FUNC_9 (VAR_1, ((void*)0), 10);

   if (!(VAR_1 = FUNC_8 (VAR_4, "end="))) {
    goto exit_err;
   }
   VAR_1 += 5;
   if (!FUNC_2 (*VAR_1)) {
    goto exit_err;
   }
   VAR_9->fields[VAR_6].sz = (ut32) FUNC_9 (VAR_1, ((void*)0), 10) + 1;
   VAR_9->fields[VAR_6].sz -= VAR_9->fields[VAR_6].bit_num;
   VAR_6++;
   *VAR_5 = '/';
   VAR_4 = VAR_5 + 1;
  }
  VAR_9->num_fields = VAR_6;
  FUNC_5 (VAR_10, VAR_9);
  *VAR_3 = '<';
  VAR_0 = VAR_3 + 1;
 }
 return VAR_10;
exit_err:
 if (VAR_10) {
  FUNC_3 (VAR_10);
 }
 FUNC_1 (VAR_9);
 return ((void*)0);
}
