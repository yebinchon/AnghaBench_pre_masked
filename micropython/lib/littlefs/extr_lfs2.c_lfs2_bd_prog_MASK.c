
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_11__ {TYPE_1__* cfg; } ;
typedef TYPE_2__ lfs2_t ;
typedef scalar_t__ lfs2_size_t ;
typedef scalar_t__ lfs2_off_t ;
struct TYPE_12__ {scalar_t__ block; scalar_t__ off; scalar_t__ size; int * buffer; } ;
typedef TYPE_3__ lfs2_cache_t ;
typedef scalar_t__ lfs2_block_t ;
struct TYPE_10__ {scalar_t__ block_size; scalar_t__ cache_size; int prog_size; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (TYPE_2__*,TYPE_3__*,TYPE_3__*,int) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;
 int FUNC_5 (int *,int const*,scalar_t__) ;

__attribute__((used)) static int FUNC_6(lfs2_t *VAR_1,
        lfs2_cache_t *VAR_2, lfs2_cache_t *VAR_3, bool VAR_4,
        lfs2_block_t VAR_5, lfs2_off_t VAR_6,
        const void *VAR_7, lfs2_size_t VAR_8) {
    const uint8_t *VAR_9 = VAR_7;
    FUNC_0(VAR_5 != VAR_0);
    FUNC_0(VAR_6 + VAR_8 <= VAR_1->cfg->block_size);

    while (VAR_8 > 0) {
        if (VAR_5 == VAR_2->block &&
                VAR_6 >= VAR_2->off &&
                VAR_6 < VAR_2->off + VAR_1->cfg->cache_size) {

            lfs2_size_t VAR_10 = FUNC_4(VAR_8,
                    VAR_1->cfg->cache_size - (VAR_6-VAR_2->off));
            FUNC_5(&VAR_2->buffer[VAR_6-VAR_2->off], VAR_9, VAR_10);

            VAR_9 += VAR_10;
            VAR_6 += VAR_10;
            VAR_8 -= VAR_10;

            VAR_2->size = FUNC_3(VAR_2->size, VAR_6 - VAR_2->off);
            if (VAR_2->size == VAR_1->cfg->cache_size) {

                int VAR_11 = FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4);
                if (VAR_11) {
                    return VAR_11;
                }
            }

            continue;
        }



        FUNC_0(VAR_2->block == VAR_0);


        VAR_2->block = VAR_5;
        VAR_2->off = FUNC_1(VAR_6, VAR_1->cfg->prog_size);
        VAR_2->size = 0;
    }

    return 0;
}
