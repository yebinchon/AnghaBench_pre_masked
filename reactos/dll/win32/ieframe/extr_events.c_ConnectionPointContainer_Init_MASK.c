
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * lpVtbl; } ;
struct TYPE_4__ {int * impl; TYPE_2__ IConnectionPointContainer_iface; int pns; int wbe; int wbe2; } ;
typedef int IUnknown ;
typedef TYPE_1__ ConnectionPointContainer ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_1(ConnectionPointContainer *VAR_4, IUnknown *VAR_5)
{
    VAR_4->IConnectionPointContainer_iface.lpVtbl = &VAR_0;

    FUNC_0(&VAR_2, &VAR_4->wbe2, &VAR_4->IConnectionPointContainer_iface);
    FUNC_0(&VAR_1, &VAR_4->wbe, &VAR_4->IConnectionPointContainer_iface);
    FUNC_0(&VAR_3, &VAR_4->pns, &VAR_4->IConnectionPointContainer_iface);

    VAR_4->impl = VAR_5;
}
