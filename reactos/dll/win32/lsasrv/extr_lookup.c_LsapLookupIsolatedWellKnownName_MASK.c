
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {struct TYPE_9__* Flink; } ;
struct TYPE_8__ {int AccountName; } ;
typedef TYPE_1__* PWELL_KNOWN_SID ;
typedef int PUNICODE_STRING ;
typedef TYPE_2__* PLIST_ENTRY ;


 TYPE_1__* FUNC_0 (TYPE_2__*,int ,TYPE_2__*) ;
 scalar_t__ FUNC_1 (int ,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;

PWELL_KNOWN_SID
FUNC_2(PUNICODE_STRING VAR_3)
{
    PLIST_ENTRY VAR_4;
    PWELL_KNOWN_SID VAR_5;

    VAR_4 = VAR_2.Flink;
    while (VAR_4 != &VAR_2)
    {
        VAR_5 = FUNC_0(VAR_4,
                                VAR_1,
                                VAR_4);
        if (FUNC_1(VAR_3, &VAR_5->AccountName, VAR_0))
        {
            return VAR_5;
        }

        VAR_4 = VAR_4->Flink;
    }

    return ((void*)0);
}
