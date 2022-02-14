
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_9__ ;
typedef struct TYPE_31__ TYPE_8__ ;
typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;
typedef struct TYPE_23__ TYPE_12__ ;
typedef struct TYPE_22__ TYPE_11__ ;
typedef struct TYPE_21__ TYPE_10__ ;


struct TYPE_24__ {int Flags2; } ;
struct TYPE_31__ {int lock; TYPE_1__ Header; } ;
typedef TYPE_8__ fcb ;
typedef int device_extension ;
struct TYPE_27__ {int * Thread; } ;
struct TYPE_28__ {TYPE_4__ Overlay; } ;
struct TYPE_26__ {void* Information; } ;
struct TYPE_25__ {void* SystemBuffer; } ;
struct TYPE_32__ {int Flags; TYPE_5__ Tail; TYPE_3__ IoStatus; TYPE_2__ AssociatedIrp; scalar_t__ MdlAddress; } ;
struct TYPE_23__ {void* QuadPart; } ;
struct TYPE_29__ {void* Length; TYPE_12__ ByteOffset; } ;
struct TYPE_30__ {TYPE_6__ Write; } ;
struct TYPE_22__ {TYPE_8__* FsContext; } ;
struct TYPE_21__ {TYPE_7__ Parameters; TYPE_11__* FileObject; } ;
typedef TYPE_9__* PIRP ;
typedef TYPE_10__* PIO_STACK_LOCATION ;
typedef TYPE_11__* PFILE_OBJECT ;
typedef int * PETHREAD ;
typedef scalar_t__ NTSTATUS ;
typedef int LIST_ENTRY ;
typedef TYPE_12__ LARGE_INTEGER ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int FUNC_1 (int *,TYPE_9__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 TYPE_10__* FUNC_3 (TYPE_9__*) ;
 TYPE_9__* FUNC_4 () ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int VAR_4 ;
 int * FUNC_7 () ;
 int FUNC_8 (int *) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int *) ;
 scalar_t__ VAR_8 ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int ,int ,void*,int ,int,int ) ;
 void* FUNC_14 (TYPE_9__*,int ) ;
 scalar_t__ FUNC_15 (int *,TYPE_9__*,TYPE_12__,void*,void**,int,int,int,int,int,int *) ;

NTSTATUS FUNC_16(device_extension* VAR_9, PIRP VAR_10, bool VAR_11, bool VAR_12) {
    PIO_STACK_LOCATION VAR_13 = FUNC_3(VAR_10);
    void* VAR_14;
    NTSTATUS VAR_15;
    LARGE_INTEGER VAR_16 = VAR_13->Parameters.Write.ByteOffset;
    PFILE_OBJECT VAR_17 = VAR_13->FileObject;
    fcb* VAR_18 = VAR_17 ? VAR_17->FsContext : ((void*)0);
    LIST_ENTRY VAR_19;

    FUNC_2(&VAR_19);

    FUNC_9("write\n");

    VAR_10->IoStatus.Information = 0;

    FUNC_9("offset = %I64x\n", VAR_16.QuadPart);
    FUNC_9("length = %x\n", VAR_13->Parameters.Write.Length);

    if (!VAR_10->AssociatedIrp.SystemBuffer) {
        VAR_14 = FUNC_14(VAR_10, VAR_18 && VAR_18->Header.Flags2 & VAR_0 ? VAR_1 : VAR_4);

        if (VAR_10->MdlAddress && !VAR_14) {
            FUNC_0("MmGetSystemAddressForMdlSafe returned NULL\n");
            VAR_15 = VAR_6;
            goto exit;
        }
    } else
        VAR_14 = VAR_10->AssociatedIrp.SystemBuffer;

    FUNC_9("buf = %p\n", VAR_14);

    if (VAR_18 && !(VAR_10->Flags & VAR_3) && !FUNC_1(&VAR_18->lock, VAR_10)) {
        FUNC_10("tried to write to locked region\n");
        VAR_15 = VAR_5;
        goto exit;
    }

    VAR_15 = FUNC_15(VAR_9, VAR_10, VAR_16, VAR_14, &VAR_13->Parameters.Write.Length, VAR_10->Flags & VAR_3, VAR_10->Flags & VAR_2,
                         VAR_11, VAR_12, 1, &VAR_19);

    if (VAR_15 == VAR_7)
        goto exit;
    else if (!FUNC_6(VAR_15)) {
        FUNC_0("write_file2 returned %08x\n", VAR_15);
        goto exit;
    }

    if (FUNC_6(VAR_15)) {
        VAR_10->IoStatus.Information = VAR_13->Parameters.Write.Length;

        if (VAR_8 && VAR_15 != VAR_7 && VAR_10->Flags & VAR_2) {
            PETHREAD VAR_20 = ((void*)0);

            if (VAR_10->Tail.Overlay.Thread && !FUNC_5(VAR_10->Tail.Overlay.Thread))
                VAR_20 = VAR_10->Tail.Overlay.Thread;
            else if (!FUNC_5(FUNC_7()))
                VAR_20 = FUNC_7();
            else if (FUNC_5(FUNC_7()) && FUNC_4() == VAR_10)
                VAR_20 = FUNC_7();

            if (VAR_20)
                FUNC_13(FUNC_8(VAR_20), 0, VAR_13->Parameters.Write.Length, 0, 1, 0);
        }
    }

exit:
    if (FUNC_6(VAR_15))
        FUNC_11(&VAR_19);
    else
        FUNC_12(VAR_9, &VAR_19);

    return VAR_15;
}
