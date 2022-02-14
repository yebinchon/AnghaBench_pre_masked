
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int cp_static_data_t ;
struct TYPE_4__ {int * lpVtbl; } ;
struct TYPE_5__ {int * data; int iid; scalar_t__ sinks_size; int * sinks; int * container; TYPE_1__ IConnectionPoint_iface; } ;
typedef int REFIID ;
typedef int ConnectionPointContainer ;
typedef TYPE_2__ ConnectionPoint ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(ConnectionPoint *VAR_1, ConnectionPointContainer *VAR_2, REFIID VAR_3, cp_static_data_t *VAR_4)
{
    VAR_1->IConnectionPoint_iface.lpVtbl = &VAR_0;
    VAR_1->container = VAR_2;
    VAR_1->sinks = ((void*)0);
    VAR_1->sinks_size = 0;
    VAR_1->iid = VAR_3;
    VAR_1->data = VAR_4;
}
