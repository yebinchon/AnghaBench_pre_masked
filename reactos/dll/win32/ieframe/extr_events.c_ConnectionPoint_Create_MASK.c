
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * lpVtbl; } ;
struct TYPE_6__ {int iid; int * container; scalar_t__ sinks_size; int * sinks; TYPE_1__ IConnectionPoint_iface; } ;
typedef int * REFIID ;
typedef int IConnectionPointContainer ;
typedef TYPE_2__ ConnectionPoint ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(REFIID VAR_1, ConnectionPoint **VAR_2,
                                   IConnectionPointContainer *VAR_3)
{
    ConnectionPoint *VAR_4 = FUNC_0(sizeof(ConnectionPoint));

    VAR_4->IConnectionPoint_iface.lpVtbl = &VAR_0;

    VAR_4->sinks = ((void*)0);
    VAR_4->sinks_size = 0;
    VAR_4->container = VAR_3;

    VAR_4->iid = *VAR_1;

    *VAR_2 = VAR_4;
}
