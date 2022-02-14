
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_1__ ;


struct TYPE_24__ {scalar_t__ sign; } ;
typedef TYPE_1__ mp_int ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__ const*,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*,int *) ;
 int FUNC_3 (TYPE_1__ const*,TYPE_1__ const*,TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__ const*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__ const*,TYPE_1__ const*,TYPE_1__*,TYPE_1__*) ;

int FUNC_8 (const mp_int * VAR_3, const mp_int * VAR_4, mp_int * VAR_5, mp_int * VAR_6)
{
  int VAR_7;


  if (VAR_5->sign == VAR_0) {
     return VAR_2;
  }


  if (VAR_4->sign == VAR_0) {
     mp_int VAR_8, VAR_9;
     int VAR_10;


     if ((VAR_10 = FUNC_4(&VAR_8)) != VAR_1) {
        return VAR_10;
     }
     if ((VAR_10 = FUNC_5(VAR_3, VAR_5, &VAR_8)) != VAR_1) {
        FUNC_1(&VAR_8);
        return VAR_10;
     }


     if ((VAR_10 = FUNC_4(&VAR_9)) != VAR_1) {
        FUNC_1(&VAR_8);
        return VAR_10;
     }
     if ((VAR_10 = FUNC_0(VAR_4, &VAR_9)) != VAR_1) {
        FUNC_2(&VAR_8, &VAR_9, ((void*)0));
        return VAR_10;
     }


     VAR_10 = FUNC_8(&VAR_8, &VAR_9, VAR_5, VAR_6);
     FUNC_2(&VAR_8, &VAR_9, ((void*)0));
     return VAR_10;
  }

  VAR_7 = 0;


  if (FUNC_6 (VAR_5) == 1) {
    return FUNC_3 (VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
  } else {

    return FUNC_7 (VAR_3, VAR_4, VAR_5, VAR_6);
  }
}
