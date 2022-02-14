
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
typedef struct TYPE_27__ TYPE_11__ ;
typedef struct TYPE_26__ TYPE_10__ ;


typedef scalar_t__ uint16_t ;
typedef int file_ref ;
struct TYPE_29__ {void* st_mtime; void* st_ctime; int sequence; int transid; } ;
struct TYPE_26__ {int* Buffer; scalar_t__ MaximumLength; scalar_t__ Length; } ;
struct TYPE_33__ {scalar_t__ type; int reparse_xattr_changed; int atts_changed; int inode_item_changed; TYPE_5__* subvol; TYPE_11__* Vcb; int atts; TYPE_2__ inode_item; TYPE_10__ reparse_xattr; } ;
typedef TYPE_6__ fcb ;
struct TYPE_34__ {int user_set_write_time; int user_set_change_time; } ;
typedef TYPE_7__ ccb ;
typedef int ULONG ;
struct TYPE_36__ {scalar_t__ QuadPart; } ;
struct TYPE_28__ {int Flags; } ;
struct TYPE_35__ {TYPE_1__ SymbolicLinkReparseBuffer; } ;
struct TYPE_31__ {void* ctime; int ctransid; } ;
struct TYPE_32__ {TYPE_4__ root_item; } ;
struct TYPE_30__ {int generation; } ;
struct TYPE_27__ {TYPE_3__ superblock; } ;
typedef TYPE_8__ REPARSE_DATA_BUFFER ;
typedef int PIRP ;
typedef int NTSTATUS ;
typedef int LIST_ENTRY ;
typedef TYPE_9__ LARGE_INTEGER ;
typedef void* BTRFS_TIME ;
typedef TYPE_10__ ANSI_STRING ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (char*,...) ;
 int* FUNC_1 (int ,int,int ) ;
 int FUNC_2 (int*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (TYPE_9__*) ;
 int FUNC_4 (int ) ;
 int VAR_9 ;
 int FUNC_5 (int*,TYPE_8__*,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int,TYPE_8__*) ;
 int FUNC_8 (TYPE_6__*) ;
 int FUNC_9 (int ,int *,TYPE_6__*,TYPE_7__*,TYPE_8__*,int,int,int *) ;
 int FUNC_10 (TYPE_6__*,int ,int ,int *) ;
 int FUNC_11 (TYPE_9__,void**) ;
 int FUNC_12 (TYPE_11__*,int ,TYPE_9__,TYPE_8__*,int*,int,int,int,int,int,int *) ;

NTSTATUS FUNC_13(fcb* VAR_15, REPARSE_DATA_BUFFER* VAR_16, ULONG VAR_17, ccb* VAR_18, file_ref* VAR_19, PIRP VAR_20, LIST_ENTRY* VAR_21) {
    NTSTATUS VAR_22;
    ULONG VAR_23;

    if (VAR_15->type == VAR_5) {
        FUNC_6("tried to set a reparse point on an existing symlink\n");
        return VAR_12;
    }





    if (VAR_17 < sizeof(ULONG)) {
        FUNC_6("buffer was not long enough to hold tag\n");
        return VAR_11;
    }

    VAR_22 = FUNC_7(VAR_17, VAR_16);
    if (!FUNC_4(VAR_22)) {
        FUNC_0("FsRtlValidateReparsePointBuffer returned %08x\n", VAR_22);
        return VAR_22;
    }

    FUNC_5(&VAR_23, VAR_16, sizeof(ULONG));

    if (VAR_15->type == VAR_4 &&
        ((VAR_23 == VAR_8 && VAR_16->SymbolicLinkReparseBuffer.Flags & VAR_14) || VAR_23 == VAR_7)) {
        VAR_22 = FUNC_9(VAR_20, VAR_19, VAR_15, VAR_18, VAR_16, VAR_17, VAR_23 == VAR_8, VAR_21);
        VAR_15->atts |= VAR_6;
    } else {
        LARGE_INTEGER VAR_24, VAR_25;
        BTRFS_TIME VAR_26;

        if (VAR_15->type == VAR_3 || VAR_15->type == VAR_2 || VAR_15->type == VAR_1) {
            ANSI_STRING VAR_27;

            VAR_27.Buffer = FUNC_1(VAR_9, VAR_17, VAR_0);
            if (!VAR_27.Buffer) {
                FUNC_0("out of memory\n");
                return VAR_10;
            }
            VAR_27.Length = VAR_27.MaximumLength = (uint16_t)VAR_17;

            if (VAR_15->reparse_xattr.Buffer)
                FUNC_2(VAR_15->reparse_xattr.Buffer);

            VAR_15->reparse_xattr = VAR_27;
            FUNC_5(VAR_27.Buffer, VAR_16, VAR_17);

            VAR_15->reparse_xattr_changed = 1;

            VAR_22 = VAR_13;
        } else {
            VAR_22 = FUNC_10(VAR_15, 0, VAR_20, VAR_21);
            if (!FUNC_4(VAR_22)) {
                FUNC_0("truncate_file returned %08x\n", VAR_22);
                return VAR_22;
            }

            VAR_24.QuadPart = 0;

            VAR_22 = FUNC_12(VAR_15->Vcb, VAR_20, VAR_24, VAR_16, &VAR_17, 0, 1, 1, 0, 0, VAR_21);
            if (!FUNC_4(VAR_22)) {
                FUNC_0("write_file2 returned %08x\n", VAR_22);
                return VAR_22;
            }
        }

        FUNC_3(&VAR_25);
        FUNC_11(VAR_25, &VAR_26);

        VAR_15->inode_item.transid = VAR_15->Vcb->superblock.generation;
        VAR_15->inode_item.sequence++;

        if (!VAR_18 || !VAR_18->user_set_change_time)
            VAR_15->inode_item.st_ctime = VAR_26;

        if (!VAR_18 || !VAR_18->user_set_write_time)
            VAR_15->inode_item.st_mtime = VAR_26;

        VAR_15->atts |= VAR_6;
        VAR_15->atts_changed = 1;

        VAR_15->subvol->root_item.ctransid = VAR_15->Vcb->superblock.generation;
        VAR_15->subvol->root_item.ctime = VAR_26;

        VAR_15->inode_item_changed = 1;
        FUNC_8(VAR_15);
    }

    return VAR_13;
}
