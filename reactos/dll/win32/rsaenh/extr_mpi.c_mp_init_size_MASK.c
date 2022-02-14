
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int alloc; scalar_t__* dp; int sign; scalar_t__ used; } ;
typedef TYPE_1__ mp_int ;
typedef int mp_digit ;


 int FUNC_0 () ;
 scalar_t__* FUNC_1 (int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2 (mp_int * VAR_4, int VAR_5)
{
  int VAR_6;


  VAR_5 += (VAR_2 * 2) - (VAR_5 % VAR_2);


  VAR_4->dp = FUNC_1(FUNC_0(), 0, sizeof (mp_digit) * VAR_5);
  if (VAR_4->dp == ((void*)0)) {
    return VAR_0;
  }


  VAR_4->used = 0;
  VAR_4->alloc = VAR_5;
  VAR_4->sign = VAR_3;


  for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
      VAR_4->dp[VAR_6] = 0;
  }

  return VAR_1;
}
