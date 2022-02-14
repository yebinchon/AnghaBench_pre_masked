
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct symbol {int export; TYPE_1__* module; int name; scalar_t__ is_static; struct symbol* next; } ;
struct module {char* name; scalar_t__ skip; struct module* next; } ;
struct ext_sym_list {char* file; struct ext_sym_list* next; } ;
struct buffer {struct ext_sym_list* p; scalar_t__ pos; } ;
struct TYPE_2__ {int name; int is_dot_o; } ;


 struct ext_sym_list* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct buffer*,struct module*) ;
 int FUNC_2 (struct buffer*,struct module*) ;
 int FUNC_3 (struct buffer*,int) ;
 int FUNC_4 (struct buffer*,struct module*) ;
 int FUNC_5 (struct buffer*) ;
 int FUNC_6 (struct buffer*,struct module*) ;
 int FUNC_7 (struct buffer*,char*) ;
 int FUNC_8 (struct buffer*,struct module*) ;
 int VAR_2 ;
 int FUNC_9 (struct module*) ;
 int FUNC_10 (struct module*) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int ) ;
 int VAR_3 ;
 int FUNC_13 (char*) ;
 int FUNC_14 (struct ext_sym_list*) ;
 int FUNC_15 (int,char**,char*) ;
 int VAR_4 ;
 scalar_t__ FUNC_16 (int ) ;
 int FUNC_17 (int) ;
 struct module* VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int FUNC_18 (char*,int) ;
 int FUNC_19 (char*) ;
 int FUNC_20 (char*) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_21 (char*,char*,char*) ;
 struct symbol** VAR_11 ;
 int VAR_12 ;
 int FUNC_22 (char*,int ,int ,int ) ;
 int VAR_13 ;
 int FUNC_23 (char*) ;
 int FUNC_24 (struct buffer*,char*) ;
 int VAR_14 ;
 int FUNC_25 () ;

int FUNC_26(int VAR_15, char **VAR_16)
{
 struct module *VAR_17;
 struct buffer VAR_18 = { };
 char *VAR_19 = ((void*)0), *VAR_20 = ((void*)0);
 char *VAR_21 = ((void*)0), *VAR_22 = ((void*)0);
 int VAR_23;
 int VAR_24;
 int VAR_25;
 struct ext_sym_list *VAR_26;
 struct ext_sym_list *VAR_27 = ((void*)0);

 while ((VAR_23 = FUNC_15(VAR_15, VAR_16, "i:I:e:mnsT:o:awEd")) != -1) {
  switch (VAR_23) {
  case 'i':
   VAR_19 = VAR_7;
   break;
  case 'I':
   VAR_20 = VAR_7;
   VAR_3 = 1;
   break;
  case 'e':
   VAR_3 = 1;
   VAR_26 =
      FUNC_0(FUNC_17(sizeof(*VAR_26)));
   VAR_26->next = VAR_27;
   VAR_26->file = VAR_7;
   VAR_27 = VAR_26;
   break;
  case 'm':
   VAR_6 = 1;
   break;
  case 'n':
   VAR_4 = 1;
   break;
  case 'o':
   VAR_21 = VAR_7;
   break;
  case 'a':
   VAR_2 = 1;
   break;
  case 's':
   VAR_12 = 0;
   break;
  case 'T':
   VAR_22 = VAR_7;
   break;
  case 'w':
   VAR_13 = 1;
   break;
  case 'E':
   VAR_10 = 1;
   break;
  case 'd':
   VAR_14 = 1;
   break;
  default:
   FUNC_11(1);
  }
 }

 if (VAR_19)
  FUNC_18(VAR_19, 1);
 if (VAR_20)
  FUNC_18(VAR_20, 0);
 while (VAR_27) {
  FUNC_18(VAR_27->file, 0);
  VAR_26 = VAR_27->next;
  FUNC_14(VAR_27);
  VAR_27 = VAR_26;
 }

 while (VAR_8 < VAR_15)
  FUNC_19(VAR_16[VAR_8++]);

 if (VAR_22)
  FUNC_20(VAR_22);

 VAR_24 = 0;

 for (VAR_17 = VAR_5; VAR_17; VAR_17 = VAR_17->next) {
  char VAR_28[VAR_0];

  if (VAR_17->skip)
   continue;

  VAR_18.pos = 0;

  VAR_24 |= FUNC_10(VAR_17);
  VAR_24 |= FUNC_9(VAR_17);
  if (VAR_14)
   continue;

  FUNC_2(&VAR_18, VAR_17);
  FUNC_3(&VAR_18, !VAR_3);
  FUNC_5(&VAR_18);
  FUNC_7(&VAR_18, VAR_17->name);
  VAR_24 |= FUNC_8(&VAR_18, VAR_17);
  FUNC_1(&VAR_18, VAR_17);
  FUNC_4(&VAR_18, VAR_17);
  FUNC_6(&VAR_18, VAR_17);

  FUNC_21(VAR_28, "%s.mod.c", VAR_17->name);
  FUNC_24(&VAR_18, VAR_28);
 }

 if (VAR_14) {
  FUNC_25();
  return 0;
 }

 if (VAR_21)
  FUNC_23(VAR_21);
 if (VAR_9 && VAR_10)
  FUNC_13("modpost: Section mismatches detected.\n"
        "Set CONFIG_SECTION_MISMATCH_WARN_ONLY=y to allow them.\n");
 for (VAR_25 = 0; VAR_25 < VAR_1; VAR_25++) {
  struct symbol *VAR_29;

  for (VAR_29 = VAR_11[VAR_25]; VAR_29; VAR_29 = VAR_29->next) {




   if (FUNC_16(VAR_29->module->name) && !VAR_29->module->is_dot_o)
    continue;

   if (VAR_29->is_static)
    FUNC_22("\"%s\" [%s] is a static %s\n",
         VAR_29->name, VAR_29->module->name,
         FUNC_12(VAR_29->export));
  }
 }

 FUNC_14(VAR_18.p);

 return VAR_24;
}
