
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_42__ TYPE_1__ ;


struct TYPE_42__ {scalar_t__ sign; } ;
typedef TYPE_1__ const mp_int ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__ const*,TYPE_1__ const*,TYPE_1__ const*) ;
 int FUNC_1 (TYPE_1__ const*,TYPE_1__ const*,TYPE_1__ const*,TYPE_1__ const*,TYPE_1__ const*,TYPE_1__ const*,TYPE_1__ const*,TYPE_1__ const*,int *) ;
 scalar_t__ FUNC_2 (TYPE_1__ const*,TYPE_1__ const*) ;
 scalar_t__ FUNC_3 (TYPE_1__ const*,int) ;
 scalar_t__ FUNC_4 (TYPE_1__ const*,TYPE_1__ const*) ;
 int FUNC_5 (TYPE_1__ const*,TYPE_1__ const*) ;
 int FUNC_6 (TYPE_1__ const*,TYPE_1__ const*) ;
 int FUNC_7 (TYPE_1__ const*,TYPE_1__ const*) ;
 int FUNC_8 (TYPE_1__ const*,TYPE_1__ const*,TYPE_1__ const*,TYPE_1__ const*,TYPE_1__ const*,TYPE_1__ const*,TYPE_1__ const*,TYPE_1__ const*,int *) ;
 int FUNC_9 (TYPE_1__ const*) ;
 int FUNC_10 (TYPE_1__ const*) ;
 scalar_t__ FUNC_11 (TYPE_1__ const*) ;
 int FUNC_12 (TYPE_1__ const*,int) ;
 int FUNC_13 (TYPE_1__ const*,TYPE_1__ const*,TYPE_1__ const*) ;

int FUNC_14 (const mp_int * VAR_5, mp_int * VAR_6, mp_int * VAR_7)
{
  mp_int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
  int VAR_16;


  if (VAR_6->sign == VAR_2 || FUNC_11(VAR_6) == 1) {
    return VAR_4;
  }


  if ((VAR_16 = FUNC_8(&VAR_8, &VAR_9, &VAR_10, &VAR_11,
                           &VAR_12, &VAR_13, &VAR_14, &VAR_15, ((void*)0))) != VAR_3) {
     return VAR_16;
  }


  if ((VAR_16 = FUNC_5 (VAR_5, &VAR_8)) != VAR_3) {
    goto __ERR;
  }
  if ((VAR_16 = FUNC_5 (VAR_6, &VAR_9)) != VAR_3) {
    goto __ERR;
  }


  if (FUNC_9 (&VAR_8) == 1 && FUNC_9 (&VAR_9) == 1) {
    VAR_16 = VAR_4;
    goto __ERR;
  }


  if ((VAR_16 = FUNC_5 (&VAR_8, &VAR_10)) != VAR_3) {
    goto __ERR;
  }
  if ((VAR_16 = FUNC_5 (&VAR_9, &VAR_11)) != VAR_3) {
    goto __ERR;
  }
  FUNC_12 (&VAR_12, 1);
  FUNC_12 (&VAR_15, 1);

top:

  while (FUNC_9 (&VAR_10) == 1) {

    if ((VAR_16 = FUNC_6 (&VAR_10, &VAR_10)) != VAR_3) {
      goto __ERR;
    }

    if (FUNC_10 (&VAR_12) == 1 || FUNC_10 (&VAR_13) == 1) {

      if ((VAR_16 = FUNC_0 (&VAR_12, &VAR_9, &VAR_12)) != VAR_3) {
         goto __ERR;
      }
      if ((VAR_16 = FUNC_13 (&VAR_13, &VAR_8, &VAR_13)) != VAR_3) {
         goto __ERR;
      }
    }

    if ((VAR_16 = FUNC_6 (&VAR_12, &VAR_12)) != VAR_3) {
      goto __ERR;
    }
    if ((VAR_16 = FUNC_6 (&VAR_13, &VAR_13)) != VAR_3) {
      goto __ERR;
    }
  }


  while (FUNC_9 (&VAR_11) == 1) {

    if ((VAR_16 = FUNC_6 (&VAR_11, &VAR_11)) != VAR_3) {
      goto __ERR;
    }

    if (FUNC_10 (&VAR_14) == 1 || FUNC_10 (&VAR_15) == 1) {

      if ((VAR_16 = FUNC_0 (&VAR_14, &VAR_9, &VAR_14)) != VAR_3) {
         goto __ERR;
      }
      if ((VAR_16 = FUNC_13 (&VAR_15, &VAR_8, &VAR_15)) != VAR_3) {
         goto __ERR;
      }
    }

    if ((VAR_16 = FUNC_6 (&VAR_14, &VAR_14)) != VAR_3) {
      goto __ERR;
    }
    if ((VAR_16 = FUNC_6 (&VAR_15, &VAR_15)) != VAR_3) {
      goto __ERR;
    }
  }


  if (FUNC_2 (&VAR_10, &VAR_11) != VAR_1) {

    if ((VAR_16 = FUNC_13 (&VAR_10, &VAR_11, &VAR_10)) != VAR_3) {
      goto __ERR;
    }

    if ((VAR_16 = FUNC_13 (&VAR_12, &VAR_14, &VAR_12)) != VAR_3) {
      goto __ERR;
    }

    if ((VAR_16 = FUNC_13 (&VAR_13, &VAR_15, &VAR_13)) != VAR_3) {
      goto __ERR;
    }
  } else {

    if ((VAR_16 = FUNC_13 (&VAR_11, &VAR_10, &VAR_11)) != VAR_3) {
      goto __ERR;
    }

    if ((VAR_16 = FUNC_13 (&VAR_14, &VAR_12, &VAR_14)) != VAR_3) {
      goto __ERR;
    }

    if ((VAR_16 = FUNC_13 (&VAR_15, &VAR_13, &VAR_15)) != VAR_3) {
      goto __ERR;
    }
  }


  if (FUNC_11 (&VAR_10) == 0)
    goto top;




  if (FUNC_3 (&VAR_11, 1) != VAR_0) {
    VAR_16 = VAR_4;
    goto __ERR;
  }


  while (FUNC_3(&VAR_14, 0) == VAR_1) {
      if ((VAR_16 = FUNC_0(&VAR_14, VAR_6, &VAR_14)) != VAR_3) {
         goto __ERR;
      }
  }


  while (FUNC_4(&VAR_14, VAR_6) != VAR_1) {
      if ((VAR_16 = FUNC_13(&VAR_14, VAR_6, &VAR_14)) != VAR_3) {
         goto __ERR;
      }
  }


  FUNC_7 (&VAR_14, VAR_7);
  VAR_16 = VAR_3;
__ERR:FUNC_1 (&VAR_8, &VAR_9, &VAR_10, &VAR_11, &VAR_12, &VAR_13, &VAR_14, &VAR_15, ((void*)0));
  return VAR_16;
}
