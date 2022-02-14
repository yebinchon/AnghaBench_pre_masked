
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t sinks_size; TYPE_1__* sinks; } ;
struct TYPE_4__ {scalar_t__ propnotif; } ;
typedef size_t DWORD ;
typedef int DISPID ;
typedef int ConnectionPointContainer ;
typedef TYPE_2__ ConnectionPoint ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int ) ;
 TYPE_2__* FUNC_1 (int *,int *,int ) ;

void FUNC_2(ConnectionPointContainer *VAR_2, DISPID VAR_3)
{
    ConnectionPoint *VAR_4;
    DWORD VAR_5;

    VAR_4 = FUNC_1(VAR_2, &VAR_1, VAR_0);
    if(!VAR_4)
        return;

    for(VAR_5=0; VAR_5<VAR_4->sinks_size; VAR_5++) {
        if(VAR_4->sinks[VAR_5].propnotif)
            FUNC_0(VAR_4->sinks[VAR_5].propnotif, VAR_3);
    }
}
