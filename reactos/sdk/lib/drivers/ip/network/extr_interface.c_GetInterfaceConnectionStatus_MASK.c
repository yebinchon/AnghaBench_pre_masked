
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_5__ {TYPE_1__* Context; } ;
struct TYPE_4__ {scalar_t__ State; } ;
typedef int * PULONG ;
typedef TYPE_1__* PLAN_ADAPTER ;
typedef TYPE_2__* PIP_INTERFACE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

VOID FUNC_0(PIP_INTERFACE VAR_3, PULONG VAR_4)
{
    PLAN_ADAPTER VAR_5 = VAR_3->Context;


    if (VAR_5 == ((void*)0) || VAR_5->State == VAR_0) {
        *VAR_4 = VAR_2;
    }
    else {
        *VAR_4 = VAR_1;
    }
}
