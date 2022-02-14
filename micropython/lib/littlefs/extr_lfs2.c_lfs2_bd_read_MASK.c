
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {TYPE_3__* cfg; } ;
typedef TYPE_1__ lfs2_t ;
typedef scalar_t__ lfs2_size_t ;
typedef scalar_t__ lfs2_off_t ;
struct TYPE_8__ {scalar_t__ block; scalar_t__ off; scalar_t__ size; int * buffer; } ;
typedef TYPE_2__ lfs2_cache_t ;
typedef scalar_t__ lfs2_block_t ;
struct TYPE_9__ {scalar_t__ block_size; scalar_t__ block_count; scalar_t__ cache_size; int (* read ) (TYPE_3__*,scalar_t__,scalar_t__,int *,scalar_t__) ;int read_size; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 (int *,int *,scalar_t__) ;
 int FUNC_5 (TYPE_3__*,scalar_t__,scalar_t__,int *,scalar_t__) ;

__attribute__((used)) static int FUNC_6(lfs2_t *VAR_2,
        const lfs2_cache_t *VAR_3, lfs2_cache_t *VAR_4, lfs2_size_t VAR_5,
        lfs2_block_t VAR_6, lfs2_off_t VAR_7,
        void *VAR_8, lfs2_size_t VAR_9) {
    uint8_t *VAR_10 = VAR_8;
    FUNC_0(VAR_6 != VAR_0);
    if (VAR_7+VAR_9 > VAR_2->cfg->block_size) {
        return VAR_1;
    }

    while (VAR_9 > 0) {
        lfs2_size_t VAR_11 = VAR_9;

        if (VAR_3 && VAR_6 == VAR_3->block &&
                VAR_7 < VAR_3->off + VAR_3->size) {
            if (VAR_7 >= VAR_3->off) {

                VAR_11 = FUNC_3(VAR_11, VAR_3->size - (VAR_7-VAR_3->off));
                FUNC_4(VAR_10, &VAR_3->buffer[VAR_7-VAR_3->off], VAR_11);

                VAR_10 += VAR_11;
                VAR_7 += VAR_11;
                VAR_9 -= VAR_11;
                continue;
            }


            VAR_11 = FUNC_3(VAR_11, VAR_3->off-VAR_7);
        }

        if (VAR_6 == VAR_4->block &&
                VAR_7 < VAR_4->off + VAR_4->size) {
            if (VAR_7 >= VAR_4->off) {

                VAR_11 = FUNC_3(VAR_11, VAR_4->size - (VAR_7-VAR_4->off));
                FUNC_4(VAR_10, &VAR_4->buffer[VAR_7-VAR_4->off], VAR_11);

                VAR_10 += VAR_11;
                VAR_7 += VAR_11;
                VAR_9 -= VAR_11;
                continue;
            }


            VAR_11 = FUNC_3(VAR_11, VAR_4->off-VAR_7);
        }


        FUNC_0(VAR_6 < VAR_2->cfg->block_count);
        VAR_4->block = VAR_6;
        VAR_4->off = FUNC_1(VAR_7, VAR_2->cfg->read_size);
        VAR_4->size = FUNC_3(
                FUNC_3(
                    FUNC_2(VAR_7+VAR_5, VAR_2->cfg->read_size),
                    VAR_2->cfg->block_size)
                - VAR_4->off,
                VAR_2->cfg->cache_size);
        int VAR_12 = VAR_2->cfg->read(VAR_2->cfg, VAR_4->block,
                VAR_4->off, VAR_4->buffer, VAR_4->size);
        FUNC_0(VAR_12 <= 0);
        if (VAR_12) {
            return VAR_12;
        }
    }

    return 0;
}
