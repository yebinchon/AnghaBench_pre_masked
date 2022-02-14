
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_38__ TYPE_1__ ;


struct TYPE_38__ {int sign; } ;
typedef TYPE_1__ mp_int ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__ const*,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*,TYPE_1__*,TYPE_1__*,TYPE_1__*,TYPE_1__*,int *) ;
 scalar_t__ FUNC_3 (TYPE_1__*,TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,TYPE_1__*,TYPE_1__*,TYPE_1__*,TYPE_1__*,TYPE_1__*,int *) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 scalar_t__ FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*,int) ;
 int FUNC_13 (TYPE_1__*,TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_14 (const mp_int * VAR_5, mp_int * VAR_6, mp_int * VAR_7)
{
  mp_int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
  int VAR_14, VAR_15;


  if (FUNC_9 (VAR_6) == 1) {
    return VAR_4;
  }


  if ((VAR_14 = FUNC_8(&VAR_8, &VAR_9, &VAR_10, &VAR_11, &VAR_12, &VAR_13, ((void*)0))) != VAR_3) {
     return VAR_14;
  }


  if ((VAR_14 = FUNC_5 (VAR_6, &VAR_8)) != VAR_3) {
    goto __ERR;
  }


  if ((VAR_14 = FUNC_0 (VAR_5, &VAR_9)) != VAR_3) {
    goto __ERR;
  }


  if ((VAR_14 = FUNC_5 (&VAR_8, &VAR_10)) != VAR_3) {
    goto __ERR;
  }
  if ((VAR_14 = FUNC_5 (&VAR_9, &VAR_11)) != VAR_3) {
    goto __ERR;
  }
  FUNC_12 (&VAR_13, 1);

top:

  while (FUNC_9 (&VAR_10) == 1) {

    if ((VAR_14 = FUNC_6 (&VAR_10, &VAR_10)) != VAR_3) {
      goto __ERR;
    }

    if (FUNC_10 (&VAR_12) == 1) {
      if ((VAR_14 = FUNC_13 (&VAR_12, &VAR_8, &VAR_12)) != VAR_3) {
        goto __ERR;
      }
    }

    if ((VAR_14 = FUNC_6 (&VAR_12, &VAR_12)) != VAR_3) {
      goto __ERR;
    }
  }


  while (FUNC_9 (&VAR_11) == 1) {

    if ((VAR_14 = FUNC_6 (&VAR_11, &VAR_11)) != VAR_3) {
      goto __ERR;
    }

    if (FUNC_10 (&VAR_13) == 1) {

      if ((VAR_14 = FUNC_13 (&VAR_13, &VAR_8, &VAR_13)) != VAR_3) {
        goto __ERR;
      }
    }

    if ((VAR_14 = FUNC_6 (&VAR_13, &VAR_13)) != VAR_3) {
      goto __ERR;
    }
  }


  if (FUNC_3 (&VAR_10, &VAR_11) != VAR_1) {

    if ((VAR_14 = FUNC_13 (&VAR_10, &VAR_11, &VAR_10)) != VAR_3) {
      goto __ERR;
    }

    if ((VAR_14 = FUNC_13 (&VAR_12, &VAR_13, &VAR_12)) != VAR_3) {
      goto __ERR;
    }
  } else {

    if ((VAR_14 = FUNC_13 (&VAR_11, &VAR_10, &VAR_11)) != VAR_3) {
      goto __ERR;
    }

    if ((VAR_14 = FUNC_13 (&VAR_13, &VAR_12, &VAR_13)) != VAR_3) {
      goto __ERR;
    }
  }


  if (FUNC_11 (&VAR_10) == 0) {
    goto top;
  }




  if (FUNC_4 (&VAR_11, 1) != VAR_0) {
    VAR_14 = VAR_4;
    goto __ERR;
  }


  VAR_15 = VAR_5->sign;
  while (VAR_13.sign == VAR_2) {
    if ((VAR_14 = FUNC_1 (&VAR_13, VAR_6, &VAR_13)) != VAR_3) {
      goto __ERR;
    }
  }
  FUNC_7 (&VAR_13, VAR_7);
  VAR_7->sign = VAR_15;
  VAR_14 = VAR_3;

__ERR:FUNC_2 (&VAR_8, &VAR_9, &VAR_10, &VAR_11, &VAR_12, &VAR_13, ((void*)0));
  return VAR_14;
}
