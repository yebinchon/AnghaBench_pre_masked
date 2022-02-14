
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {struct TYPE_9__* Flink; } ;
struct TYPE_8__ {int Sid; } ;
typedef TYPE_1__* PWELL_KNOWN_SID ;
typedef int PSID ;
typedef TYPE_2__* PLIST_ENTRY ;


 TYPE_1__* FUNC_0 (TYPE_2__*,int ,TYPE_2__*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_0 ;
 TYPE_2__ VAR_1 ;

PWELL_KNOWN_SID
FUNC_2(PSID VAR_2)
{
    PLIST_ENTRY VAR_3;
    PWELL_KNOWN_SID VAR_4;

    VAR_3 = VAR_1.Flink;
    while (VAR_3 != &VAR_1)
    {
        VAR_4 = FUNC_0(VAR_3,
                                VAR_0,
                                VAR_3);
        if (FUNC_1(VAR_2, VAR_4->Sid))
        {
            return VAR_4;
        }

        VAR_3 = VAR_3->Flink;
    }

    return ((void*)0);
}
