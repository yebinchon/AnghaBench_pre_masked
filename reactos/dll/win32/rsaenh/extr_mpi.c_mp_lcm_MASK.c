
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_1__ ;


struct TYPE_20__ {int sign; } ;
typedef TYPE_1__ mp_int ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,TYPE_1__*,int *) ;
 scalar_t__ FUNC_1 (TYPE_1__ const*,TYPE_1__ const*) ;
 int FUNC_2 (TYPE_1__ const*,TYPE_1__*,TYPE_1__*,int *) ;
 int FUNC_3 (TYPE_1__ const*,TYPE_1__ const*,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,TYPE_1__*,int *) ;
 int FUNC_5 (TYPE_1__ const*,TYPE_1__*,TYPE_1__*) ;

int FUNC_6 (const mp_int * VAR_3, const mp_int * VAR_4, mp_int * VAR_5)
{
  int VAR_6;
  mp_int VAR_7, VAR_8;


  if ((VAR_6 = FUNC_4 (&VAR_7, &VAR_8, ((void*)0))) != VAR_1) {
    return VAR_6;
  }


  if ((VAR_6 = FUNC_3 (VAR_3, VAR_4, &VAR_7)) != VAR_1) {
    goto __T;
  }


  if (FUNC_1(VAR_3, VAR_4) == VAR_0) {

     if ((VAR_6 = FUNC_2(VAR_3, &VAR_7, &VAR_8, ((void*)0))) != VAR_1) {
        goto __T;
     }
     VAR_6 = FUNC_5(VAR_4, &VAR_8, VAR_5);
  } else {

     if ((VAR_6 = FUNC_2(VAR_4, &VAR_7, &VAR_8, ((void*)0))) != VAR_1) {
        goto __T;
     }
     VAR_6 = FUNC_5(VAR_3, &VAR_8, VAR_5);
  }


  VAR_5->sign = VAR_2;

__T:
  FUNC_0 (&VAR_7, &VAR_8, ((void*)0));
  return VAR_6;
}
