
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {int Buffer; } ;
typedef TYPE_1__ UNICODE_STRING ;
struct TYPE_16__ {int RefCount; int ParentListEntry; int ParentListHead; struct TYPE_16__* parentFcb; } ;
struct TYPE_15__ {int ShortNameU; int LongNameU; } ;
typedef TYPE_2__* PVFAT_DIRENTRY_CONTEXT ;
typedef TYPE_3__* PVFATFCB ;
typedef int PVCB ;
typedef int NTSTATUS ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ,TYPE_3__*) ;
 int FUNC_4 (int ,TYPE_3__*,TYPE_2__*) ;
 int FUNC_5 (TYPE_3__*,int *,int *,TYPE_1__*) ;
 TYPE_3__* FUNC_6 (int ,TYPE_1__*) ;

NTSTATUS
FUNC_7(
    PVCB VAR_2,
    PVFATFCB VAR_3,
    PVFAT_DIRENTRY_CONTEXT VAR_4,
    PVFATFCB *VAR_5)
{
    PVFATFCB VAR_6;
    UNICODE_STRING VAR_7;
    NTSTATUS VAR_8;

    VAR_8 = FUNC_5(VAR_3, &VAR_4->LongNameU, &VAR_4->ShortNameU, &VAR_7);
    if (!FUNC_2(VAR_8))
    {
        return VAR_8;
    }

    VAR_6 = FUNC_6(VAR_2, &VAR_7);
    FUNC_4(VAR_2, VAR_6, VAR_4);

    VAR_6->RefCount = 1;
    VAR_6->parentFcb = VAR_3;
    FUNC_1(&VAR_3->ParentListHead, &VAR_6->ParentListEntry);
    FUNC_3(VAR_2, VAR_6);
    *VAR_5 = VAR_6;

    FUNC_0(VAR_7.Buffer, VAR_1);
    return VAR_0;
}
