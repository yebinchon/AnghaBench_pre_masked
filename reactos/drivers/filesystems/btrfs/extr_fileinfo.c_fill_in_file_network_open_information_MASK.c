
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
typedef struct TYPE_19__ TYPE_11__ ;
typedef struct TYPE_18__ TYPE_10__ ;


struct TYPE_26__ {TYPE_4__* parent; } ;
typedef TYPE_7__ file_ref ;
struct TYPE_18__ {int st_size; int st_mode; int st_ctime; int st_mtime; int st_atime; int otime; } ;
struct TYPE_21__ {int Length; } ;
struct TYPE_27__ {scalar_t__ atts; TYPE_10__ inode_item; TYPE_2__ adsdata; scalar_t__ ads; TYPE_1__* Vcb; } ;
typedef TYPE_8__ fcb ;
struct TYPE_28__ {void* QuadPart; } ;
struct TYPE_25__ {int QuadPart; } ;
struct TYPE_24__ {int QuadPart; } ;
struct TYPE_23__ {TYPE_3__* fcb; } ;
struct TYPE_22__ {scalar_t__ atts; TYPE_10__ inode_item; } ;
struct TYPE_20__ {TYPE_8__* dummy_fcb; } ;
struct TYPE_19__ {void* FileAttributes; TYPE_6__ EndOfFile; TYPE_5__ AllocationSize; TYPE_9__ ChangeTime; TYPE_9__ LastWriteTime; TYPE_9__ LastAccessTime; TYPE_9__ CreationTime; } ;
typedef int NTSTATUS ;
typedef scalar_t__ LONG ;
typedef TYPE_9__ LARGE_INTEGER ;
typedef TYPE_10__ INODE_ITEM ;
typedef TYPE_11__ FILE_NETWORK_OPEN_INFORMATION ;


 int FUNC_0 (char*) ;
 void* VAR_0 ;
 int FUNC_1 (TYPE_9__*) ;
 int FUNC_2 (TYPE_11__*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (TYPE_8__*) ;
 void* FUNC_6 (int *) ;

__attribute__((used)) static NTSTATUS FUNC_7(FILE_NETWORK_OPEN_INFORMATION* VAR_4, fcb* VAR_5, file_ref* VAR_6, LONG* VAR_7) {
    INODE_ITEM* VAR_8;

    if (*VAR_7 < (LONG)sizeof(FILE_NETWORK_OPEN_INFORMATION)) {
        FUNC_4("overflow\n");
        return VAR_1;
    }

    FUNC_2(VAR_4, sizeof(FILE_NETWORK_OPEN_INFORMATION));

    *VAR_7 -= sizeof(FILE_NETWORK_OPEN_INFORMATION);

    if (VAR_5->ads) {
        if (!VAR_6 || !VAR_6->parent) {
            FUNC_0("no fileref for stream\n");
            return VAR_2;
        }

        VAR_8 = &VAR_6->parent->fcb->inode_item;
    } else
        VAR_8 = &VAR_5->inode_item;

    if (VAR_5 == VAR_5->Vcb->dummy_fcb) {
        LARGE_INTEGER VAR_9;

        FUNC_1(&VAR_9);
        VAR_4->CreationTime = VAR_4->LastAccessTime = VAR_4->LastWriteTime = VAR_4->ChangeTime = VAR_9;
    } else {
        VAR_4->CreationTime.QuadPart = FUNC_6(&VAR_8->otime);
        VAR_4->LastAccessTime.QuadPart = FUNC_6(&VAR_8->st_atime);
        VAR_4->LastWriteTime.QuadPart = FUNC_6(&VAR_8->st_mtime);
        VAR_4->ChangeTime.QuadPart = FUNC_6(&VAR_8->st_ctime);
    }

    if (VAR_5->ads) {
        VAR_4->AllocationSize.QuadPart = VAR_4->EndOfFile.QuadPart = VAR_5->adsdata.Length;
        VAR_4->FileAttributes = VAR_6->parent->fcb->atts == 0 ? VAR_0 : VAR_6->parent->fcb->atts;
    } else {
        VAR_4->AllocationSize.QuadPart = FUNC_5(VAR_5);
        VAR_4->EndOfFile.QuadPart = FUNC_3(VAR_5->inode_item.st_mode) ? 0 : VAR_5->inode_item.st_size;
        VAR_4->FileAttributes = VAR_5->atts == 0 ? VAR_0 : VAR_5->atts;
    }

    return VAR_3;
}
