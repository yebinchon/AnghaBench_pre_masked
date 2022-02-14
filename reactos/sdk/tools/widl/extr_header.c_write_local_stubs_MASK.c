
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int statement_list_t ;
typedef int FILE ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,char*) ;
 int FUNC_3 (int *,char*,...) ;
 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int *,int const*) ;

void FUNC_5(const statement_list_t *VAR_3)
{
  FILE *VAR_4;

  if (!VAR_2) return;

  VAR_4 = FUNC_2(VAR_2, "w");
  if (!VAR_4) {
    FUNC_0("Could not open %s for output\n", VAR_2);
    return;
  }
  FUNC_3(VAR_4, "/* call_as/local stubs for %s */\n\n", VAR_1);
  FUNC_3(VAR_4, "#include <objbase.h>\n");
  FUNC_3(VAR_4, "#include \"%s\"\n\n", VAR_0);

  FUNC_4(VAR_4, VAR_3);

  FUNC_1(VAR_4);
}
