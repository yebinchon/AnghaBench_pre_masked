
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* Flink; } ;
typedef int * PLOGFILE ;
typedef TYPE_1__* PLIST_ENTRY ;
typedef scalar_t__ DWORD ;


 int * FUNC_0 (TYPE_1__*,int ,int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;

PLOGFILE FUNC_3(DWORD VAR_4)
{
    PLIST_ENTRY VAR_5;
    PLOGFILE VAR_6 = ((void*)0);
    DWORD VAR_7 = 1;

    FUNC_1(&VAR_2);

    VAR_5 = VAR_3.Flink;
    while (VAR_5 != &VAR_3)
    {
        if (VAR_7 == VAR_4)
        {
            VAR_6 = FUNC_0(VAR_5, VAR_0, VAR_1);
            break;
        }

        VAR_5 = VAR_5->Flink;
        VAR_7++;
    }

    FUNC_2(&VAR_2);
    return VAR_6;
}
