
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_9__ ;
typedef struct TYPE_32__ TYPE_8__ ;
typedef struct TYPE_31__ TYPE_7__ ;
typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;
typedef struct TYPE_24__ TYPE_14__ ;
typedef struct TYPE_23__ TYPE_13__ ;
typedef struct TYPE_22__ TYPE_12__ ;
typedef struct TYPE_21__ TYPE_11__ ;
typedef struct TYPE_20__ TYPE_10__ ;


struct TYPE_32__ {scalar_t__ fcb; int delete_on_close; int posix_delete; TYPE_3__* parent; } ;
typedef TYPE_8__ file_ref ;
struct TYPE_31__ {int Resource; } ;
struct TYPE_29__ {scalar_t__ st_size; } ;
struct TYPE_33__ {int atts; scalar_t__ inode; scalar_t__ type; TYPE_7__ Header; TYPE_6__* nonpaged; TYPE_5__ inode_item; TYPE_4__* subvol; scalar_t__ ads; } ;
typedef TYPE_9__ fcb ;
struct TYPE_20__ {scalar_t__ dummy_fcb; int DirNotifyList; int NotifySync; } ;
typedef TYPE_10__ device_extension ;
struct TYPE_21__ {TYPE_8__* fileref; } ;
typedef TYPE_11__ ccb ;
typedef int ULONG ;
struct TYPE_30__ {int segment_object; } ;
struct TYPE_28__ {scalar_t__ id; } ;
struct TYPE_27__ {TYPE_2__* fcb; } ;
struct TYPE_26__ {int atts; } ;
struct TYPE_25__ {TYPE_14__* SystemBuffer; } ;
struct TYPE_24__ {int Flags; scalar_t__ DeleteFile; } ;
struct TYPE_23__ {int DeletePending; TYPE_9__* FsContext; TYPE_11__* FsContext2; } ;
struct TYPE_22__ {TYPE_1__ AssociatedIrp; } ;
typedef TYPE_12__* PIRP ;
typedef TYPE_13__* PFILE_OBJECT ;
typedef int NTSTATUS ;
typedef TYPE_14__ FILE_DISPOSITION_INFORMATION_EX ;
typedef TYPE_14__ FILE_DISPOSITION_INFORMATION ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,int *,TYPE_9__*,int *,int,int,int ,int *,int *,int *) ;
 int VAR_6 ;
 int FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static NTSTATUS FUNC_8(device_extension* VAR_14, PIRP VAR_15, PFILE_OBJECT VAR_16, bool VAR_17) {
    fcb* VAR_18 = VAR_16->FsContext;
    ccb* VAR_19 = VAR_16->FsContext2;
    file_ref* VAR_20 = VAR_19 ? VAR_19->fileref : ((void*)0);
    ULONG VAR_21, VAR_22;
    NTSTATUS VAR_23;

    if (!VAR_20)
        return VAR_11;

    if (VAR_17) {
        FILE_DISPOSITION_INFORMATION_EX* VAR_24 = VAR_15->AssociatedIrp.SystemBuffer;

        VAR_22 = VAR_24->Flags;
    } else {
        FILE_DISPOSITION_INFORMATION* VAR_25 = VAR_15->AssociatedIrp.SystemBuffer;

        VAR_22 = VAR_25->DeleteFile ? VAR_3 : 0;
    }

    FUNC_1(VAR_18->Header.Resource, 1);

    FUNC_6("changing delete_on_close to %s for fcb %p\n", VAR_22 & VAR_3 ? "true" : "false", VAR_18);

    if (VAR_18->ads) {
        if (VAR_20->parent)
            VAR_21 = VAR_20->parent->fcb->atts;
        else {
            FUNC_0("no fileref for stream\n");
            VAR_23 = VAR_10;
            goto end;
        }
    } else
        VAR_21 = VAR_18->atts;

    FUNC_6("atts = %x\n", VAR_21);

    if (VAR_21 & VAR_2) {
        FUNC_6("not allowing readonly file to be deleted\n");
        VAR_23 = VAR_8;
        goto end;
    }

    if (VAR_18->inode == VAR_13 && VAR_18->subvol->id == VAR_0) {
        FUNC_7("not allowing \\$Root to be deleted\n");
        VAR_23 = VAR_7;
        goto end;
    }


    if (VAR_18->type == VAR_1 && VAR_18->inode_item.st_size > 0 && (!VAR_20 || VAR_20->fcb != VAR_14->dummy_fcb)) {
        FUNC_6("directory not empty\n");
        VAR_23 = VAR_9;
        goto end;
    }

    if (!FUNC_4(&VAR_18->nonpaged->segment_object, VAR_6)) {
        if (!VAR_17 || VAR_22 & VAR_4) {
            FUNC_6("trying to delete file which is being mapped as an image\n");
            VAR_23 = VAR_8;
            goto end;
        }
    }

    VAR_19->fileref->delete_on_close = VAR_22 & VAR_3;

    VAR_16->DeletePending = VAR_22 & VAR_3;

    if (VAR_22 & VAR_3 && VAR_22 & VAR_5)
        VAR_19->fileref->posix_delete = 1;

    VAR_23 = VAR_12;

end:
    FUNC_2(VAR_18->Header.Resource);


    if (FUNC_5(VAR_23) && VAR_22 & VAR_3 && VAR_18->type == VAR_1) {
        FUNC_3(VAR_14->NotifySync, &VAR_14->DirNotifyList, VAR_16->FsContext,
                                       ((void*)0), 0, 0, 0, ((void*)0), ((void*)0), ((void*)0));
    }

    return VAR_23;
}
