
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
typedef struct TYPE_19__ TYPE_15__ ;
typedef struct TYPE_18__ TYPE_10__ ;


struct TYPE_25__ {TYPE_1__* parent; } ;
typedef TYPE_6__ file_ref ;
struct TYPE_24__ {int Resource; } ;
struct TYPE_21__ {int sequence; void* st_ctime; int transid; } ;
struct TYPE_26__ {int sd_dirty; int sd_deleted; int inode_item_changed; TYPE_5__ Header; TYPE_15__* subvol; TYPE_2__ inode_item; int * sd; scalar_t__ ads; } ;
typedef TYPE_7__ fcb ;
struct TYPE_22__ {int generation; } ;
struct TYPE_27__ {TYPE_3__ superblock; scalar_t__ readonly; } ;
typedef TYPE_8__ device_extension ;
struct TYPE_28__ {int user_set_change_time; TYPE_6__* fileref; } ;
typedef TYPE_9__ ccb ;
struct TYPE_23__ {void* ctime; int ctransid; } ;
struct TYPE_20__ {TYPE_7__* fcb; } ;
struct TYPE_19__ {TYPE_4__ root_item; } ;
struct TYPE_18__ {TYPE_9__* FsContext2; TYPE_7__* FsContext; } ;
typedef int SECURITY_DESCRIPTOR ;
typedef int * PSECURITY_INFORMATION ;
typedef int PIRP ;
typedef TYPE_10__* PFILE_OBJECT ;
typedef int NTSTATUS ;
typedef int LARGE_INTEGER ;
typedef void* BTRFS_TIME ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (int *,int *,int *,void**,int ,int ) ;
 int FUNC_8 (char*,TYPE_8__*,TYPE_10__*,int *,int ) ;
 scalar_t__ FUNC_9 (TYPE_15__*,int ) ;
 int FUNC_10 (TYPE_7__*) ;
 int FUNC_11 (TYPE_6__*,int ,int ,int *) ;
 int FUNC_12 (int ,void**) ;

__attribute__((used)) static NTSTATUS FUNC_13(device_extension* VAR_7, PFILE_OBJECT VAR_8, SECURITY_DESCRIPTOR* VAR_9, PSECURITY_INFORMATION VAR_10, PIRP VAR_11) {
    NTSTATUS VAR_12;
    fcb* VAR_13 = VAR_8->FsContext;
    ccb* VAR_14 = VAR_8->FsContext2;
    file_ref* VAR_15 = VAR_14 ? VAR_14->fileref : ((void*)0);
    SECURITY_DESCRIPTOR* VAR_16;
    LARGE_INTEGER VAR_17;
    BTRFS_TIME VAR_18;

    FUNC_8("(%p, %p, %p, %x)\n", VAR_7, VAR_8, VAR_9, *VAR_10);

    if (VAR_7->readonly)
        return VAR_6;

    if (VAR_13->ads) {
        if (VAR_15 && VAR_15->parent)
            VAR_13 = VAR_15->parent->fcb;
        else {
            FUNC_0("could not find parent fcb for stream\n");
            return VAR_4;
        }
    }

    if (!VAR_13 || !VAR_14)
        return VAR_5;

    FUNC_1(VAR_13->Header.Resource, 1);

    if (FUNC_9(VAR_13->subvol, VAR_11)) {
        VAR_12 = VAR_3;
        goto end;
    }

    VAR_16 = VAR_13->sd;

    VAR_12 = FUNC_7(((void*)0), VAR_10, VAR_9, (void**)&VAR_13->sd, VAR_2, FUNC_4());

    if (!FUNC_6(VAR_12)) {
        FUNC_0("SeSetSecurityDescriptorInfo returned %08x\n", VAR_12);
        goto end;
    }

    FUNC_2(VAR_16);

    FUNC_5(&VAR_17);
    FUNC_12(VAR_17, &VAR_18);

    VAR_13->inode_item.transid = VAR_7->superblock.generation;

    if (!VAR_14->user_set_change_time)
        VAR_13->inode_item.st_ctime = VAR_18;

    VAR_13->inode_item.sequence++;

    VAR_13->sd_dirty = 1;
    VAR_13->sd_deleted = 0;
    VAR_13->inode_item_changed = 1;

    VAR_13->subvol->root_item.ctransid = VAR_7->superblock.generation;
    VAR_13->subvol->root_item.ctime = VAR_18;

    FUNC_10(VAR_13);

    FUNC_11(VAR_15, VAR_1, VAR_0, ((void*)0));

end:
    FUNC_3(VAR_13->Header.Resource);

    return VAR_12;
}
