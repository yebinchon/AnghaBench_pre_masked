
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int InformationClass; int NotificationEventHandle; scalar_t__ Register; } ;
struct TYPE_11__ {TYPE_1__ Request; } ;
struct TYPE_13__ {TYPE_2__ PolicyChangeNotify; } ;
struct TYPE_12__ {int Entry; int EventHandle; int InformationClass; } ;
typedef TYPE_3__* PLSA_NOTIFICATION_ENTRY ;
typedef TYPE_4__* PLSA_API_MSG ;
typedef int NTSTATUS ;
typedef int LSA_NOTIFICATION_ENTRY ;


 int FUNC_0 (char*,TYPE_4__*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;
 TYPE_3__* FUNC_2 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 TYPE_3__* FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ,int ,TYPE_3__*) ;
 int FUNC_7 () ;
 int FUNC_8 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

NTSTATUS
FUNC_9(
    PLSA_API_MSG VAR_7)
{
    PLSA_NOTIFICATION_ENTRY VAR_8;
    NTSTATUS VAR_9 = VAR_5;

    FUNC_0("LsapRegisterNotification(%p)\n", VAR_7);


    FUNC_4(&VAR_2, VAR_6);

    if (VAR_7->PolicyChangeNotify.Request.Register)
    {

        VAR_8 = FUNC_5(FUNC_7(),
                                 VAR_0,
                                 sizeof(LSA_NOTIFICATION_ENTRY));
        if (VAR_8 == ((void*)0))
        {
            VAR_9 = VAR_3;
            goto done;
        }

        VAR_8->InformationClass = VAR_7->PolicyChangeNotify.Request.InformationClass;
        VAR_8->EventHandle = VAR_7->PolicyChangeNotify.Request.NotificationEventHandle;

        FUNC_1(&VAR_1,
                       &VAR_8->Entry);
    }
    else
    {

        VAR_8 = FUNC_2(VAR_7->PolicyChangeNotify.Request.NotificationEventHandle,
                                          VAR_7->PolicyChangeNotify.Request.InformationClass);
        if (VAR_8 == ((void*)0))
        {
            VAR_9 = VAR_4;
            goto done;
        }

        FUNC_3(&VAR_8->Entry);
        FUNC_6(FUNC_7(), 0, VAR_8);
    }

done:

    FUNC_8(&VAR_2);

    return VAR_9;
}
