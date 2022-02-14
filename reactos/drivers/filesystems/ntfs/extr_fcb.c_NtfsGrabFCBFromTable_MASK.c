
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {struct TYPE_12__* Flink; } ;
struct TYPE_11__ {int RefCount; int PathName; } ;
struct TYPE_10__ {int FcbListLock; TYPE_4__ FcbListHead; TYPE_1__* StreamFileObject; } ;
struct TYPE_9__ {TYPE_3__* FsContext; } ;
typedef TYPE_2__* PNTFS_VCB ;
typedef TYPE_3__* PNTFS_FCB ;
typedef TYPE_4__* PLIST_ENTRY ;
typedef scalar_t__* PCWSTR ;
typedef int KIRQL ;


 TYPE_3__* FUNC_0 (TYPE_4__*,int ,int ) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (scalar_t__*,int ) ;

PNTFS_FCB
FUNC_5(PNTFS_VCB VAR_2,
                     PCWSTR VAR_3)
{
    KIRQL VAR_4;
    PNTFS_FCB VAR_5;
    PLIST_ENTRY VAR_6;

    FUNC_2(&VAR_2->FcbListLock, &VAR_4);

    if (VAR_3 == ((void*)0) || *VAR_3 == 0)
    {
        FUNC_1("Return FCB for stream file object\n");
        VAR_5 = VAR_2->StreamFileObject->FsContext;
        VAR_5->RefCount++;
        FUNC_3(&VAR_2->FcbListLock, VAR_4);
        return VAR_5;
    }

    VAR_6 = VAR_2->FcbListHead.Flink;
    while (VAR_6 != &VAR_2->FcbListHead)
    {
        VAR_5 = FUNC_0(VAR_6, VAR_1, VAR_0);

        FUNC_1("Comparing '%S' and '%S'\n", VAR_3, VAR_5->PathName);
        if (FUNC_4(VAR_3, VAR_5->PathName) == 0)
        {
            VAR_5->RefCount++;
            FUNC_3(&VAR_2->FcbListLock, VAR_4);
            return VAR_5;
        }



        VAR_6 = VAR_6->Flink;
    }

    FUNC_3(&VAR_2->FcbListLock, VAR_4);

    return ((void*)0);
}
