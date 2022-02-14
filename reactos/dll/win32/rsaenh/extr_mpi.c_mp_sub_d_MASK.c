
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int alloc; int used; scalar_t__ sign; scalar_t__* dp; } ;
typedef TYPE_1__ mp_int ;
typedef scalar_t__ mp_digit ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int FUNC_0 (TYPE_1__*,scalar_t__,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int) ;

int
FUNC_3 (mp_int * VAR_5, mp_digit VAR_6, mp_int * VAR_7)
{
  mp_digit *VAR_8, *VAR_9, VAR_10;
  int VAR_11, VAR_12, VAR_13;


  if (VAR_7->alloc < VAR_5->used + 1) {
     if ((VAR_11 = FUNC_2(VAR_7, VAR_5->used + 1)) != VAR_3) {
        return VAR_11;
     }
  }




  if (VAR_5->sign == VAR_2) {
     VAR_5->sign = VAR_4;
     VAR_11 = FUNC_0(VAR_5, VAR_6, VAR_7);
     VAR_5->sign = VAR_7->sign = VAR_2;
     return VAR_11;
  }


  VAR_13 = VAR_7->used;
  VAR_8 = VAR_5->dp;
  VAR_9 = VAR_7->dp;


  if ((VAR_5->used == 1 && VAR_5->dp[0] <= VAR_6) || VAR_5->used == 0) {
     if (VAR_5->used == 1) {
        *VAR_9++ = VAR_6 - *VAR_8;
     } else {
        *VAR_9++ = VAR_6;
     }
     VAR_12 = 1;


     VAR_7->sign = VAR_2;
     VAR_7->used = 1;
  } else {

     VAR_7->sign = VAR_4;
     VAR_7->used = VAR_5->used;


     *VAR_9 = *VAR_8++ - VAR_6;
     VAR_10 = *VAR_9 >> (sizeof(mp_digit) * VAR_0 - 1);
     *VAR_9++ &= VAR_1;


     for (VAR_12 = 1; VAR_12 < VAR_5->used; VAR_12++) {
        *VAR_9 = *VAR_8++ - VAR_10;
        VAR_10 = *VAR_9 >> (sizeof(mp_digit) * VAR_0 - 1);
        *VAR_9++ &= VAR_1;
     }
  }


  while (VAR_12++ < VAR_13) {
     *VAR_9++ = 0;
  }
  FUNC_1(VAR_7);
  return VAR_3;
}
