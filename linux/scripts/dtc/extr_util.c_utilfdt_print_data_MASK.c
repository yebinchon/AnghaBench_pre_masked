
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fdt32_t ;


 int FUNC_0 (int const) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char const*,int) ;

void FUNC_4(const char *VAR_0, int VAR_1)
{
 int VAR_2;
 const char *VAR_3;


 if (VAR_1 == 0)
  return;

 if (FUNC_3(VAR_0, VAR_1)) {
  FUNC_1(" = ");

  VAR_3 = VAR_0;
  do {
   FUNC_1("\"%s\"", VAR_3);
   VAR_3 += FUNC_2(VAR_3) + 1;
   if (VAR_3 < VAR_0 + VAR_1)
    FUNC_1(", ");
  } while (VAR_3 < VAR_0 + VAR_1);

 } else if ((VAR_1 % 4) == 0) {
  const fdt32_t *VAR_4 = (const fdt32_t *)VAR_0;

  FUNC_1(" = <");
  for (VAR_2 = 0, VAR_1 /= 4; VAR_2 < VAR_1; VAR_2++)
   FUNC_1("0x%08x%s", FUNC_0(VAR_4[VAR_2]),
          VAR_2 < (VAR_1 - 1) ? " " : "");
  FUNC_1(">");
 } else {
  const unsigned char *VAR_5 = (const unsigned char *)VAR_0;
  FUNC_1(" = [");
  for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
   FUNC_1("%02x%s", *VAR_5++, VAR_2 < VAR_1 - 1 ? " " : "");
  FUNC_1("]");
 }
}
