
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_22__ {scalar_t__ Buffer; } ;
struct TYPE_21__ {scalar_t__ Buffer; } ;
struct TYPE_20__ {int ParentListEntry; int ParentListHead; struct TYPE_20__* parentFcb; int SectionObjectPointers; int LongNameU; TYPE_7__ DirNameU; TYPE_6__ PathNameU; scalar_t__ PathNameBuffer; } ;
struct TYPE_19__ {int ShortNameU; int LongNameU; } ;
typedef TYPE_1__* PVFAT_DIRENTRY_CONTEXT ;
typedef TYPE_2__* PVFATFCB ;
typedef int PDEVICE_EXTENSION ;
typedef int NTSTATUS ;


 int FUNC_0 (int *,int *,int ,int *) ;
 int FUNC_1 (char*,int ,TYPE_2__*,TYPE_1__*,TYPE_2__*) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_6 (int ,TYPE_2__*) ;
 int FUNC_7 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (int ,TYPE_2__*,TYPE_1__*) ;
 int FUNC_10 (TYPE_2__*,int *,int *,TYPE_6__*) ;
 int FUNC_11 (int ,TYPE_2__*) ;
 int FUNC_12 (TYPE_6__*,TYPE_7__*,int *) ;

NTSTATUS
FUNC_13(
    PDEVICE_EXTENSION VAR_2,
    PVFATFCB VAR_3,
    PVFAT_DIRENTRY_CONTEXT VAR_4,
    PVFATFCB VAR_5)
{
    NTSTATUS VAR_6;
    PVFATFCB VAR_7;

    FUNC_1("vfatUpdateFCB(%p, %p, %p, %p)\n", VAR_2, VAR_3, VAR_4, VAR_5);


    VAR_6 = FUNC_10(VAR_5, &VAR_4->LongNameU, &VAR_4->ShortNameU, &VAR_3->PathNameU);
    if (!FUNC_4(VAR_6))
    {
        return VAR_6;
    }


    if (VAR_3->PathNameBuffer)
    {
        FUNC_2(VAR_3->PathNameBuffer, VAR_1);
    }


    FUNC_7(VAR_2, VAR_3);


    VAR_3->PathNameBuffer = VAR_3->PathNameU.Buffer;
    VAR_3->DirNameU.Buffer = VAR_3->PathNameU.Buffer;
    FUNC_12(&VAR_3->PathNameU, &VAR_3->DirNameU, &VAR_3->LongNameU);


    VAR_7 = VAR_3->parentFcb;
    FUNC_5(&VAR_3->ParentListEntry);


    FUNC_9(VAR_2, VAR_3, VAR_4);

    if (FUNC_8(VAR_3))
    {
        FUNC_0(&VAR_3->SectionObjectPointers, ((void*)0), 0, ((void*)0));
    }
    VAR_3->parentFcb = VAR_5;
    FUNC_3(&VAR_5->ParentListHead, &VAR_3->ParentListEntry);
    FUNC_6(VAR_2, VAR_3);




    FUNC_11(VAR_2, VAR_7);

    return VAR_0;
}
