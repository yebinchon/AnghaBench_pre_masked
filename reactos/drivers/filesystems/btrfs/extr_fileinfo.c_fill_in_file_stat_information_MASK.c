
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_9__ ;
typedef struct TYPE_33__ TYPE_8__ ;
typedef struct TYPE_32__ TYPE_7__ ;
typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;
typedef struct TYPE_25__ TYPE_14__ ;
typedef struct TYPE_24__ TYPE_13__ ;
typedef struct TYPE_23__ TYPE_12__ ;
typedef struct TYPE_22__ TYPE_11__ ;
typedef struct TYPE_21__ TYPE_10__ ;


typedef void* uint32_t ;
struct TYPE_24__ {int st_nlink; int st_size; int st_mode; int st_ctime; int st_mtime; int st_atime; int otime; } ;
struct TYPE_29__ {int Length; } ;
struct TYPE_21__ {scalar_t__ atts; scalar_t__ type; TYPE_13__ inode_item; scalar_t__ ads; TYPE_4__ adsdata; TYPE_3__* Vcb; TYPE_2__* subvol; scalar_t__ inode; } ;
typedef TYPE_10__ fcb ;
struct TYPE_22__ {int access; TYPE_9__* fileref; } ;
typedef TYPE_11__ ccb ;
struct TYPE_34__ {TYPE_8__* parent; } ;
struct TYPE_33__ {TYPE_7__* fcb; } ;
struct TYPE_32__ {scalar_t__ atts; TYPE_13__ inode_item; } ;
struct TYPE_31__ {int QuadPart; } ;
struct TYPE_30__ {int QuadPart; } ;
struct TYPE_28__ {TYPE_10__* dummy_fcb; } ;
struct TYPE_27__ {scalar_t__ id; } ;
struct TYPE_26__ {void* HighPart; void* LowPart; } ;
struct TYPE_23__ {void* QuadPart; } ;
struct TYPE_25__ {int FileAttributes; int EffectiveAccess; int NumberOfLinks; scalar_t__ ReparseTag; TYPE_6__ EndOfFile; TYPE_5__ AllocationSize; TYPE_12__ ChangeTime; TYPE_12__ LastWriteTime; TYPE_12__ LastAccessTime; TYPE_12__ CreationTime; TYPE_1__ FileId; } ;
typedef int NTSTATUS ;
typedef int LONG ;
typedef TYPE_12__ LARGE_INTEGER ;
typedef TYPE_13__ INODE_ITEM ;
typedef TYPE_14__ FILE_STAT_INFORMATION ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (TYPE_12__*) ;
 int VAR_10 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_10__*) ;
 scalar_t__ FUNC_3 (TYPE_10__*) ;
 void* FUNC_4 (int *) ;

__attribute__((used)) static NTSTATUS FUNC_5(FILE_STAT_INFORMATION* VAR_11, fcb* VAR_12, ccb* VAR_13, LONG* VAR_14) {
    INODE_ITEM* VAR_15;

    VAR_11->FileId.LowPart = (uint32_t)VAR_12->inode;
    VAR_11->FileId.HighPart = (uint32_t)VAR_12->subvol->id;

    if (VAR_12->ads)
        VAR_15 = &VAR_13->fileref->parent->fcb->inode_item;
    else
        VAR_15 = &VAR_12->inode_item;

    if (VAR_12 == VAR_12->Vcb->dummy_fcb) {
        LARGE_INTEGER VAR_16;

        FUNC_0(&VAR_16);
        VAR_11->CreationTime = VAR_11->LastAccessTime = VAR_11->LastWriteTime = VAR_11->ChangeTime = VAR_16;
    } else {
        VAR_11->CreationTime.QuadPart = FUNC_4(&VAR_15->otime);
        VAR_11->LastAccessTime.QuadPart = FUNC_4(&VAR_15->st_atime);
        VAR_11->LastWriteTime.QuadPart = FUNC_4(&VAR_15->st_mtime);
        VAR_11->ChangeTime.QuadPart = FUNC_4(&VAR_15->st_ctime);
    }

    if (VAR_12->ads) {
        VAR_11->AllocationSize.QuadPart = VAR_11->EndOfFile.QuadPart = VAR_12->adsdata.Length;
        VAR_11->FileAttributes = VAR_13->fileref->parent->fcb->atts == 0 ? VAR_4 : VAR_13->fileref->parent->fcb->atts;
    } else {
        VAR_11->AllocationSize.QuadPart = FUNC_2(VAR_12);
        VAR_11->EndOfFile.QuadPart = FUNC_1(VAR_12->inode_item.st_mode) ? 0 : VAR_12->inode_item.st_size;
        VAR_11->FileAttributes = VAR_12->atts == 0 ? VAR_4 : VAR_12->atts;
    }

    if (VAR_12->type == VAR_3)
        VAR_11->ReparseTag = VAR_9;
    else if (VAR_12->type == VAR_2)
        VAR_11->ReparseTag = VAR_8;
    else if (VAR_12->type == VAR_1)
        VAR_11->ReparseTag = VAR_7;
    else if (VAR_12->type == VAR_0)
        VAR_11->ReparseTag = VAR_6;
    else if (!(VAR_11->FileAttributes & VAR_5))
        VAR_11->ReparseTag = 0;
    else
        VAR_11->ReparseTag = FUNC_3(VAR_12);

    if (VAR_12->type == VAR_3 || VAR_12->type == VAR_2 || VAR_12->type == VAR_1 || VAR_12->type == VAR_0)
        VAR_11->FileAttributes |= VAR_5;

    if (VAR_12->ads)
        VAR_11->NumberOfLinks = VAR_13->fileref->parent->fcb->inode_item.st_nlink;
    else
        VAR_11->NumberOfLinks = VAR_12->inode_item.st_nlink;

    VAR_11->EffectiveAccess = VAR_13->access;

    *VAR_14 -= sizeof(FILE_STAT_INFORMATION);

    return VAR_10;
}
