
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_11__ {int * Buffer; } ;
struct TYPE_10__ {int FcbLookasideList; } ;
struct TYPE_9__ {int ParentListHead; int MainResource; int PagingIoResource; int PathNameBuffer; int ParentListEntry; int Flags; int FileLock; int RefCount; int PathNameU; int LongNameU; } ;
typedef TYPE_1__* PVFATFCB ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,TYPE_1__*,int *,int ) ;
 TYPE_5__ VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_6 (TYPE_5__*,int *,int ,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 TYPE_4__* VAR_4 ;
 int FUNC_10 (TYPE_1__*) ;

VOID
FUNC_11(
    PVFATFCB VAR_5)
{







    FUNC_7(&VAR_5->FileLock);

    if (!FUNC_10(VAR_5) &&
        !FUNC_1(VAR_5->Flags, VAR_2) && !FUNC_1(VAR_5->Flags, VAR_3))
    {
        FUNC_9(&VAR_5->ParentListEntry);
    }
    FUNC_4(VAR_5->PathNameBuffer);
    FUNC_3(&VAR_5->PagingIoResource);
    FUNC_3(&VAR_5->MainResource);
    FUNC_0(FUNC_8(&VAR_5->ParentListHead));
    FUNC_5(&VAR_4->FcbLookasideList, VAR_5);
}
