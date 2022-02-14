
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_string {char** variable; } ;
struct config_real {int * variable; } ;
struct config_int {char** variable; } ;
struct config_generic {char* name; int vartype; char* sourcefile; int scontext; int source; int sourceline; } ;
struct config_enum {int * variable; } ;
struct config_bool {int * variable; } ;
typedef int Size ;







 int VAR_0 ;
 scalar_t__ FUNC_0 (struct config_generic*) ;
 char* FUNC_1 (struct config_enum*,int ) ;
 int FUNC_2 (char**,int *,char*,...) ;
 int FUNC_3 (char**,int *,int *,int) ;

__attribute__((used)) static void
FUNC_4(char **VAR_1, Size *VAR_2,
       struct config_generic *VAR_3)
{
 if (FUNC_0(VAR_3))
  return;

 FUNC_2(VAR_1, VAR_2, "%s", VAR_3->name);

 switch (VAR_3->vartype)
 {
  case 132:
   {
    struct config_bool *VAR_4 = (struct config_bool *) VAR_3;

    FUNC_2(VAR_1, VAR_2,
        (*VAR_4->variable ? "true" : "false"));
   }
   break;

  case 130:
   {
    struct config_int *VAR_5 = (struct config_int *) VAR_3;

    FUNC_2(VAR_1, VAR_2, "%d", *VAR_5->variable);
   }
   break;

  case 129:
   {
    struct config_real *VAR_6 = (struct config_real *) VAR_3;

    FUNC_2(VAR_1, VAR_2, "%.*e",
        VAR_0, *VAR_6->variable);
   }
   break;

  case 128:
   {
    struct config_string *VAR_7 = (struct config_string *) VAR_3;


    FUNC_2(VAR_1, VAR_2, "%s",
        *VAR_7->variable ? *VAR_7->variable : "");
   }
   break;

  case 131:
   {
    struct config_enum *VAR_8 = (struct config_enum *) VAR_3;

    FUNC_2(VAR_1, VAR_2, "%s",
        FUNC_1(VAR_8, *VAR_8->variable));
   }
   break;
 }

 FUNC_2(VAR_1, VAR_2, "%s",
     (VAR_3->sourcefile ? VAR_3->sourcefile : ""));

 if (VAR_3->sourcefile && VAR_3->sourcefile[0])
  FUNC_3(VAR_1, VAR_2, &VAR_3->sourceline,
       sizeof(VAR_3->sourceline));

 FUNC_3(VAR_1, VAR_2, &VAR_3->source,
      sizeof(VAR_3->source));
 FUNC_3(VAR_1, VAR_2, &VAR_3->scontext,
      sizeof(VAR_3->scontext));
}
