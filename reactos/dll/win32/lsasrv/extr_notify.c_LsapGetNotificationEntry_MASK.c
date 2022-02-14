
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {struct TYPE_8__* Flink; } ;
struct TYPE_7__ {scalar_t__ EventHandle; scalar_t__ InformationClass; } ;
typedef scalar_t__ POLICY_NOTIFICATION_INFORMATION_CLASS ;
typedef TYPE_1__* PLSA_NOTIFICATION_ENTRY ;
typedef TYPE_2__* PLIST_ENTRY ;
typedef scalar_t__ HANDLE ;


 TYPE_1__* FUNC_0 (TYPE_2__*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;

__attribute__((used)) static
PLSA_NOTIFICATION_ENTRY
FUNC_1(
    HANDLE VAR_3,
    POLICY_NOTIFICATION_INFORMATION_CLASS VAR_4)
{
    PLIST_ENTRY VAR_5;
    PLSA_NOTIFICATION_ENTRY VAR_6;

    VAR_5 = VAR_2.Flink;
    while (VAR_5 != &VAR_2)
    {
        VAR_6 = FUNC_0(VAR_5, VAR_1, VAR_0);

        if ((VAR_6->EventHandle == VAR_3) &&
            (VAR_6->InformationClass == VAR_4))
            return VAR_6;

        VAR_5 = VAR_5->Flink;
    }

    return ((void*)0);
}
