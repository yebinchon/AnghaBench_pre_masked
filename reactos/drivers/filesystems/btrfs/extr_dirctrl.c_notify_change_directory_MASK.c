
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_13__ ;
typedef struct TYPE_18__ TYPE_10__ ;


typedef scalar_t__ uint16_t ;
typedef int file_ref ;
struct TYPE_22__ {int * Resource; } ;
struct TYPE_24__ {scalar_t__ type; TYPE_4__* Vcb; TYPE_3__ Header; } ;
typedef TYPE_5__ fcb ;
struct TYPE_25__ {int DirNotifyList; int NotifySync; } ;
typedef TYPE_6__ device_extension ;
struct TYPE_19__ {scalar_t__ Length; scalar_t__ MaximumLength; int Buffer; } ;
struct TYPE_26__ {int access; TYPE_13__ filename; int * fileref; } ;
typedef TYPE_7__ ccb ;
typedef scalar_t__ ULONG ;
struct TYPE_20__ {int CompletionFilter; } ;
struct TYPE_21__ {TYPE_1__ NotifyDirectory; } ;
struct TYPE_28__ {int Flags; TYPE_2__ Parameters; TYPE_10__* FileObject; } ;
struct TYPE_27__ {scalar_t__ RequestorMode; } ;
struct TYPE_23__ {int tree_lock; } ;
struct TYPE_18__ {TYPE_7__* FsContext2; TYPE_5__* FsContext; } ;
typedef int PSTRING ;
typedef TYPE_8__* PIRP ;
typedef TYPE_9__* PIO_STACK_LOCATION ;
typedef TYPE_10__* PFILE_OBJECT ;
typedef scalar_t__ NTSTATUS ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int ,scalar_t__,int ) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;
 int FUNC_5 (int ,int *,TYPE_7__*,int ,int,int,int ,TYPE_8__*,int *,int *,int *) ;
 TYPE_9__* FUNC_6 (TYPE_8__*) ;
 int FUNC_7 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_8 (char*,...) ;
 scalar_t__ VAR_10 ;
 int FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (int *,TYPE_13__*,int *,scalar_t__*) ;

__attribute__((used)) static NTSTATUS FUNC_11(device_extension* VAR_11, PIRP VAR_12) {
    PIO_STACK_LOCATION VAR_13 = FUNC_6(VAR_12);
    PFILE_OBJECT VAR_14 = VAR_13->FileObject;
    fcb* VAR_15 = VAR_14->FsContext;
    ccb* VAR_16 = VAR_14->FsContext2;
    file_ref* VAR_17 = VAR_16 ? VAR_16->fileref : ((void*)0);
    NTSTATUS VAR_18;

    FUNC_8("IRP_MN_NOTIFY_CHANGE_DIRECTORY\n");

    if (!VAR_16) {
        FUNC_0("ccb was NULL\n");
        return VAR_8;
    }

    if (!VAR_17) {
        FUNC_0("no fileref\n");
        return VAR_8;
    }

    if (VAR_12->RequestorMode == VAR_10 && !(VAR_16->access & VAR_2)) {
        FUNC_9("insufficient privileges\n");
        return VAR_5;
    }

    FUNC_2(&VAR_15->Vcb->tree_lock, 1);
    FUNC_1(VAR_15->Header.Resource, 1);

    if (VAR_15->type != VAR_1) {
        VAR_18 = VAR_8;
        goto end;
    }



    FUNC_8("FileObject %p\n", VAR_14);

    if (VAR_16->filename.Length == 0) {
        ULONG VAR_19;

        VAR_16->filename.MaximumLength = VAR_16->filename.Length = 0;

        VAR_18 = FUNC_10(VAR_17, &VAR_16->filename, ((void*)0), &VAR_19);
        if (VAR_18 == VAR_6) {
            VAR_16->filename.Buffer = FUNC_3(VAR_3, VAR_19, VAR_0);
            if (!VAR_16->filename.Buffer) {
                FUNC_0("out of memory\n");
                VAR_18 = VAR_7;
                goto end;
            }

            VAR_16->filename.MaximumLength = (uint16_t)VAR_19;

            VAR_18 = FUNC_10(VAR_17, &VAR_16->filename, ((void*)0), &VAR_19);
            if (!FUNC_7(VAR_18)) {
                FUNC_0("fileref_get_filename returned %08x\n", VAR_18);
                goto end;
            }
        } else {
            FUNC_0("fileref_get_filename returned %08x\n", VAR_18);
            goto end;
        }
    }

    FUNC_5(VAR_11->NotifySync, &VAR_11->DirNotifyList, VAR_14->FsContext2, (PSTRING)&VAR_16->filename,
                                     VAR_13->Flags & VAR_4, 0, VAR_13->Parameters.NotifyDirectory.CompletionFilter, VAR_12,
                                     ((void*)0), ((void*)0), ((void*)0));

    VAR_18 = VAR_9;

end:
    FUNC_4(VAR_15->Header.Resource);
    FUNC_4(&VAR_15->Vcb->tree_lock);

    return VAR_18;
}
