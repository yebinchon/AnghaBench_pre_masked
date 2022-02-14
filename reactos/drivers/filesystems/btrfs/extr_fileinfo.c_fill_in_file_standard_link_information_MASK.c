
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int delete_on_close; } ;
typedef TYPE_2__ file_ref ;
struct TYPE_8__ {int st_nlink; } ;
struct TYPE_10__ {scalar_t__ type; int ads; TYPE_1__ inode_item; } ;
typedef TYPE_3__ fcb ;
struct TYPE_11__ {int DeletePending; int Directory; int TotalNumberOfLinks; int NumberOfAccessibleLinks; } ;
typedef int NTSTATUS ;
typedef int LONG ;
typedef TYPE_4__ FILE_STANDARD_LINK_INFORMATION ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static NTSTATUS FUNC_1(FILE_STANDARD_LINK_INFORMATION* VAR_2, fcb* VAR_3, file_ref* VAR_4, LONG* VAR_5) {
    FUNC_0("FileStandardLinkInformation\n");



    VAR_2->NumberOfAccessibleLinks = VAR_3->inode_item.st_nlink;
    VAR_2->TotalNumberOfLinks = VAR_3->inode_item.st_nlink;
    VAR_2->DeletePending = VAR_4 ? VAR_4->delete_on_close : 0;
    VAR_2->Directory = (!VAR_3->ads && VAR_3->type == VAR_0) ? 1 : 0;

    *VAR_5 -= sizeof(FILE_STANDARD_LINK_INFORMATION);

    return VAR_1;
}
