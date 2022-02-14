
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {TYPE_3__* cfg; } ;
typedef TYPE_1__ lfs1_t ;
struct TYPE_12__ {int block; int buffer; int off; } ;
typedef TYPE_2__ lfs1_cache_t ;
struct TYPE_13__ {int (* prog ) (TYPE_3__*,int,int ,int ,int ) ;int prog_size; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,TYPE_2__*,int *,int,int ,int ,int ) ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_2 (TYPE_3__*,int,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(lfs1_t *VAR_1,
        lfs1_cache_t *VAR_2, lfs1_cache_t *VAR_3) {
    if (VAR_2->block != 0xffffffff) {
        int VAR_4 = VAR_1->cfg->prog(VAR_1->cfg, VAR_2->block,
                VAR_2->off, VAR_2->buffer, VAR_1->cfg->prog_size);
        if (VAR_4) {
            return VAR_4;
        }

        if (VAR_3) {
            int VAR_5 = FUNC_0(VAR_1, VAR_3, ((void*)0), VAR_2->block,
                    VAR_2->off, VAR_2->buffer, VAR_1->cfg->prog_size);
            if (VAR_5 < 0) {
                return VAR_5;
            }

            if (!VAR_5) {
                return VAR_0;
            }
        }

        FUNC_1(VAR_1, VAR_2);
    }

    return 0;
}
