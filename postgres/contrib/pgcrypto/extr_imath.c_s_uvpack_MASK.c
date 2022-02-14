
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mp_usmall ;
typedef scalar_t__ mp_digit ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(mp_usmall VAR_1, mp_digit VAR_2[])
{
 int VAR_3 = 0;

 if (VAR_1 == 0)
  VAR_2[VAR_3++] = 0;
 else
 {
  while (VAR_1 != 0)
  {
   VAR_2[VAR_3++] = (mp_digit) VAR_1;
   VAR_1 >>= VAR_0 / 2;
   VAR_1 >>= VAR_0 / 2;
  }
 }

 return VAR_3;
}
