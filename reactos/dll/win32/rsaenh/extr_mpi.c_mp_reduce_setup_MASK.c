
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int used; } ;
typedef TYPE_1__ mp_int ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__ const*,TYPE_1__*,int *) ;

int FUNC_2 (mp_int * VAR_2, const mp_int * VAR_3)
{
  int VAR_4;

  if ((VAR_4 = FUNC_0 (VAR_2, VAR_3->used * 2 * VAR_0)) != VAR_1) {
    return VAR_4;
  }
  return FUNC_1 (VAR_2, VAR_3, VAR_2, ((void*)0));
}
