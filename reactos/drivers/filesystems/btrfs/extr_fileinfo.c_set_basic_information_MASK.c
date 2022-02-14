
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_46__ TYPE_9__ ;
typedef struct TYPE_45__ TYPE_8__ ;
typedef struct TYPE_44__ TYPE_7__ ;
typedef struct TYPE_43__ TYPE_6__ ;
typedef struct TYPE_42__ TYPE_5__ ;
typedef struct TYPE_41__ TYPE_4__ ;
typedef struct TYPE_40__ TYPE_3__ ;
typedef struct TYPE_39__ TYPE_2__ ;
typedef struct TYPE_38__ TYPE_23__ ;
typedef struct TYPE_37__ TYPE_1__ ;
typedef struct TYPE_36__ TYPE_16__ ;
typedef struct TYPE_35__ TYPE_15__ ;
typedef struct TYPE_34__ TYPE_14__ ;
typedef struct TYPE_33__ TYPE_13__ ;
typedef struct TYPE_32__ TYPE_12__ ;
typedef struct TYPE_31__ TYPE_11__ ;
typedef struct TYPE_30__ TYPE_10__ ;


struct TYPE_46__ {TYPE_2__* dc; TYPE_5__* parent; } ;
typedef TYPE_9__ file_ref ;
struct TYPE_43__ {int Resource; } ;
struct TYPE_45__ {void* otime; void* st_atime; void* st_mtime; void* st_ctime; int sequence; int transid; } ;
struct TYPE_30__ {scalar_t__ type; scalar_t__ inode; int atts_changed; int atts; int atts_deleted; int inode_item_changed; TYPE_6__ Header; TYPE_8__ inode_item; TYPE_23__* subvol; scalar_t__ ads; } ;
typedef TYPE_10__ fcb ;
struct TYPE_40__ {int generation; } ;
struct TYPE_31__ {TYPE_3__ superblock; } ;
typedef TYPE_11__ device_extension ;
struct TYPE_32__ {int user_set_creation_time; int user_set_access_time; int user_set_write_time; int user_set_change_time; TYPE_9__* fileref; } ;
typedef TYPE_12__ ccb ;
typedef int WCHAR ;
typedef int ULONG ;
struct TYPE_44__ {int flags; void* ctime; int ctransid; } ;
struct TYPE_42__ {TYPE_10__* fcb; } ;
struct TYPE_41__ {TYPE_16__* SystemBuffer; } ;
struct TYPE_37__ {int Length; char* Buffer; } ;
struct TYPE_39__ {TYPE_1__ name; } ;
struct TYPE_38__ {scalar_t__ send_ops; TYPE_7__ root_item; } ;
struct TYPE_35__ {int QuadPart; } ;
struct TYPE_36__ {int FileAttributes; TYPE_15__ ChangeTime; TYPE_15__ LastWriteTime; TYPE_15__ LastAccessTime; TYPE_15__ CreationTime; } ;
struct TYPE_34__ {TYPE_12__* FsContext2; TYPE_10__* FsContext; } ;
struct TYPE_33__ {TYPE_4__ AssociatedIrp; } ;
typedef TYPE_13__* PIRP ;
typedef TYPE_14__* PFILE_OBJECT ;
typedef int NTSTATUS ;
typedef TYPE_15__ LARGE_INTEGER ;
typedef TYPE_16__ FILE_BASIC_INFORMATION ;
typedef void* BTRFS_TIME ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (TYPE_15__*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_4 (char*,TYPE_14__*,int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (TYPE_11__*,TYPE_23__*,scalar_t__,scalar_t__,int,int,TYPE_13__*) ;
 scalar_t__ FUNC_7 (TYPE_23__*,TYPE_13__*) ;
 int FUNC_8 (TYPE_10__*) ;
 int FUNC_9 (TYPE_9__*,int,int ,int *) ;
 int FUNC_10 (TYPE_15__,void**) ;

__attribute__((used)) static NTSTATUS FUNC_11(device_extension* VAR_18, PIRP VAR_19, PFILE_OBJECT VAR_20) {
    FILE_BASIC_INFORMATION* VAR_21 = VAR_19->AssociatedIrp.SystemBuffer;
    fcb* VAR_22 = VAR_20->FsContext;
    ccb* VAR_23 = VAR_20->FsContext2;
    file_ref* VAR_24 = VAR_23 ? VAR_23->fileref : ((void*)0);
    ULONG VAR_25, VAR_26 = 0;
    bool VAR_27 = 0;
    NTSTATUS VAR_28;

    if (VAR_22->ads) {
        if (VAR_24 && VAR_24->parent)
            VAR_22 = VAR_24->parent->fcb;
        else {
            FUNC_0("stream did not have fileref\n");
            return VAR_14;
        }
    }

    if (!VAR_23) {
        FUNC_0("ccb was NULL\n");
        return VAR_15;
    }

    FUNC_4("file = %p, attributes = %x\n", VAR_20, VAR_21->FileAttributes);

    FUNC_1(VAR_22->Header.Resource, 1);

    if (VAR_21->FileAttributes & VAR_4 && VAR_22->type != VAR_1) {
        FUNC_5("attempted to set FILE_ATTRIBUTE_DIRECTORY on non-directory\n");
        VAR_28 = VAR_15;
        goto end;
    }

    if (VAR_22->inode == VAR_17 && FUNC_7(VAR_22->subvol, VAR_19) &&
        (VAR_21->FileAttributes == 0 || VAR_21->FileAttributes & VAR_6)) {
        VAR_28 = VAR_12;
        goto end;
    }


    if (VAR_22->inode == VAR_17 && VAR_22->subvol->root_item.flags & VAR_0 &&
        VAR_22->subvol->send_ops > 0) {
        VAR_28 = VAR_13;
        goto end;
    }



    if (VAR_21->CreationTime.QuadPart == -2)
        VAR_21->CreationTime.QuadPart = 0;

    if (VAR_21->LastAccessTime.QuadPart == -2)
        VAR_21->LastAccessTime.QuadPart = 0;

    if (VAR_21->LastWriteTime.QuadPart == -2)
        VAR_21->LastWriteTime.QuadPart = 0;

    if (VAR_21->ChangeTime.QuadPart == -2)
        VAR_21->ChangeTime.QuadPart = 0;

    if (VAR_21->CreationTime.QuadPart == -1)
        VAR_23->user_set_creation_time = 1;
    else if (VAR_21->CreationTime.QuadPart != 0) {
        FUNC_10(VAR_21->CreationTime, &VAR_22->inode_item.otime);
        VAR_27 = 1;
        VAR_26 |= VAR_9;

        VAR_23->user_set_creation_time = 1;
    }

    if (VAR_21->LastAccessTime.QuadPart == -1)
        VAR_23->user_set_access_time = 1;
    else if (VAR_21->LastAccessTime.QuadPart != 0) {
        FUNC_10(VAR_21->LastAccessTime, &VAR_22->inode_item.st_atime);
        VAR_27 = 1;
        VAR_26 |= VAR_10;

        VAR_23->user_set_access_time = 1;
    }

    if (VAR_21->LastWriteTime.QuadPart == -1)
        VAR_23->user_set_write_time = 1;
    else if (VAR_21->LastWriteTime.QuadPart != 0) {
        FUNC_10(VAR_21->LastWriteTime, &VAR_22->inode_item.st_mtime);
        VAR_27 = 1;
        VAR_26 |= VAR_11;

        VAR_23->user_set_write_time = 1;
    }

    if (VAR_21->ChangeTime.QuadPart == -1)
        VAR_23->user_set_change_time = 1;
    else if (VAR_21->ChangeTime.QuadPart != 0) {
        FUNC_10(VAR_21->ChangeTime, &VAR_22->inode_item.st_ctime);
        VAR_27 = 1;


        VAR_23->user_set_change_time = 1;
    }


    if (VAR_21->FileAttributes != 0) {
        LARGE_INTEGER VAR_29;
        BTRFS_TIME VAR_30;

        VAR_21->FileAttributes &= ~VAR_5;

        VAR_25 = FUNC_6(VAR_18, VAR_22->subvol, VAR_22->inode, VAR_22->type, VAR_24 && VAR_24->dc && VAR_24->dc->name.Length >= sizeof(WCHAR) && VAR_24->dc->name.Buffer[0] == '.',
                                    1, VAR_19);

        if (VAR_22->type == VAR_1)
            VAR_21->FileAttributes |= VAR_4;
        else if (VAR_22->type == VAR_2)
            VAR_21->FileAttributes |= VAR_7;

        VAR_22->atts_changed = 1;

        if (VAR_22->atts & VAR_7)
            VAR_21->FileAttributes |= VAR_7;

        if (VAR_25 == VAR_21->FileAttributes)
            VAR_22->atts_deleted = 1;
        else if (VAR_22->inode == VAR_17 && (VAR_25 | VAR_6) == (VAR_21->FileAttributes | VAR_6))
            VAR_22->atts_deleted = 1;

        VAR_22->atts = VAR_21->FileAttributes;

        FUNC_3(&VAR_29);
        FUNC_10(VAR_29, &VAR_30);

        if (!VAR_23->user_set_change_time)
            VAR_22->inode_item.st_ctime = VAR_30;

        VAR_22->subvol->root_item.ctransid = VAR_18->superblock.generation;
        VAR_22->subvol->root_item.ctime = VAR_30;

        if (VAR_22->inode == VAR_17) {
            if (VAR_21->FileAttributes & VAR_6)
                VAR_22->subvol->root_item.flags |= VAR_0;
            else
                VAR_22->subvol->root_item.flags &= ~VAR_0;
        }

        VAR_27 = 1;

        VAR_26 |= VAR_8;
    }

    if (VAR_27) {
        VAR_22->inode_item.transid = VAR_18->superblock.generation;
        VAR_22->inode_item.sequence++;
        VAR_22->inode_item_changed = 1;

        FUNC_8(VAR_22);
    }

    if (VAR_26 != 0)
        FUNC_9(VAR_24, VAR_26, VAR_3, ((void*)0));

    VAR_28 = VAR_16;

end:
    FUNC_2(VAR_22->Header.Resource);

    return VAR_28;
}
