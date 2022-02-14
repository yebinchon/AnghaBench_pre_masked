
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {struct TYPE_8__* Flink; } ;
struct TYPE_7__ {scalar_t__ LogName; } ;
typedef TYPE_1__* PLOGFILE ;
typedef TYPE_2__* PLIST_ENTRY ;
typedef int LPCWSTR ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (TYPE_2__*,int ,int ) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 int FUNC_4 (scalar_t__,int ) ;

PLOGFILE FUNC_5(LPCWSTR VAR_4)
{
    PLIST_ENTRY VAR_5;
    PLOGFILE VAR_6, VAR_7 = ((void*)0);

    FUNC_0(VAR_4);

    FUNC_2(&VAR_2);

    VAR_5 = VAR_3.Flink;
    while (VAR_5 != &VAR_3)
    {
        VAR_6 = FUNC_1(VAR_5, VAR_0, VAR_1);

        if (VAR_6->LogName && !FUNC_4(VAR_6->LogName, VAR_4))
        {
            VAR_7 = VAR_6;
            break;
        }

        VAR_5 = VAR_5->Flink;
    }

    FUNC_3(&VAR_2);
    return VAR_7;
}
