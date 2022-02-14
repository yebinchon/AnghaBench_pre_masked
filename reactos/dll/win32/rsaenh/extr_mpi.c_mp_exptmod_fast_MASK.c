
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_41__ TYPE_1__ ;


typedef int mp_word ;
struct TYPE_41__ {int used; int* dp; } ;
typedef TYPE_1__ const mp_int ;
typedef int mp_digit ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__ const*,TYPE_1__ const*,int) ;
 int FUNC_1 (TYPE_1__ const*) ;
 int FUNC_2 (TYPE_1__ const*,TYPE_1__ const*) ;
 int FUNC_3 (TYPE_1__ const*) ;
 int FUNC_4 (TYPE_1__ const*,TYPE_1__ const*,int) ;
 int FUNC_5 (TYPE_1__ const*,int*) ;
 int FUNC_6 (TYPE_1__ const*,TYPE_1__ const*) ;
 int FUNC_7 (TYPE_1__ const*) ;
 int FUNC_8 (TYPE_1__ const*,TYPE_1__ const*,TYPE_1__ const*) ;
 int FUNC_9 (TYPE_1__ const*,TYPE_1__ const*) ;
 int FUNC_10 (TYPE_1__ const*,TYPE_1__ const*,int) ;
 int FUNC_11 (TYPE_1__ const*,int*) ;
 int FUNC_12 (TYPE_1__ const*,TYPE_1__ const*,TYPE_1__ const*) ;
 int FUNC_13 (TYPE_1__ const*,TYPE_1__ const*,TYPE_1__ const*,TYPE_1__ const*) ;
 int FUNC_14 (TYPE_1__ const*,TYPE_1__ const*,int) ;
 int FUNC_15 (TYPE_1__ const*,int*) ;
 int FUNC_16 (TYPE_1__ const*,int) ;
 int FUNC_17 (TYPE_1__ const*,TYPE_1__ const*) ;

