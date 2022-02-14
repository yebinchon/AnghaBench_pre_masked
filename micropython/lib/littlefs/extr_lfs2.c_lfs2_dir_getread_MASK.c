
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef int lfs2_tag_t ;
struct TYPE_9__ {TYPE_1__* cfg; } ;
typedef TYPE_2__ lfs2_t ;
typedef scalar_t__ lfs2_size_t ;
typedef scalar_t__ lfs2_off_t ;
typedef int lfs2_mdir_t ;
struct TYPE_10__ {scalar_t__ block; scalar_t__ off; scalar_t__ size; int * buffer; } ;
typedef TYPE_3__ lfs2_cache_t ;
struct TYPE_8__ {scalar_t__ block_size; scalar_t__ cache_size; int read_size; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (TYPE_2__*,int const*,int ,int ,scalar_t__,int *,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 (int *,int *,scalar_t__) ;

__attribute__((used)) static int FUNC_5(lfs2_t *VAR_2, const lfs2_mdir_t *VAR_3,
        const lfs2_cache_t *VAR_4, lfs2_cache_t *VAR_5, lfs2_size_t VAR_6,
        lfs2_tag_t VAR_7, lfs2_tag_t VAR_8,
        lfs2_off_t VAR_9, void *VAR_10, lfs2_size_t VAR_11) {
    uint8_t *VAR_12 = VAR_10;
    if (VAR_9+VAR_11 > VAR_2->cfg->block_size) {
        return VAR_1;
    }

    while (VAR_11 > 0) {
        lfs2_size_t VAR_13 = VAR_11;

        if (VAR_4 && VAR_4->block == VAR_0 &&
                VAR_9 < VAR_4->off + VAR_4->size) {
            if (VAR_9 >= VAR_4->off) {

                VAR_13 = FUNC_3(VAR_13, VAR_4->size - (VAR_9-VAR_4->off));
                FUNC_4(VAR_12, &VAR_4->buffer[VAR_9-VAR_4->off], VAR_13);

                VAR_12 += VAR_13;
                VAR_9 += VAR_13;
                VAR_11 -= VAR_13;
                continue;
            }


            VAR_13 = FUNC_3(VAR_13, VAR_4->off-VAR_9);
        }

        if (VAR_5->block == VAR_0 &&
                VAR_9 < VAR_5->off + VAR_5->size) {
            if (VAR_9 >= VAR_5->off) {

                VAR_13 = FUNC_3(VAR_13, VAR_5->size - (VAR_9-VAR_5->off));
                FUNC_4(VAR_12, &VAR_5->buffer[VAR_9-VAR_5->off], VAR_13);

                VAR_12 += VAR_13;
                VAR_9 += VAR_13;
                VAR_11 -= VAR_13;
                continue;
            }


            VAR_13 = FUNC_3(VAR_13, VAR_5->off-VAR_9);
        }


        VAR_5->block = VAR_0;
        VAR_5->off = FUNC_0(VAR_9, VAR_2->cfg->read_size);
        VAR_5->size = FUNC_3(FUNC_1(VAR_9+VAR_6, VAR_2->cfg->read_size),
                VAR_2->cfg->cache_size);
        int VAR_14 = FUNC_2(VAR_2, VAR_3, VAR_7, VAR_8,
                VAR_5->off, VAR_5->buffer, VAR_5->size);
        if (VAR_14 < 0) {
            return VAR_14;
        }
    }

    return 0;
}
