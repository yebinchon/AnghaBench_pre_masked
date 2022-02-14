
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {struct TYPE_8__* Flink; } ;
struct TYPE_10__ {TYPE_1__ HistoryBuffers; } ;
struct TYPE_9__ {int ExeName; } ;
typedef int PUNICODE_STRING ;
typedef TYPE_1__* PLIST_ENTRY ;
typedef TYPE_2__* PHISTORY_BUFFER ;
typedef TYPE_3__* PCONSOLE ;


 TYPE_2__* FUNC_0 (TYPE_1__*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int *,int ) ;
 int VAR_2 ;

__attribute__((used)) static PHISTORY_BUFFER
FUNC_2(PCONSOLE VAR_3, PUNICODE_STRING VAR_4)
{
    PLIST_ENTRY VAR_5 = VAR_3->HistoryBuffers.Flink;
    while (VAR_5 != &VAR_3->HistoryBuffers)
    {

        PHISTORY_BUFFER VAR_6 = FUNC_0(VAR_5, VAR_0, VAR_1);
        if (FUNC_1(VAR_4, &VAR_6->ExeName, VAR_2))
            return VAR_6;
        VAR_5 = VAR_5->Flink;
    }
    return ((void*)0);
}
