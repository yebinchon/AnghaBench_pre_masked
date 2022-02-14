
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_10__ ;


typedef int VFATFCB ;
struct TYPE_19__ {int IsFastIoPossible; int * Resource; int * PagingIoResource; } ;
struct TYPE_18__ {TYPE_7__* self; } ;
struct TYPE_17__ {TYPE_7__* self; int Hash; } ;
struct TYPE_15__ {int Attrib; } ;
struct TYPE_14__ {int Attrib; } ;
struct TYPE_16__ {TYPE_2__ Fat; TYPE_1__ FatX; } ;
struct TYPE_20__ {int ParentListHead; TYPE_6__ RFCB; int MainResource; int PagingIoResource; int LastMutex; int FileLock; TYPE_5__ ShortHash; TYPE_4__ Hash; int PathNameU; TYPE_3__ entry; int * Attributes; } ;
struct TYPE_13__ {int FcbLookasideList; } ;
typedef TYPE_7__* PVFATFCB ;
typedef int PUNICODE_STRING ;
typedef int PDEVICE_EXTENSION ;


 int FUNC_0 (char*,int ) ;
 TYPE_7__* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int FUNC_4 (int *,int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_7__*,int) ;
 TYPE_10__* VAR_1 ;
 int FUNC_7 (TYPE_7__*,int ) ;
 int FUNC_8 (int ,int *) ;
 scalar_t__ FUNC_9 (int ) ;

PVFATFCB
FUNC_10(
    PDEVICE_EXTENSION VAR_2,
    PUNICODE_STRING VAR_3)
{
    PVFATFCB VAR_4;

    FUNC_0("'%wZ'\n", VAR_3);

    VAR_4 = FUNC_1(&VAR_1->FcbLookasideList);
    if (VAR_4 == ((void*)0))
    {
        return ((void*)0);
    }
    FUNC_6(VAR_4, sizeof(VFATFCB));
    FUNC_7(VAR_4, VAR_3);
    if (FUNC_9(VAR_2))
        VAR_4->Attributes = &VAR_4->entry.FatX.Attrib;
    else
        VAR_4->Attributes = &VAR_4->entry.Fat.Attrib;
    VAR_4->Hash.Hash = FUNC_8(0, &VAR_4->PathNameU);
    VAR_4->Hash.self = VAR_4;
    VAR_4->ShortHash.self = VAR_4;
    FUNC_3(&VAR_4->PagingIoResource);
    FUNC_3(&VAR_4->MainResource);
    FUNC_4(&VAR_4->FileLock, ((void*)0), ((void*)0));
    FUNC_2(&VAR_4->LastMutex);
    VAR_4->RFCB.PagingIoResource = &VAR_4->PagingIoResource;
    VAR_4->RFCB.Resource = &VAR_4->MainResource;
    VAR_4->RFCB.IsFastIoPossible = VAR_0;
    FUNC_5(&VAR_4->ParentListHead);

    return VAR_4;
}
