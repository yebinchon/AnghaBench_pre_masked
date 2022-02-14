
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct lfs1_config {int read_size; int prog_size; int lookahead; int block_size; void* lookahead_buffer; void* prog_buffer; void* read_buffer; } ;
struct TYPE_9__ {void* buffer; } ;
struct TYPE_12__ {void* buffer; } ;
struct TYPE_11__ {void* buffer; } ;
struct TYPE_10__ {int* root; int deorphaned; int moving; int * dirs; int * files; struct lfs1_config const* cfg; TYPE_1__ free; TYPE_8__ rcache; TYPE_6__ pcache; } ;
typedef TYPE_2__ lfs1_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*,TYPE_8__*) ;
 int FUNC_2 (TYPE_2__*,TYPE_6__*) ;
 int FUNC_3 (TYPE_2__*) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(lfs1_t *VAR_1, const struct lfs1_config *VAR_2) {
    VAR_1->cfg = VAR_2;


    if (VAR_1->cfg->read_buffer) {
        VAR_1->rcache.buffer = VAR_1->cfg->read_buffer;
    } else {
        VAR_1->rcache.buffer = FUNC_4(VAR_1->cfg->read_size);
        if (!VAR_1->rcache.buffer) {
            goto cleanup;
        }
    }


    if (VAR_1->cfg->prog_buffer) {
        VAR_1->pcache.buffer = VAR_1->cfg->prog_buffer;
    } else {
        VAR_1->pcache.buffer = FUNC_4(VAR_1->cfg->prog_size);
        if (!VAR_1->pcache.buffer) {
            goto cleanup;
        }
    }


    FUNC_2(VAR_1, &VAR_1->pcache);
    FUNC_1(VAR_1, &VAR_1->rcache);


    FUNC_0(VAR_1->cfg->lookahead % 32 == 0);
    FUNC_0(VAR_1->cfg->lookahead > 0);
    if (VAR_1->cfg->lookahead_buffer) {
        VAR_1->free.buffer = VAR_1->cfg->lookahead_buffer;
    } else {
        VAR_1->free.buffer = FUNC_4(VAR_1->cfg->lookahead/8);
        if (!VAR_1->free.buffer) {
            goto cleanup;
        }
    }


    FUNC_0(VAR_1->cfg->prog_size % VAR_1->cfg->read_size == 0);
    FUNC_0(VAR_1->cfg->block_size % VAR_1->cfg->prog_size == 0);


    FUNC_0(4*FUNC_5(0xffffffff / (VAR_1->cfg->block_size-2*4))
            <= VAR_1->cfg->block_size);


    VAR_1->root[0] = 0xffffffff;
    VAR_1->root[1] = 0xffffffff;
    VAR_1->files = ((void*)0);
    VAR_1->dirs = ((void*)0);
    VAR_1->deorphaned = 0;
    VAR_1->moving = 0;

    return 0;

cleanup:
    FUNC_3(VAR_1);
    return VAR_0;
}
