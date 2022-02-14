
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int alloc; int sign; scalar_t__ used; scalar_t__* dp; } ;
typedef TYPE_1__ mp_int ;
typedef int mp_digit ;


 int FUNC_0 () ;
 scalar_t__* FUNC_1 (int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2 (mp_int * VAR_4)
{
  int VAR_5;


  VAR_4->dp = FUNC_1(FUNC_0(), 0, sizeof (mp_digit) * VAR_2);
  if (VAR_4->dp == ((void*)0)) {
    return VAR_0;
  }


  for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
      VAR_4->dp[VAR_5] = 0;
  }



  VAR_4->used = 0;
  VAR_4->alloc = VAR_2;
  VAR_4->sign = VAR_3;

  return VAR_1;
}
