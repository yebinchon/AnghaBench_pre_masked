
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ lpVtbl; } ;
struct change_notify {scalar_t__ pEnumerator; TYPE_1__ client; } ;
struct wasapi_state {struct change_notify change; } ;
struct ao {struct wasapi_state* priv; } ;
typedef int IMMNotificationClient ;


 int FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (scalar_t__) ;

void FUNC_2(struct ao *VAR_0)
{
    struct wasapi_state *VAR_1 = VAR_0->priv;
    struct change_notify *VAR_2 = &VAR_1->change;

    if (VAR_2->pEnumerator && VAR_2->client.lpVtbl) {
        FUNC_0(
            VAR_2->pEnumerator, (IMMNotificationClient *)VAR_2);
    }

    FUNC_1(VAR_2->pEnumerator);
}
