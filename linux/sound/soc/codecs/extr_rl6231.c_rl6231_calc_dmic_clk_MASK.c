
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int const*) ;
 int VAR_0 ;
 int FUNC_1 (char*,int) ;

int FUNC_2(int VAR_1)
{
 static const int VAR_2[] = {2, 3, 4, 6, 8, 12};
 int VAR_3;

 if (VAR_1 < 1000000 * VAR_2[0]) {
  FUNC_1("Base clock rate %d is too low\n", VAR_1);
  return -VAR_0;
 }

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_2); VAR_3++) {
  if ((VAR_2[VAR_3] % 3) == 0)
   continue;

  if (3072000 * VAR_2[VAR_3] >= VAR_1)
   return VAR_3;
 }

 FUNC_1("Base clock rate %d is too high\n", VAR_1);
 return -VAR_0;
}
