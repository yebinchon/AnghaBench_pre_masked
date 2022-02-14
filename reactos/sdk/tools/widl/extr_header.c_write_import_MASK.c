
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 char* FUNC_0 (char const*,char*) ;
 int FUNC_1 (int *,char*,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (char*,char*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6(FILE *VAR_0, const char *VAR_1)
{
  char *VAR_2, *VAR_3;

  VAR_2 = FUNC_0(VAR_1, ".idl");
  VAR_3 = VAR_2 + FUNC_5(VAR_2) - 2;
  if (VAR_3 <= VAR_2 || FUNC_4( VAR_3, ".h" )) FUNC_3(VAR_2, ".h");

  FUNC_1(VAR_0, "#include <%s>\n", VAR_2);
  FUNC_2(VAR_2);
}
