
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_10__ ;


struct TYPE_24__ {int delete_on_close; TYPE_4__* parent; } ;
typedef TYPE_8__ file_ref ;
struct TYPE_22__ {int st_mode; int st_nlink; int st_size; } ;
struct TYPE_17__ {int Length; } ;
struct TYPE_25__ {TYPE_6__ inode_item; TYPE_1__ adsdata; scalar_t__ ads; } ;
typedef TYPE_9__ fcb ;
struct TYPE_23__ {int QuadPart; } ;
struct TYPE_21__ {int QuadPart; } ;
struct TYPE_20__ {TYPE_3__* fcb; } ;
struct TYPE_18__ {int st_nlink; } ;
struct TYPE_19__ {TYPE_2__ inode_item; } ;
struct TYPE_16__ {int Directory; int DeletePending; TYPE_7__ EndOfFile; int NumberOfLinks; TYPE_5__ AllocationSize; } ;
typedef int NTSTATUS ;
typedef int LONG ;
typedef TYPE_10__ FILE_STANDARD_INFORMATION ;


 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_10__*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (TYPE_9__*) ;

__attribute__((used)) static NTSTATUS FUNC_5(FILE_STANDARD_INFORMATION* VAR_2, fcb* VAR_3, file_ref* VAR_4, LONG* VAR_5) {
    FUNC_1(VAR_2, sizeof(FILE_STANDARD_INFORMATION));

    *VAR_5 -= sizeof(FILE_STANDARD_INFORMATION);

    if (VAR_3->ads) {
        if (!VAR_4 || !VAR_4->parent) {
            FUNC_0("no fileref for stream\n");
            return VAR_0;
        }

        VAR_2->AllocationSize.QuadPart = VAR_2->EndOfFile.QuadPart = VAR_3->adsdata.Length;
        VAR_2->NumberOfLinks = VAR_4->parent->fcb->inode_item.st_nlink;
        VAR_2->Directory = 0;
    } else {
        VAR_2->AllocationSize.QuadPart = FUNC_4(VAR_3);
        VAR_2->EndOfFile.QuadPart = FUNC_2(VAR_3->inode_item.st_mode) ? 0 : VAR_3->inode_item.st_size;
        VAR_2->NumberOfLinks = VAR_3->inode_item.st_nlink;
        VAR_2->Directory = FUNC_2(VAR_3->inode_item.st_mode);
    }

    FUNC_3("length = %I64u\n", VAR_2->EndOfFile.QuadPart);

    VAR_2->DeletePending = VAR_4 ? VAR_4->delete_on_close : 0;

    return VAR_1;
}
