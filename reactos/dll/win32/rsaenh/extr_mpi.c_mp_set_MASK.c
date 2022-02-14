
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* dp; int used; } ;
typedef TYPE_1__ mp_int ;
typedef int mp_digit ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

void FUNC_1 (mp_int * VAR_1, mp_digit VAR_2)
{
  FUNC_0 (VAR_1);
  VAR_1->dp[0] = VAR_2 & VAR_0;
  VAR_1->used = (VAR_1->dp[0] != 0) ? 1 : 0;
}
