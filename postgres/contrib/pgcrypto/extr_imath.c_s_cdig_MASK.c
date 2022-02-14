
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mp_size ;
typedef scalar_t__ mp_digit ;



__attribute__((used)) static int
FUNC_0(mp_digit *VAR_0, mp_digit *VAR_1, mp_size VAR_2)
{
 mp_digit *VAR_3 = VAR_0 + VAR_2 - 1,
      *VAR_4 = VAR_1 + VAR_2 - 1;

 for ( ; VAR_2 != 0; --VAR_2, --VAR_3, --VAR_4)
 {
  if (*VAR_3 > *VAR_4)
  {
   return 1;
  }
  else if (*VAR_3 < *VAR_4)
  {
   return -1;
  }
 }

 return 0;
}
