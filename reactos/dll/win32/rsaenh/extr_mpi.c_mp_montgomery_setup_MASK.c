
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int mp_word ;
struct TYPE_3__ {int* dp; } ;
typedef TYPE_1__ mp_int ;
typedef int mp_digit ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int
FUNC_0 (const mp_int * VAR_4, mp_digit * VAR_5)
{
  mp_digit VAR_6, VAR_7;
  VAR_7 = VAR_4->dp[0];

  if ((VAR_7 & 1) == 0) {
    return VAR_3;
  }

  VAR_6 = (((VAR_7 + 2) & 4) << 1) + VAR_7;
  VAR_6 *= 2 - VAR_7 * VAR_6;
  VAR_6 *= 2 - VAR_7 * VAR_6;
  VAR_6 *= 2 - VAR_7 * VAR_6;


  *VAR_5 = (((mp_word)1 << ((mp_word) VAR_0)) - VAR_6) & VAR_1;

  return VAR_2;
}
