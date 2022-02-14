
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {struct TYPE_10__* Flink; } ;
struct TYPE_9__ {TYPE_3__ RegistryPorts; } ;
struct TYPE_8__ {int pwszPortName; } ;
typedef TYPE_1__* PLOCALMON_PORT ;
typedef TYPE_2__* PLOCALMON_HANDLE ;
typedef TYPE_3__* PLIST_ENTRY ;
typedef int PCWSTR ;


 TYPE_1__* FUNC_0 (TYPE_3__*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static PLOCALMON_PORT
FUNC_2(PLOCALMON_HANDLE VAR_2, PCWSTR VAR_3)
{
    PLIST_ENTRY VAR_4;
    PLOCALMON_PORT VAR_5;

    for (VAR_4 = VAR_2->RegistryPorts.Flink; VAR_4 != &VAR_2->RegistryPorts; VAR_4 = VAR_4->Flink)
    {
        VAR_5 = FUNC_0(VAR_4, VAR_1, VAR_0);

        if (FUNC_1(VAR_5->pwszPortName, VAR_3) == 0)
            return VAR_5;
    }

    return ((void*)0);
}
