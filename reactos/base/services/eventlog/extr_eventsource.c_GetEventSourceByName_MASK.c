
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {struct TYPE_12__* szName; } ;
struct TYPE_11__ {struct TYPE_11__* Flink; } ;
typedef TYPE_1__* PLIST_ENTRY ;
typedef TYPE_2__* PEVENTSOURCE ;
typedef TYPE_2__* LPCWSTR ;


 TYPE_2__* FUNC_0 (TYPE_1__*,int ,int ) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (TYPE_2__*,TYPE_2__*) ;

PEVENTSOURCE
FUNC_5(LPCWSTR VAR_4)
{
    PLIST_ENTRY VAR_5;
    PEVENTSOURCE VAR_6, VAR_7 = ((void*)0);

    FUNC_1("GetEventSourceByName(%S)\n", VAR_4);
    FUNC_2(&VAR_1);

    VAR_5 = VAR_3.Flink;
    while (VAR_5 != &VAR_3)
    {
        VAR_6 = FUNC_0(VAR_5,
                                 VAR_0,
                                 VAR_2);

        FUNC_1("Item->szName: %S\n", VAR_6->szName);

        if (FUNC_4(VAR_6->szName, VAR_4) == 0)
        {
            FUNC_1("Found it\n");
            VAR_7 = VAR_6;
            break;
        }

        VAR_5 = VAR_5->Flink;
    }

    FUNC_3(&VAR_1);

    FUNC_1("Done (Result: %p)\n", VAR_7);

    return VAR_7;
}
