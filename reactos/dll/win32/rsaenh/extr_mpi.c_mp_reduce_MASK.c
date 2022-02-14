
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_1__ ;


struct TYPE_34__ {int used; } ;
typedef TYPE_1__ mp_int ;
typedef int mp_digit ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,TYPE_1__ const*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (TYPE_1__*,int,TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,TYPE_1__ const*,TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,int) ;
 int FUNC_9 (TYPE_1__*,int) ;
 int FUNC_10 (TYPE_1__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*,TYPE_1__ const*,TYPE_1__*,int) ;
 int FUNC_12 (TYPE_1__*,TYPE_1__ const*,TYPE_1__*,int) ;
 int FUNC_13 (TYPE_1__*,TYPE_1__ const*,TYPE_1__*) ;

int
FUNC_14 (mp_int * VAR_3, const mp_int * VAR_4, const mp_int * VAR_5)
{
  mp_int VAR_6;
  int VAR_7, VAR_8 = VAR_4->used;


  if ((VAR_7 = FUNC_4 (&VAR_6, VAR_3)) != VAR_2) {
    return VAR_7;
  }


  FUNC_8 (&VAR_6, VAR_8 - 1);


  if (((unsigned long) VAR_8) > (((mp_digit)1) << (VAR_0 - 1))) {
    if ((VAR_7 = FUNC_7 (&VAR_6, VAR_5, &VAR_6)) != VAR_2) {
      goto CLEANUP;
    }
  } else {
    if ((VAR_7 = FUNC_12 (&VAR_6, VAR_5, &VAR_6, VAR_8 - 1)) != VAR_2) {
      goto CLEANUP;
    }
  }


  FUNC_8 (&VAR_6, VAR_8 + 1);


  if ((VAR_7 = FUNC_6 (VAR_3, VAR_0 * (VAR_8 + 1), VAR_3)) != VAR_2) {
    goto CLEANUP;
  }


  if ((VAR_7 = FUNC_11 (&VAR_6, VAR_4, &VAR_6, VAR_8 + 1)) != VAR_2) {
    goto CLEANUP;
  }


  if ((VAR_7 = FUNC_10 (VAR_3, &VAR_6, VAR_3)) != VAR_2) {
    goto CLEANUP;
  }


  if (FUNC_3 (VAR_3, 0) == VAR_1) {
    FUNC_9 (&VAR_6, 1);
    if ((VAR_7 = FUNC_5 (&VAR_6, VAR_8 + 1)) != VAR_2)
      goto CLEANUP;
    if ((VAR_7 = FUNC_0 (VAR_3, &VAR_6, VAR_3)) != VAR_2)
      goto CLEANUP;
  }


  while (FUNC_2 (VAR_3, VAR_4) != VAR_1) {
    if ((VAR_7 = FUNC_13 (VAR_3, VAR_4, VAR_3)) != VAR_2) {
      goto CLEANUP;
    }
  }

CLEANUP:
  FUNC_1 (&VAR_6);

  return VAR_7;
}
