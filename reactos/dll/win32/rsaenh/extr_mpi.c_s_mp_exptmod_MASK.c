
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_1__ ;


struct TYPE_27__ {int used; int* dp; } ;
typedef TYPE_1__ mp_int ;
typedef int mp_digit ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__ const*) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__ const*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,int) ;
 int FUNC_10 (TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_11 (const mp_int * VAR_2, const mp_int * VAR_3, mp_int * VAR_4, mp_int * VAR_5)
{
  mp_int VAR_6[256], VAR_7, VAR_8;
  mp_digit VAR_9;
  int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;


  VAR_16 = FUNC_2 (VAR_3);
  if (VAR_16 <= 7) {
    VAR_18 = 2;
  } else if (VAR_16 <= 36) {
    VAR_18 = 3;
  } else if (VAR_16 <= 140) {
    VAR_18 = 4;
  } else if (VAR_16 <= 450) {
    VAR_18 = 5;
  } else if (VAR_16 <= 1303) {
    VAR_18 = 6;
  } else if (VAR_16 <= 3529) {
    VAR_18 = 7;
  } else {
    VAR_18 = 8;
  }



  if ((VAR_10 = FUNC_4(&VAR_6[1])) != VAR_1) {
     return VAR_10;
  }


  for (VAR_16 = 1<<(VAR_18-1); VAR_16 < (1 << VAR_18); VAR_16++) {
    if ((VAR_10 = FUNC_4(&VAR_6[VAR_16])) != VAR_1) {
      for (VAR_17 = 1<<(VAR_18-1); VAR_17 < VAR_16; VAR_17++) {
        FUNC_0 (&VAR_6[VAR_17]);
      }
      FUNC_0(&VAR_6[1]);
      return VAR_10;
    }
  }


  if ((VAR_10 = FUNC_4 (&VAR_8)) != VAR_1) {
    goto __M;
  }
  if ((VAR_10 = FUNC_8 (&VAR_8, VAR_4)) != VAR_1) {
    goto __MU;
  }
  if ((VAR_10 = FUNC_5 (VAR_2, VAR_4, &VAR_6[1])) != VAR_1) {
    goto __MU;
  }




  if ((VAR_10 = FUNC_1 (&VAR_6[1], &VAR_6[1 << (VAR_18 - 1)])) != VAR_1) {
    goto __MU;
  }

  for (VAR_16 = 0; VAR_16 < (VAR_18 - 1); VAR_16++) {
    if ((VAR_10 = FUNC_10 (&VAR_6[1 << (VAR_18 - 1)],
                       &VAR_6[1 << (VAR_18 - 1)])) != VAR_1) {
      goto __MU;
    }
    if ((VAR_10 = FUNC_7 (&VAR_6[1 << (VAR_18 - 1)], VAR_4, &VAR_8)) != VAR_1) {
      goto __MU;
    }
  }




  for (VAR_16 = (1 << (VAR_18 - 1)) + 1; VAR_16 < (1 << VAR_18); VAR_16++) {
    if ((VAR_10 = FUNC_6 (&VAR_6[VAR_16 - 1], &VAR_6[1], &VAR_6[VAR_16])) != VAR_1) {
      goto __MU;
    }
    if ((VAR_10 = FUNC_7 (&VAR_6[VAR_16], VAR_4, &VAR_8)) != VAR_1) {
      goto __MU;
    }
  }


  if ((VAR_10 = FUNC_4 (&VAR_7)) != VAR_1) {
    goto __MU;
  }
  FUNC_9 (&VAR_7, 1);


  VAR_14 = 0;
  VAR_13 = 1;
  VAR_9 = 0;
  VAR_15 = VAR_3->used - 1;
  VAR_12 = 0;
  VAR_11 = 0;

  for (;;) {

    if (--VAR_13 == 0) {

      if (VAR_15 == -1) {
        break;
      }

      VAR_9 = VAR_3->dp[VAR_15--];
      VAR_13 = VAR_0;
    }


    VAR_17 = (VAR_9 >> (mp_digit)(VAR_0 - 1)) & 1;
    VAR_9 <<= (mp_digit)1;






    if (VAR_14 == 0 && VAR_17 == 0) {
      continue;
    }


    if (VAR_14 == 1 && VAR_17 == 0) {
      if ((VAR_10 = FUNC_10 (&VAR_7, &VAR_7)) != VAR_1) {
        goto __RES;
      }
      if ((VAR_10 = FUNC_7 (&VAR_7, VAR_4, &VAR_8)) != VAR_1) {
        goto __RES;
      }
      continue;
    }


    VAR_11 |= (VAR_17 << (VAR_18 - ++VAR_12));
    VAR_14 = 2;

    if (VAR_12 == VAR_18) {


      for (VAR_16 = 0; VAR_16 < VAR_18; VAR_16++) {
        if ((VAR_10 = FUNC_10 (&VAR_7, &VAR_7)) != VAR_1) {
          goto __RES;
        }
        if ((VAR_10 = FUNC_7 (&VAR_7, VAR_4, &VAR_8)) != VAR_1) {
          goto __RES;
        }
      }


      if ((VAR_10 = FUNC_6 (&VAR_7, &VAR_6[VAR_11], &VAR_7)) != VAR_1) {
        goto __RES;
      }
      if ((VAR_10 = FUNC_7 (&VAR_7, VAR_4, &VAR_8)) != VAR_1) {
        goto __RES;
      }


      VAR_12 = 0;
      VAR_11 = 0;
      VAR_14 = 1;
    }
  }


  if (VAR_14 == 2 && VAR_12 > 0) {

    for (VAR_16 = 0; VAR_16 < VAR_12; VAR_16++) {
      if ((VAR_10 = FUNC_10 (&VAR_7, &VAR_7)) != VAR_1) {
        goto __RES;
      }
      if ((VAR_10 = FUNC_7 (&VAR_7, VAR_4, &VAR_8)) != VAR_1) {
        goto __RES;
      }

      VAR_11 <<= 1;
      if ((VAR_11 & (1 << VAR_18)) != 0) {

        if ((VAR_10 = FUNC_6 (&VAR_7, &VAR_6[1], &VAR_7)) != VAR_1) {
          goto __RES;
        }
        if ((VAR_10 = FUNC_7 (&VAR_7, VAR_4, &VAR_8)) != VAR_1) {
          goto __RES;
        }
      }
    }
  }

  FUNC_3 (&VAR_7, VAR_5);
  VAR_10 = VAR_1;
__RES:FUNC_0 (&VAR_7);
__MU:FUNC_0 (&VAR_8);
__M:
  FUNC_0(&VAR_6[1]);
  for (VAR_16 = 1<<(VAR_18-1); VAR_16 < (1 << VAR_18); VAR_16++) {
    FUNC_0 (&VAR_6[VAR_16]);
  }
  return VAR_10;
}
