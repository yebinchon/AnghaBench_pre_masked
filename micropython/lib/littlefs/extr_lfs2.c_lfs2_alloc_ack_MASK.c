
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ack; } ;
struct TYPE_7__ {TYPE_2__* cfg; TYPE_1__ free; } ;
typedef TYPE_3__ lfs2_t ;
struct TYPE_6__ {int block_count; } ;



__attribute__((used)) static void FUNC_0(lfs2_t *VAR_0) {
    VAR_0->free.ack = VAR_0->cfg->block_count;
}
