
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {struct TYPE_9__* Flink; } ;
struct TYPE_8__ {scalar_t__ OpenHandleCount; TYPE_2__ ParentListHead; int RefCount; int PathNameU; struct TYPE_8__* parentFcb; } ;
typedef TYPE_1__* PVFATFCB ;
typedef TYPE_2__* PLIST_ENTRY ;
typedef scalar_t__ BOOLEAN ;


 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (TYPE_2__*,int ,int ) ;
 int FUNC_2 (char*,int *,int ,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static
BOOLEAN
FUNC_5(PVFATFCB VAR_4)
{
    PLIST_ENTRY VAR_5;
    PVFATFCB VAR_6;

    for (VAR_5 = VAR_4->ParentListHead.Flink; VAR_5 != &VAR_4->ParentListHead; VAR_5 = VAR_5->Flink)
    {
        VAR_6 = FUNC_1(VAR_5, VAR_3, VAR_1);
        if (VAR_6->OpenHandleCount != 0)
        {
            FUNC_0(VAR_6->parentFcb == VAR_4);
            FUNC_2("At least one children file opened! %wZ (%u, %u)\n", &VAR_6->PathNameU, VAR_6->RefCount, VAR_6->OpenHandleCount);
            return VAR_2;
        }

        if (FUNC_4(VAR_6) && !FUNC_3(&VAR_6->ParentListHead))
        {
            if (FUNC_5(VAR_6))
            {
                return VAR_2;
            }
        }
    }

    return VAR_0;
}
