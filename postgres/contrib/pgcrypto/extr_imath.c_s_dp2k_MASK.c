
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mp_int ;
typedef scalar_t__ mp_digit ;


 scalar_t__* FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(mp_int VAR_1)
{
 int VAR_2 = 0;
 mp_digit *VAR_3 = FUNC_0(VAR_1),
    VAR_4;

 if (FUNC_1(VAR_1) == 1 && *VAR_3 == 0)
  return 1;

 while (*VAR_3 == 0)
 {
  VAR_2 += VAR_0;
  ++VAR_3;
 }

 VAR_4 = *VAR_3;
 while ((VAR_4 & 1) == 0)
 {
  VAR_4 >>= 1;
  ++VAR_2;
 }

 return VAR_2;
}
