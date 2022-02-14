
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int handle; } ;
struct folder {int entry; int blocks_list; int files_list; int compression; scalar_t__ data_count; int data_start; TYPE_1__ data; } ;
struct TYPE_7__ {scalar_t__ cbReserveCFFolder; } ;
struct TYPE_8__ {int cFolders; TYPE_2__ ccab; int folders_size; int folders_list; int compression; int folders_data_size; struct folder* (* alloc ) (int) ;} ;
typedef TYPE_3__ FCI_Int ;
typedef int CFFOLDER ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_3__*,int ,int ) ;
 struct folder* FUNC_3 (int) ;

__attribute__((used)) static struct folder *FUNC_4( FCI_Int *VAR_2 )
{
    struct folder *VAR_3 = VAR_2->alloc( sizeof(*VAR_3) );

    if (!VAR_3)
    {
        FUNC_2( VAR_2, VAR_1, VAR_0 );
        return ((void*)0);
    }
    VAR_3->data.handle = -1;
    VAR_3->data_start = VAR_2->folders_data_size;
    VAR_3->data_count = 0;
    VAR_3->compression = VAR_2->compression;
    FUNC_1( &VAR_3->files_list );
    FUNC_1( &VAR_3->blocks_list );
    FUNC_0( &VAR_2->folders_list, &VAR_3->entry );
    VAR_2->folders_size += sizeof(CFFOLDER) + VAR_2->ccab.cbReserveCFFolder;
    VAR_2->cFolders++;
    return VAR_3;
}
