
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_7__ {struct TYPE_7__* Flink; } ;
struct TYPE_6__ {scalar_t__ InformationClass; scalar_t__ EventHandle; } ;
typedef scalar_t__ POLICY_NOTIFICATION_INFORMATION_CLASS ;
typedef TYPE_1__* PLSA_NOTIFICATION_ENTRY ;
typedef TYPE_2__* PLIST_ENTRY ;


 TYPE_1__* FUNC_0 (TYPE_2__*,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,scalar_t__) ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int VAR_4 ;

VOID
FUNC_4(
    POLICY_NOTIFICATION_INFORMATION_CLASS VAR_5)
{
    PLIST_ENTRY VAR_6;
    PLSA_NOTIFICATION_ENTRY VAR_7;

    FUNC_1("LsapNotifyPolicyChange(%lu)\n", VAR_5);


    FUNC_2(&VAR_3, VAR_4);

    VAR_6 = VAR_2.Flink;
    while (VAR_6 != &VAR_2)
    {
        VAR_7 = FUNC_0(VAR_6, VAR_1, VAR_0);

        if (VAR_7->InformationClass == VAR_5)
        {
            FUNC_1("Notify event %p\n", VAR_7->EventHandle);

        }

        VAR_6 = VAR_6->Flink;
    }


    FUNC_3(&VAR_3);
}
