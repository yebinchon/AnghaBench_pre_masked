
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int (* write_block ) (TYPE_2__*,int *,void const*,int) ;} ;
struct TYPE_4__ {TYPE_2__* backend; } ;
typedef TYPE_1__ SeafBlockManager ;
typedef int BlockHandle ;


 int FUNC_0 (TYPE_2__*,int *,void const*,int) ;

int
FUNC_1 (SeafBlockManager *VAR_0,
                                BlockHandle *VAR_1,
                                const void *VAR_2, int VAR_3)
{
    return VAR_0->backend->write_block (VAR_0->backend, VAR_1, VAR_2, VAR_3);
}
