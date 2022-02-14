
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct variable {int brace_level; int type; int name; } ;
struct assignment {int value; int variable; struct assignment* next; } ;




 int FUNC_0 (int ,int ,int ,int ,int *,int *,int,int *,int *,char*,int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 struct assignment* VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;
 struct variable* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,char*,...) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (int) ;
 char* FUNC_7 (char*) ;
 int FUNC_8 (int ,int ,char*) ;
 int FUNC_9 (int) ;

void
FUNC_10(char *VAR_4, char *VAR_5)
{
 struct assignment *VAR_6;

 FUNC_3(VAR_3, "{ ECPGget_desc(__LINE__, %s, %s,", VAR_4, VAR_5);
 for (VAR_6 = VAR_2; VAR_6 != ((void*)0); VAR_6 = VAR_6->next)
 {
  const struct variable *VAR_7 = FUNC_2(VAR_6->variable);
  char *VAR_8 = FUNC_7("0");

  switch (VAR_6->value)
  {
   case 128:
    FUNC_8(VAR_1, VAR_0, "nullable is always 1");
    break;
   case 129:
    FUNC_8(VAR_1, VAR_0, "key_member is always 0");
    break;
   default:
    break;
  }
  FUNC_3(VAR_3, "%s,", FUNC_6(VAR_6->value));
  FUNC_0(VAR_3, VAR_7->name, VAR_7->type, VAR_7->brace_level,
      ((void*)0), ((void*)0), -1, ((void*)0), ((void*)0), VAR_8, ((void*)0), ((void*)0));
  FUNC_5(VAR_8);
 }
 FUNC_1();
 FUNC_4("ECPGd_EODT);\n", VAR_3);

 FUNC_9(2 | 1);
}
