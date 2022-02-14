
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int Context; } ;
struct TYPE_4__ {int Speed; } ;
typedef int * PUINT ;
typedef TYPE_1__* PLAN_ADAPTER ;
typedef TYPE_2__* PIP_INTERFACE ;
typedef int NTSTATUS ;


 int VAR_0 ;

NTSTATUS FUNC_0( PIP_INTERFACE VAR_1, PUINT VAR_2 ) {
    PLAN_ADAPTER VAR_3 = (PLAN_ADAPTER)VAR_1->Context;

    *VAR_2 = VAR_3->Speed;

    return VAR_0;
}
