
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static char *FUNC_0(char *VAR_0, int VAR_1)
{
 int VAR_2, VAR_3, VAR_4;
 VAR_4 = 0;
 for (VAR_2 = 0; VAR_2 < 4; ++VAR_2) {
  for (VAR_3 = 0; VAR_3 < 8; ++VAR_3) {
   if (VAR_1 & (1 << (31-(VAR_2*8 + VAR_3))))
    VAR_0[VAR_4] = '1';
   else
    VAR_0[VAR_4] = '0';
   VAR_4++;
  }
  if (VAR_2 < 3) {
   VAR_0[VAR_4] = ' ';
   VAR_4++;
  }
 }
 VAR_0[VAR_4] = '\0';
 return VAR_0;
}
