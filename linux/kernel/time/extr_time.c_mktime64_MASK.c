
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time64_t ;



time64_t FUNC_0(const unsigned int VAR_0, const unsigned int VAR_1,
  const unsigned int VAR_2, const unsigned int VAR_3,
  const unsigned int VAR_4, const unsigned int VAR_5)
{
 unsigned int VAR_6 = VAR_1, VAR_7 = VAR_0;


 if (0 >= (int) (VAR_6 -= 2)) {
  VAR_6 += 12;
  VAR_7 -= 1;
 }

 return ((((time64_t)
    (VAR_7/4 - VAR_7/100 + VAR_7/400 + 367*VAR_6/12 + VAR_2) +
    VAR_7*365 - 719499
     )*24 + VAR_3
   )*60 + VAR_4
 )*60 + VAR_5;
}
