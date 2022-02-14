
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_9__ ;
typedef struct TYPE_30__ TYPE_8__ ;
typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_17__ ;
typedef struct TYPE_21__ TYPE_10__ ;


struct TYPE_27__ {TYPE_6__* fcb; struct TYPE_27__* parent; } ;
typedef TYPE_5__ file_ref ;
struct TYPE_26__ {int * Resource; } ;
struct TYPE_28__ {TYPE_17__* Vcb; TYPE_4__ Header; scalar_t__ ads; } ;
typedef TYPE_6__ fcb ;
struct TYPE_29__ {int access; TYPE_5__* fileref; } ;
typedef TYPE_7__ ccb ;
struct TYPE_24__ {int InputBufferLength; } ;
struct TYPE_25__ {TYPE_2__ DeviceIoControl; } ;
struct TYPE_31__ {TYPE_3__ Parameters; TYPE_10__* FileObject; } ;
struct TYPE_23__ {void* SystemBuffer; } ;
struct TYPE_30__ {scalar_t__ RequestorMode; scalar_t__ UserBuffer; TYPE_1__ AssociatedIrp; } ;
struct TYPE_22__ {int tree_lock; } ;
struct TYPE_21__ {TYPE_7__* FsContext2; TYPE_6__* FsContext; } ;
typedef int REPARSE_DATA_BUFFER ;
typedef TYPE_8__* PIRP ;
typedef TYPE_9__* PIO_STACK_LOCATION ;
typedef TYPE_10__* PFILE_OBJECT ;
typedef int PDEVICE_OBJECT ;
typedef int NTSTATUS ;
typedef int LIST_ENTRY ;
typedef int DWORD ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int *) ;
 TYPE_9__* FUNC_5 (TYPE_8__*) ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (char*,int ,TYPE_8__*) ;
 scalar_t__ VAR_8 ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_17__*,int *) ;
 int FUNC_11 (TYPE_5__*,int,int ,int *) ;
 int FUNC_12 (TYPE_6__*,int *,int ,TYPE_7__*,TYPE_5__*,TYPE_8__*,int *) ;

NTSTATUS FUNC_13(PDEVICE_OBJECT VAR_9, PIRP VAR_10) {
    PIO_STACK_LOCATION VAR_11 = FUNC_5(VAR_10);
    PFILE_OBJECT VAR_12 = VAR_11->FileObject;
    void* VAR_13 = VAR_10->AssociatedIrp.SystemBuffer;
    REPARSE_DATA_BUFFER* VAR_14 = VAR_13;
    DWORD VAR_15 = VAR_11->Parameters.DeviceIoControl.InputBufferLength;
    NTSTATUS VAR_16 = VAR_7;
    fcb* VAR_17;
    ccb* VAR_18;
    file_ref* VAR_19;
    LIST_ENTRY VAR_20;

    FUNC_7("(%p, %p)\n", VAR_9, VAR_10);

    FUNC_4(&VAR_20);

    if (!VAR_12) {
        FUNC_0("FileObject was NULL\n");
        return VAR_6;
    }


    if (VAR_10->UserBuffer)
        return VAR_6;

    VAR_17 = VAR_12->FsContext;
    VAR_18 = VAR_12->FsContext2;

    if (!VAR_18) {
        FUNC_0("ccb was NULL\n");
        return VAR_6;
    }

    if (VAR_10->RequestorMode == VAR_8 && !(VAR_18->access & (VAR_3 | VAR_4))) {
        FUNC_8("insufficient privileges\n");
        return VAR_5;
    }

    VAR_19 = VAR_18->fileref;

    if (!VAR_19) {
        FUNC_0("fileref was NULL\n");
        return VAR_6;
    }

    if (VAR_17->ads) {
        VAR_19 = VAR_19->parent;
        VAR_17 = VAR_19->fcb;
    }

    FUNC_2(&VAR_17->Vcb->tree_lock, 1);
    FUNC_1(VAR_17->Header.Resource, 1);

    VAR_16 = FUNC_12(VAR_17, VAR_14, VAR_15, VAR_18, VAR_19, VAR_10, &VAR_20);
    if (!FUNC_6(VAR_16)) {
        FUNC_0("set_reparse_point2 returned %08x\n", VAR_16);
        goto end;
    }

    FUNC_11(VAR_19, VAR_2 | VAR_1, VAR_0, ((void*)0));

end:
    if (FUNC_6(VAR_16))
        FUNC_9(&VAR_20);
    else
        FUNC_10(VAR_17->Vcb, &VAR_20);

    FUNC_3(VAR_17->Header.Resource);
    FUNC_3(&VAR_17->Vcb->tree_lock);

    return VAR_16;
}
