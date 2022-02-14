
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_18__ {TYPE_3__* parent; } ;
typedef TYPE_4__ file_ref ;
struct TYPE_19__ {scalar_t__ atts; scalar_t__ ads; TYPE_1__* Vcb; } ;
typedef TYPE_5__ fcb ;
struct TYPE_20__ {void* QuadPart; } ;
struct TYPE_22__ {void* FileAttributes; TYPE_6__ ChangeTime; TYPE_6__ LastWriteTime; TYPE_6__ LastAccessTime; TYPE_6__ CreationTime; } ;
struct TYPE_21__ {int st_ctime; int st_mtime; int st_atime; int otime; } ;
struct TYPE_17__ {TYPE_2__* fcb; } ;
struct TYPE_16__ {scalar_t__ atts; } ;
struct TYPE_15__ {TYPE_5__* dummy_fcb; } ;
typedef int NTSTATUS ;
typedef int LONG ;
typedef TYPE_6__ LARGE_INTEGER ;
typedef TYPE_7__ INODE_ITEM ;
typedef TYPE_8__ FILE_BASIC_INFORMATION ;


 int FUNC_0 (char*) ;
 void* VAR_0 ;
 int FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (TYPE_8__*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_3 (int *) ;

__attribute__((used)) static NTSTATUS FUNC_4(FILE_BASIC_INFORMATION* VAR_3, INODE_ITEM* VAR_4, LONG* VAR_5, fcb* VAR_6, file_ref* VAR_7) {
    FUNC_2(VAR_3, sizeof(FILE_BASIC_INFORMATION));

    *VAR_5 -= sizeof(FILE_BASIC_INFORMATION);

    if (VAR_6 == VAR_6->Vcb->dummy_fcb) {
        LARGE_INTEGER VAR_8;

        FUNC_1(&VAR_8);
        VAR_3->CreationTime = VAR_3->LastAccessTime = VAR_3->LastWriteTime = VAR_3->ChangeTime = VAR_8;
    } else {
        VAR_3->CreationTime.QuadPart = FUNC_3(&VAR_4->otime);
        VAR_3->LastAccessTime.QuadPart = FUNC_3(&VAR_4->st_atime);
        VAR_3->LastWriteTime.QuadPart = FUNC_3(&VAR_4->st_mtime);
        VAR_3->ChangeTime.QuadPart = FUNC_3(&VAR_4->st_ctime);
    }

    if (VAR_6->ads) {
        if (!VAR_7 || !VAR_7->parent) {
            FUNC_0("no fileref for stream\n");
            return VAR_1;
        } else
            VAR_3->FileAttributes = VAR_7->parent->fcb->atts == 0 ? VAR_0 : VAR_7->parent->fcb->atts;
    } else
        VAR_3->FileAttributes = VAR_6->atts == 0 ? VAR_0 : VAR_6->atts;

    return VAR_2;
}
