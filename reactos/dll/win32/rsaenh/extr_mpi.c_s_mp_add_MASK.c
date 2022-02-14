
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int used; int alloc; int* dp; } ;
typedef TYPE_1__ mp_int ;
typedef int mp_digit ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static int
FUNC_2 (mp_int * VAR_3, mp_int * VAR_4, mp_int * VAR_5)
{
  mp_int *VAR_6;
  int VAR_7, VAR_8, VAR_9, VAR_10;




  if (VAR_3->used > VAR_4->used) {
    VAR_9 = VAR_4->used;
    VAR_10 = VAR_3->used;
    VAR_6 = VAR_3;
  } else {
    VAR_9 = VAR_3->used;
    VAR_10 = VAR_4->used;
    VAR_6 = VAR_4;
  }


  if (VAR_5->alloc < VAR_10 + 1) {
    if ((VAR_8 = FUNC_1 (VAR_5, VAR_10 + 1)) != VAR_2) {
      return VAR_8;
    }
  }


  VAR_7 = VAR_5->used;
  VAR_5->used = VAR_10 + 1;

  {
    register mp_digit VAR_11, *VAR_12, *VAR_13, *VAR_14;
    register int VAR_15;




    VAR_12 = VAR_3->dp;


    VAR_13 = VAR_4->dp;


    VAR_14 = VAR_5->dp;


    VAR_11 = 0;
    for (VAR_15 = 0; VAR_15 < VAR_9; VAR_15++) {

      *VAR_14 = *VAR_12++ + *VAR_13++ + VAR_11;


      VAR_11 = *VAR_14 >> ((mp_digit)VAR_0);


      *VAR_14++ &= VAR_1;
    }




    if (VAR_9 != VAR_10) {
      for (; VAR_15 < VAR_10; VAR_15++) {

        *VAR_14 = VAR_6->dp[VAR_15] + VAR_11;


        VAR_11 = *VAR_14 >> ((mp_digit)VAR_0);


        *VAR_14++ &= VAR_1;
      }
    }


    *VAR_14++ = VAR_11;


    for (VAR_15 = VAR_5->used; VAR_15 < VAR_7; VAR_15++) {
      *VAR_14++ = 0;
    }
  }

  FUNC_0 (VAR_5);
  return VAR_2;
}
