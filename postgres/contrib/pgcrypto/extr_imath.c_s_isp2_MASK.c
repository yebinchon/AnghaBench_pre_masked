
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mp_size ;
typedef int mp_int ;
typedef int mp_digit ;


 int* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(mp_int VAR_1)
{
 mp_size VAR_2 = FUNC_1(VAR_1),
    VAR_3 = 0;
 mp_digit *VAR_4 = FUNC_0(VAR_1),
    VAR_5;

 while (VAR_2 > 1)
 {
  if (*VAR_4++ != 0)
   return -1;
  VAR_3 += VAR_0;
  --VAR_2;
 }

 VAR_5 = *VAR_4;
 while (VAR_5 > 1)
 {
  if (VAR_5 & 1)
   return -1;
  ++VAR_3;
  VAR_5 >>= 1;
 }

 return (int) VAR_3;
}
