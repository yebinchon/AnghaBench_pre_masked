
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_12__ {TYPE_3__* cfg; } ;
typedef TYPE_1__ lfs1_t ;
typedef int lfs1_size_t ;
typedef size_t lfs1_off_t ;
struct TYPE_13__ {int block; size_t off; int * buffer; } ;
typedef TYPE_2__ lfs1_cache_t ;
typedef int lfs1_block_t ;
struct TYPE_14__ {int block_count; size_t prog_size; int (* prog ) (TYPE_3__*,int,size_t,int const*,int) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*,int *,int,size_t,int const*,int) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*,TYPE_2__*) ;
 int FUNC_3 (int,size_t) ;
 int FUNC_4 (int *,int const*,int) ;
 int FUNC_5 (TYPE_3__*,int,size_t,int const*,int) ;

__attribute__((used)) static int FUNC_6(lfs1_t *VAR_1, lfs1_cache_t *VAR_2,
        lfs1_cache_t *VAR_3, lfs1_block_t VAR_4,
        lfs1_off_t VAR_5, const void *VAR_6, lfs1_size_t VAR_7) {
    const uint8_t *VAR_8 = VAR_6;
    FUNC_0(VAR_4 < VAR_1->cfg->block_count);

    while (VAR_7 > 0) {
        if (VAR_4 == VAR_2->block && VAR_5 >= VAR_2->off &&
                VAR_5 < VAR_2->off + VAR_1->cfg->prog_size) {

            lfs1_size_t VAR_9 = FUNC_3(VAR_7,
                    VAR_1->cfg->prog_size - (VAR_5-VAR_2->off));
            FUNC_4(&VAR_2->buffer[VAR_5-VAR_2->off], VAR_8, VAR_9);

            VAR_8 += VAR_9;
            VAR_5 += VAR_9;
            VAR_7 -= VAR_9;

            if (VAR_5 % VAR_1->cfg->prog_size == 0) {

                int VAR_10 = FUNC_2(VAR_1, VAR_2, VAR_3);
                if (VAR_10) {
                    return VAR_10;
                }
            }

            continue;
        }



        FUNC_0(VAR_2->block == 0xffffffff);

        if (VAR_5 % VAR_1->cfg->prog_size == 0 &&
                VAR_7 >= VAR_1->cfg->prog_size) {

            lfs1_size_t VAR_11 = VAR_7 - (VAR_7 % VAR_1->cfg->prog_size);
            int VAR_12 = VAR_1->cfg->prog(VAR_1->cfg, VAR_4, VAR_5, VAR_8, VAR_11);
            if (VAR_12) {
                return VAR_12;
            }

            if (VAR_3) {
                int VAR_13 = FUNC_1(VAR_1, VAR_3, ((void*)0),
                        VAR_4, VAR_5, VAR_8, VAR_11);
                if (VAR_13 < 0) {
                    return VAR_13;
                }

                if (!VAR_13) {
                    return VAR_0;
                }
            }

            VAR_8 += VAR_11;
            VAR_5 += VAR_11;
            VAR_7 -= VAR_11;
            continue;
        }


        VAR_2->block = VAR_4;
        VAR_2->off = VAR_5 - (VAR_5 % VAR_1->cfg->prog_size);
    }

    return 0;
}
