
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int VFATCCB ;
struct TYPE_17__ {int * Buffer; } ;
struct TYPE_16__ {int CcbLookasideList; } ;
struct TYPE_15__ {int IoVPB; } ;
struct TYPE_14__ {int Vpb; int * FsContext2; TYPE_1__* FsContext; int * SectionObjectPointer; } ;
struct TYPE_13__ {int Flags; int PathNameU; int SectionObjectPointers; int RefCount; int LongNameU; } ;
typedef TYPE_1__* PVFATFCB ;
typedef int * PVFATCCB ;
typedef TYPE_2__* PFILE_OBJECT ;
typedef TYPE_3__* PDEVICE_EXTENSION ;
typedef int NTSTATUS ;


 int FUNC_0 (char*,TYPE_1__*,int *) ;
 int FUNC_1 (char*,TYPE_1__*,TYPE_2__*,int ) ;
 TYPE_8__ VAR_0 ;
 int * FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (TYPE_8__*,int *,int ,int *) ;
 int FUNC_4 (int *,int) ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_7__* VAR_6 ;

NTSTATUS
FUNC_5(
    PDEVICE_EXTENSION VAR_7,
    PVFATFCB VAR_8,
    PFILE_OBJECT VAR_9)
{
    PVFATCCB VAR_10;
    VAR_10 = FUNC_2(&VAR_6->CcbLookasideList);
    if (VAR_10 == ((void*)0))
    {
        return VAR_4;
    }
    FUNC_4(VAR_10, sizeof (VFATCCB));

    VAR_9->SectionObjectPointer = &VAR_8->SectionObjectPointers;
    VAR_9->FsContext = VAR_8;
    VAR_9->FsContext2 = VAR_10;
    VAR_9->Vpb = VAR_7->IoVPB;
    FUNC_0("file open: fcb:%p PathName:%wZ\n", VAR_8, &VAR_8->PathNameU);






    return VAR_5;
}
