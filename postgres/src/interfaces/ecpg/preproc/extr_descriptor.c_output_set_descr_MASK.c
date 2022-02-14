
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct variable {int brace_level; int type; int name; } ;
struct assignment {int value; int variable; struct assignment* next; } ;
 int FUNC_0 (int ,int ,int ,int ,int *,int *,int,int *,int *,char*,int *,int *) ;
 int VAR_0 ;
 struct assignment* VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 struct variable* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,char*,...) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (int) ;
 char* FUNC_8 (char*) ;
 int FUNC_9 (int ,char*,int ) ;
 int FUNC_10 (int) ;

void
FUNC_11(char *VAR_3, char *VAR_4)
{
 struct assignment *VAR_5;

 FUNC_4(VAR_2, "{ ECPGset_desc(__LINE__, %s, %s,", VAR_3, VAR_4);
 for (VAR_5 = VAR_1; VAR_5 != ((void*)0); VAR_5 = VAR_5->next)
 {
  const struct variable *VAR_6 = FUNC_3(VAR_5->variable);

  switch (VAR_5->value)
  {
   case 142:
   case 140:
   case 139:
   case 132:
   case 129:
    FUNC_9(VAR_0, "descriptor item \"%s\" is not implemented",
      FUNC_1(VAR_5->value));
    break;

   case 137:
   case 135:
   case 134:
   case 133:
   case 131:
   case 130:
    FUNC_9(VAR_0, "descriptor item \"%s\" cannot be set",
      FUNC_1(VAR_5->value));
    break;

   case 141:
   case 138:
   case 136:
   case 128:
    {
     char *VAR_7 = FUNC_8("0");

     FUNC_4(VAR_2, "%s,", FUNC_7(VAR_5->value));
     FUNC_0(VAR_2, VAR_6->name, VAR_6->type, VAR_6->brace_level,
         ((void*)0), ((void*)0), -1, ((void*)0), ((void*)0), VAR_7, ((void*)0), ((void*)0));
     FUNC_6(VAR_7);
    }
    break;

   default:
    ;
  }
 }
 FUNC_2();
 FUNC_5("ECPGd_EODT);\n", VAR_2);

 FUNC_10(2 | 1);
}
