
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int mp_word ;
struct TYPE_3__ {scalar_t__* dp; } ;
typedef TYPE_1__ mp_int ;
typedef scalar_t__ mp_digit ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0(const mp_int *VAR_1, mp_digit *VAR_2)
{



   *VAR_2 = (mp_digit)((((mp_word)1) << ((mp_word)VAR_0)) -
        ((mp_word)VAR_1->dp[0]));
}
