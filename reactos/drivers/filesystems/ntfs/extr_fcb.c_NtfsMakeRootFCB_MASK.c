
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_36__ TYPE_9__ ;
typedef struct TYPE_35__ TYPE_8__ ;
typedef struct TYPE_34__ TYPE_7__ ;
typedef struct TYPE_33__ TYPE_6__ ;
typedef struct TYPE_32__ TYPE_5__ ;
typedef struct TYPE_31__ TYPE_4__ ;
typedef struct TYPE_30__ TYPE_3__ ;
typedef struct TYPE_29__ TYPE_2__ ;
typedef struct TYPE_28__ TYPE_1__ ;


struct TYPE_36__ {int * Name; scalar_t__ NameLength; int NameType; } ;
struct TYPE_35__ {int AllocatedSize; int DataSize; int NameType; } ;
struct TYPE_34__ {int LinkCount; } ;
struct TYPE_30__ {int QuadPart; } ;
struct TYPE_29__ {int QuadPart; } ;
struct TYPE_28__ {int QuadPart; } ;
struct TYPE_31__ {TYPE_3__ AllocationSize; TYPE_2__ ValidDataLength; TYPE_1__ FileSize; } ;
struct TYPE_33__ {int RefCount; int LinkCount; int MFTIndex; TYPE_4__ RFCB; scalar_t__ DirIndex; TYPE_9__ Entry; } ;
struct TYPE_32__ {int FileRecLookasideList; } ;
typedef TYPE_5__* PNTFS_VCB ;
typedef TYPE_6__* PNTFS_FCB ;
typedef TYPE_7__* PFILE_RECORD_HEADER ;
typedef TYPE_8__* PFILENAME_ATTRIBUTE ;


 TYPE_7__* FUNC_0 (int *) ;
 int FUNC_1 (int *,TYPE_7__*) ;
 int FUNC_2 (int ,int ) ;
 int VAR_0 ;
 TYPE_8__* FUNC_3 (TYPE_5__*,TYPE_7__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ) ;
 int VAR_3 ;
 int FUNC_5 (TYPE_5__*,TYPE_6__*) ;
 TYPE_6__* FUNC_6 (char*,int *,TYPE_5__*) ;
 int FUNC_7 (TYPE_5__*,TYPE_6__*) ;
 int FUNC_8 (TYPE_5__*,TYPE_6__*) ;
 int FUNC_9 (TYPE_5__*,int ,TYPE_7__*) ;
 int VAR_4 ;
 int FUNC_10 (TYPE_9__*,TYPE_8__*,int ) ;

PNTFS_FCB
FUNC_11(PNTFS_VCB VAR_5)
{
    PNTFS_FCB VAR_6;
    PFILE_RECORD_HEADER VAR_7;
    PFILENAME_ATTRIBUTE VAR_8;

    VAR_7 = FUNC_0(&VAR_5->FileRecLookasideList);
    if (VAR_7 == ((void*)0))
    {
        return ((void*)0);
    }

    if (!FUNC_4(FUNC_9(VAR_5, VAR_2, VAR_7)))
    {
        FUNC_1(&VAR_5->FileRecLookasideList, VAR_7);
        return ((void*)0);
    }

    VAR_8 = FUNC_3(VAR_5, VAR_7, VAR_1);
    if (!VAR_8)
    {
        FUNC_1(&VAR_5->FileRecLookasideList, VAR_7);
        return ((void*)0);
    }

    VAR_6 = FUNC_6(L"\\", ((void*)0), VAR_5);
    if (!VAR_6)
    {
        FUNC_1(&VAR_5->FileRecLookasideList, VAR_7);
        return ((void*)0);
    }

    FUNC_10(&VAR_6->Entry, VAR_8, FUNC_2(VAR_0, VAR_3));
    VAR_6->Entry.NameType = VAR_8->NameType;
    VAR_6->Entry.NameLength = 0;
    VAR_6->Entry.Name[0] = VAR_4;
    VAR_6->RefCount = 1;
    VAR_6->DirIndex = 0;
    VAR_6->RFCB.FileSize.QuadPart = VAR_8->DataSize;
    VAR_6->RFCB.ValidDataLength.QuadPart = VAR_8->DataSize;
    VAR_6->RFCB.AllocationSize.QuadPart = VAR_8->AllocatedSize;
    VAR_6->MFTIndex = VAR_2;
    VAR_6->LinkCount = VAR_7->LinkCount;

    FUNC_7(VAR_5, VAR_6);
    FUNC_5(VAR_5, VAR_6);
    FUNC_8(VAR_5, VAR_6);

    FUNC_1(&VAR_5->FileRecLookasideList, VAR_7);

    return VAR_6;
}
