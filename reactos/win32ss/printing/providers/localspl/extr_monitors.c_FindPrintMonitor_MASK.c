
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {struct TYPE_8__* Flink; } ;
struct TYPE_7__ {int pwszName; } ;
typedef TYPE_1__* PLOCAL_PRINT_MONITOR ;
typedef TYPE_2__* PLIST_ENTRY ;
typedef int PCWSTR ;


 TYPE_1__* FUNC_0 (TYPE_2__*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;

PLOCAL_PRINT_MONITOR
FUNC_3(PCWSTR VAR_3)
{
    PLIST_ENTRY VAR_4;
    PLOCAL_PRINT_MONITOR VAR_5;

    FUNC_1("FindPrintMonitor(%S)\n", VAR_3);

    if (!VAR_3)
        return ((void*)0);

    for (VAR_4 = VAR_2.Flink; VAR_4 != &VAR_2; VAR_4 = VAR_4->Flink)
    {
        VAR_5 = FUNC_0(VAR_4, VAR_1, VAR_0);

        if (FUNC_2(VAR_5->pwszName, VAR_3) == 0)
            return VAR_5;
    }

    return ((void*)0);
}
