
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {TYPE_3__* cfg; } ;
typedef TYPE_1__ lfs1_t ;
typedef scalar_t__ lfs1_size_t ;
typedef scalar_t__ lfs1_off_t ;
struct TYPE_9__ {scalar_t__ block; scalar_t__ off; int * buffer; } ;
typedef TYPE_2__ lfs1_cache_t ;
typedef scalar_t__ lfs1_block_t ;
struct TYPE_10__ {scalar_t__ block_count; scalar_t__ prog_size; scalar_t__ read_size; int (* read ) (TYPE_3__*,scalar_t__,scalar_t__,int *,scalar_t__) ;} ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (int *,int *,scalar_t__) ;
 int FUNC_3 (TYPE_3__*,scalar_t__,scalar_t__,int *,scalar_t__) ;
 int FUNC_4 (TYPE_3__*,scalar_t__,scalar_t__,int *,scalar_t__) ;

__attribute__((used)) static int FUNC_5(lfs1_t *VAR_0, lfs1_cache_t *VAR_1,
        const lfs1_cache_t *VAR_2, lfs1_block_t VAR_3,
        lfs1_off_t VAR_4, void *VAR_5, lfs1_size_t VAR_6) {
    uint8_t *VAR_7 = VAR_5;
    FUNC_0(VAR_3 < VAR_0->cfg->block_count);

    while (VAR_6 > 0) {
        if (VAR_2 && VAR_3 == VAR_2->block && VAR_4 >= VAR_2->off &&
                VAR_4 < VAR_2->off + VAR_0->cfg->prog_size) {

            lfs1_size_t VAR_8 = FUNC_1(VAR_6,
                    VAR_0->cfg->prog_size - (VAR_4-VAR_2->off));
            FUNC_2(VAR_7, &VAR_2->buffer[VAR_4-VAR_2->off], VAR_8);

            VAR_7 += VAR_8;
            VAR_4 += VAR_8;
            VAR_6 -= VAR_8;
            continue;
        }

        if (VAR_3 == VAR_1->block && VAR_4 >= VAR_1->off &&
                VAR_4 < VAR_1->off + VAR_0->cfg->read_size) {

            lfs1_size_t VAR_9 = FUNC_1(VAR_6,
                    VAR_0->cfg->read_size - (VAR_4-VAR_1->off));
            FUNC_2(VAR_7, &VAR_1->buffer[VAR_4-VAR_1->off], VAR_9);

            VAR_7 += VAR_9;
            VAR_4 += VAR_9;
            VAR_6 -= VAR_9;
            continue;
        }

        if (VAR_4 % VAR_0->cfg->read_size == 0 && VAR_6 >= VAR_0->cfg->read_size) {

            lfs1_size_t VAR_10 = VAR_6 - (VAR_6 % VAR_0->cfg->read_size);
            int VAR_11 = VAR_0->cfg->read(VAR_0->cfg, VAR_3, VAR_4, VAR_7, VAR_10);
            if (VAR_11) {
                return VAR_11;
            }

            VAR_7 += VAR_10;
            VAR_4 += VAR_10;
            VAR_6 -= VAR_10;
            continue;
        }


        VAR_1->block = VAR_3;
        VAR_1->off = VAR_4 - (VAR_4 % VAR_0->cfg->read_size);
        int VAR_12 = VAR_0->cfg->read(VAR_0->cfg, VAR_1->block,
                VAR_1->off, VAR_1->buffer, VAR_0->cfg->read_size);
        if (VAR_12) {
            return VAR_12;
        }
    }

    return 0;
}
