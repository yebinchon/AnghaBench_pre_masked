
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * (* stat_block_by_handle ) (TYPE_2__*,int *) ;} ;
struct TYPE_4__ {TYPE_2__* backend; } ;
typedef TYPE_1__ SeafBlockManager ;
typedef int BlockMetadata ;
typedef int BlockHandle ;


 int * FUNC_0 (TYPE_2__*,int *) ;

BlockMetadata *
FUNC_1 (SeafBlockManager *VAR_0,
                                         BlockHandle *VAR_1)
{
    return VAR_0->backend->stat_block_by_handle (VAR_0->backend, VAR_1);
}
