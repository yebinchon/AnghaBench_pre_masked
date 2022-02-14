
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,...) ;
 scalar_t__ FUNC_3 (char const*,int) ;

__attribute__((used)) static void FUNC_4(const char *VAR_0, int VAR_1)
{
 int VAR_2;
 const char *VAR_3 = VAR_0;


 if (VAR_1 == 0)
  return;

 if (FUNC_3(VAR_0, VAR_1)) {
  FUNC_2(" = \"%s\"", (const char *)VAR_0);
 } else if ((VAR_1 % 4) == 0) {
  FUNC_2(" = <");
  for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2 += 4)
   FUNC_2("0x%08x%s", FUNC_1(FUNC_0(VAR_3)),
          VAR_2 < (VAR_1 - 4) ? " " : "");
  FUNC_2(">");
 } else {
  FUNC_2(" = [");
  for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
   FUNC_2("%02x%s", *VAR_3++, VAR_2 < VAR_1 - 1 ? " " : "");
  FUNC_2("]");
 }
}