int
FUNC_18 (const mp_int * VAR_4, const mp_int * VAR_5, mp_int * VAR_6, mp_int * VAR_7, int VAR_8)
{
  mp_int VAR_9[256], VAR_10;
  mp_digit VAR_11, VAR_12;
  int VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;





  int (*VAR_22)(mp_int*,const mp_int*,mp_digit);


  VAR_19 = FUNC_3 (VAR_5);
  if (VAR_19 <= 7) {
    VAR_21 = 2;
  } else if (VAR_19 <= 36) {
    VAR_21 = 3;
  } else if (VAR_19 <= 140) {
    VAR_21 = 4;
  } else if (VAR_19 <= 450) {
    VAR_21 = 5;
  } else if (VAR_19 <= 1303) {
    VAR_21 = 6;
  } else if (VAR_19 <= 3529) {
    VAR_21 = 7;
  } else {
    VAR_21 = 8;
  }



  if ((VAR_13 = FUNC_7(&VAR_9[1])) != VAR_2) {
     return VAR_13;
  }


  for (VAR_19 = 1<<(VAR_21-1); VAR_19 < (1 << VAR_21); VAR_19++) {
    if ((VAR_13 = FUNC_7(&VAR_9[VAR_19])) != VAR_2) {
      for (VAR_20 = 1<<(VAR_21-1); VAR_20 < VAR_19; VAR_20++) {
        FUNC_1 (&VAR_9[VAR_20]);
      }
      FUNC_1(&VAR_9[1]);
      return VAR_13;
    }
  }


  if (VAR_8 == 0) {

     if ((VAR_13 = FUNC_11 (VAR_6, &VAR_12)) != VAR_2) {
        goto __M;
     }


     if (((VAR_6->used * 2 + 1) < VAR_3) &&
          VAR_6->used < (1 << ((VAR_0 * sizeof (mp_word)) - (2 * VAR_1)))) {
        VAR_22 = FUNC_0;
     } else {

        VAR_22 = FUNC_10;
     }
  } else if (VAR_8 == 1) {

     FUNC_5(VAR_6, &VAR_12);
     VAR_22 = FUNC_4;
  } else {

     if ((VAR_13 = FUNC_15(VAR_6, &VAR_12)) != VAR_2) {
        goto __M;
     }
     VAR_22 = FUNC_14;
  }


  if ((VAR_13 = FUNC_7 (&VAR_10)) != VAR_2) {
    goto __M;
  }
  if (VAR_8 == 0) {

     if ((VAR_13 = FUNC_9 (&VAR_10, VAR_6)) != VAR_2) {
       goto __RES;
     }


     if ((VAR_13 = FUNC_13 (VAR_4, &VAR_10, VAR_6, &VAR_9[1])) != VAR_2) {
       goto __RES;
     }
  } else {
     FUNC_16(&VAR_10, 1);
     if ((VAR_13 = FUNC_8(VAR_4, VAR_6, &VAR_9[1])) != VAR_2) {
        goto __RES;
     }
  }


  if ((VAR_13 = FUNC_2 (&VAR_9[1], &VAR_9[1 << (VAR_21 - 1)])) != VAR_2) {
    goto __RES;
  }

  for (VAR_19 = 0; VAR_19 < (VAR_21 - 1); VAR_19++) {
    if ((VAR_13 = FUNC_17 (&VAR_9[1 << (VAR_21 - 1)], &VAR_9[1 << (VAR_21 - 1)])) != VAR_2) {
      goto __RES;
    }
    if ((VAR_13 = VAR_22 (&VAR_9[1 << (VAR_21 - 1)], VAR_6, VAR_12)) != VAR_2) {
      goto __RES;
    }
  }


  for (VAR_19 = (1 << (VAR_21 - 1)) + 1; VAR_19 < (1 << VAR_21); VAR_19++) {
    if ((VAR_13 = FUNC_12 (&VAR_9[VAR_19 - 1], &VAR_9[1], &VAR_9[VAR_19])) != VAR_2) {
      goto __RES;
    }
    if ((VAR_13 = VAR_22 (&VAR_9[VAR_19], VAR_6, VAR_12)) != VAR_2) {
      goto __RES;
    }
  }


  VAR_17 = 0;
  VAR_16 = 1;
  VAR_11 = 0;
  VAR_18 = VAR_5->used - 1;
  VAR_15 = 0;
  VAR_14 = 0;

  for (;;) {

    if (--VAR_16 == 0) {

      if (VAR_18 == -1) {
        break;
      }

      VAR_11 = VAR_5->dp[VAR_18--];
      VAR_16 = VAR_1;
    }


    VAR_20 = (VAR_11 >> (VAR_1 - 1)) & 1;
    VAR_11 <<= (mp_digit)1;






    if (VAR_17 == 0 && VAR_20 == 0) {
      continue;
    }


    if (VAR_17 == 1 && VAR_20 == 0) {
      if ((VAR_13 = FUNC_17 (&VAR_10, &VAR_10)) != VAR_2) {
        goto __RES;
      }
      if ((VAR_13 = VAR_22 (&VAR_10, VAR_6, VAR_12)) != VAR_2) {
        goto __RES;
      }
      continue;
    }


    VAR_14 |= (VAR_20 << (VAR_21 - ++VAR_15));
    VAR_17 = 2;

    if (VAR_15 == VAR_21) {


      for (VAR_19 = 0; VAR_19 < VAR_21; VAR_19++) {
        if ((VAR_13 = FUNC_17 (&VAR_10, &VAR_10)) != VAR_2) {
          goto __RES;
        }
        if ((VAR_13 = VAR_22 (&VAR_10, VAR_6, VAR_12)) != VAR_2) {
          goto __RES;
        }
      }


      if ((VAR_13 = FUNC_12 (&VAR_10, &VAR_9[VAR_14], &VAR_10)) != VAR_2) {
        goto __RES;
      }
      if ((VAR_13 = VAR_22 (&VAR_10, VAR_6, VAR_12)) != VAR_2) {
        goto __RES;
      }


      VAR_15 = 0;
      VAR_14 = 0;
      VAR_17 = 1;
    }
  }


  if (VAR_17 == 2 && VAR_15 > 0) {

    for (VAR_19 = 0; VAR_19 < VAR_15; VAR_19++) {
      if ((VAR_13 = FUNC_17 (&VAR_10, &VAR_10)) != VAR_2) {
        goto __RES;
      }
      if ((VAR_13 = VAR_22 (&VAR_10, VAR_6, VAR_12)) != VAR_2) {
        goto __RES;
      }


      VAR_14 <<= 1;
      if ((VAR_14 & (1 << VAR_21)) != 0) {

        if ((VAR_13 = FUNC_12 (&VAR_10, &VAR_9[1], &VAR_10)) != VAR_2) {
          goto __RES;
        }
        if ((VAR_13 = VAR_22 (&VAR_10, VAR_6, VAR_12)) != VAR_2) {
          goto __RES;
        }
      }
    }
  }

  if (VAR_8 == 0) {






     if ((VAR_13 = VAR_22(&VAR_10, VAR_6, VAR_12)) != VAR_2) {
       goto __RES;
     }
  }


  FUNC_6 (&VAR_10, VAR_7);
  VAR_13 = VAR_2;
__RES:FUNC_1 (&VAR_10);
__M:
  FUNC_1(&VAR_9[1]);
  for (VAR_19 = 1<<(VAR_21-1); VAR_19 < (1 << VAR_21); VAR_19++) {
    FUNC_1 (&VAR_9[VAR_19]);
  }
  return VAR_13;
}
