
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ sign; } ;
typedef TYPE_1__ mp_int ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__ const*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__ const*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

int FUNC_4 (const mp_int * VAR_2, mp_int * VAR_3, mp_int * VAR_4)
{

  if (VAR_3->sign == VAR_0 || FUNC_3(VAR_3) == 1) {
    return VAR_1;
  }


  if (FUNC_2 (VAR_3) == 1) {
    return FUNC_0 (VAR_2, VAR_3, VAR_4);
  }

  return FUNC_1(VAR_2, VAR_3, VAR_4);
}
