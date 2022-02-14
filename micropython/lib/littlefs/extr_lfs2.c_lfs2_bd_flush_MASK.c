
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {TYPE_3__* cfg; } ;
typedef TYPE_1__ lfs2_t ;
typedef int lfs2_size_t ;
struct TYPE_14__ {scalar_t__ block; int buffer; int off; int size; } ;
typedef TYPE_2__ lfs2_cache_t ;
struct TYPE_15__ {scalar_t__ block_count; int (* prog ) (TYPE_3__*,scalar_t__,int ,int ,int ) ;int prog_size; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__*,int *,TYPE_2__*,int ,scalar_t__,int ,int ,int ) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_5 (TYPE_3__*,scalar_t__,int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(lfs2_t *VAR_4,
        lfs2_cache_t *VAR_5, lfs2_cache_t *VAR_6, bool VAR_7) {
    if (VAR_5->block != VAR_1 && VAR_5->block != VAR_0) {
        FUNC_0(VAR_5->block < VAR_4->cfg->block_count);
        lfs2_size_t VAR_8 = FUNC_1(VAR_5->size, VAR_4->cfg->prog_size);
        int VAR_9 = VAR_4->cfg->prog(VAR_4->cfg, VAR_5->block,
                VAR_5->off, VAR_5->buffer, VAR_8);
        FUNC_0(VAR_9 <= 0);
        if (VAR_9) {
            return VAR_9;
        }

        if (VAR_7) {

            FUNC_3(VAR_4, VAR_6);
            int VAR_10 = FUNC_2(VAR_4,
                    ((void*)0), VAR_6, VAR_8,
                    VAR_5->block, VAR_5->off, VAR_5->buffer, VAR_8);
            if (VAR_10 < 0) {
                return VAR_10;
            }

            if (VAR_10 != VAR_2) {
                return VAR_3;
            }
        }

        FUNC_4(VAR_4, VAR_5);
    }

    return 0;
}
