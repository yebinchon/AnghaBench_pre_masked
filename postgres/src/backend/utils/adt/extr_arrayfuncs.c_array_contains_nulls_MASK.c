
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bits8 ;
typedef int ArrayType ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int* FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;

bool
FUNC_5(ArrayType *VAR_0)
{
 int VAR_1;
 bits8 *VAR_2;
 int VAR_3;


 if (!FUNC_1(VAR_0))
  return 0;

 VAR_1 = FUNC_4(FUNC_2(VAR_0), FUNC_0(VAR_0));

 VAR_2 = FUNC_3(VAR_0);


 while (VAR_1 >= 8)
 {
  if (*VAR_2 != 0xFF)
   return 1;
  VAR_2++;
  VAR_1 -= 8;
 }


 VAR_3 = 1;
 while (VAR_1 > 0)
 {
  if ((*VAR_2 & VAR_3) == 0)
   return 1;
  VAR_3 <<= 1;
  VAR_1--;
 }

 return 0;
}
