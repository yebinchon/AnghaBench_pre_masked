
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int off; int size; unsigned int* buffer; } ;
struct TYPE_6__ {TYPE_2__ free; TYPE_1__* cfg; } ;
typedef TYPE_3__ lfs2_t ;
typedef int lfs2_block_t ;
struct TYPE_4__ {int block_count; } ;



__attribute__((used)) static int FUNC_0(void *VAR_0, lfs2_block_t VAR_1) {
    lfs2_t *VAR_2 = (lfs2_t*)VAR_0;
    lfs2_block_t VAR_3 = ((VAR_1 - VAR_2->free.off)
            + VAR_2->cfg->block_count) % VAR_2->cfg->block_count;

    if (VAR_3 < VAR_2->free.size) {
        VAR_2->free.buffer[VAR_3 / 32] |= 1U << (VAR_3 % 32);
    }

    return 0;
}
