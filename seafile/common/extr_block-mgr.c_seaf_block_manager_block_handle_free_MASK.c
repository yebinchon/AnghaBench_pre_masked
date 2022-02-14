
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {void (* block_handle_free ) (TYPE_2__*,int *) ;} ;
struct TYPE_4__ {TYPE_2__* backend; } ;
typedef TYPE_1__ SeafBlockManager ;
typedef int BlockHandle ;


 void FUNC_0 (TYPE_2__*,int *) ;

void
FUNC_1 (SeafBlockManager *VAR_0,
                                      BlockHandle *VAR_1)
{
    return VAR_0->backend->block_handle_free (VAR_0->backend, VAR_1);
}
