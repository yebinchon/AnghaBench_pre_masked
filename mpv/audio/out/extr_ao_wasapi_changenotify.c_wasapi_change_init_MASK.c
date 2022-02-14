
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * lpVtbl; } ;
struct change_notify {int is_hotplug; int pEnumerator; TYPE_1__ client; int monitored; struct ao* ao; } ;
struct wasapi_state {int deviceID; struct change_notify change; } ;
struct ao {struct wasapi_state* priv; } ;
typedef int IMMNotificationClient ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int ,int *,void**) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct ao*,char*) ;
 int FUNC_4 (struct wasapi_state*,char*,int ) ;
 int FUNC_5 (struct ao*,char*,int ) ;
 int FUNC_6 (int ) ;
 int VAR_3 ;
 int FUNC_7 (struct ao*) ;

HRESULT FUNC_8(struct ao *VAR_4, bool VAR_5)
{
    struct wasapi_state *VAR_6 = VAR_4->priv;
    struct change_notify *VAR_7 = &VAR_6->change;
    HRESULT VAR_8 = FUNC_0(&VAR_1, ((void*)0), VAR_0,
                                  &VAR_2,
                                  (void **)&VAR_7->pEnumerator);
    FUNC_1(VAR_8);


    VAR_7->ao = VAR_4;


    VAR_7->is_hotplug = VAR_5;

    if (VAR_5) {
        FUNC_3(VAR_4, "Monitoring for hotplug events\n");
    } else {

        VAR_7->monitored = VAR_6->deviceID;
        FUNC_5(VAR_4, "Monitoring changes in device %ls\n", VAR_7->monitored);
    }


    VAR_7->client.lpVtbl = &VAR_3;


    VAR_8 = FUNC_2(
        VAR_7->pEnumerator, (IMMNotificationClient *)VAR_7);
    FUNC_1(VAR_8);

    return VAR_8;
exit_label:
    FUNC_4(VAR_6, "Error setting up device change monitoring: %s\n",
           FUNC_6(VAR_8));
    FUNC_7(VAR_4);
    return VAR_8;
}
