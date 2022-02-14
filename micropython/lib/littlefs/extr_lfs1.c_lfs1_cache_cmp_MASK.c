
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ const uint8_t ;
typedef int lfs1_t ;
typedef size_t lfs1_size_t ;
typedef size_t lfs1_off_t ;
typedef int lfs1_cache_t ;
typedef int lfs1_block_t ;


 int FUNC_0 (int *,int *,int const*,int ,size_t,scalar_t__ const*,int) ;

__attribute__((used)) static int FUNC_1(lfs1_t *VAR_0, lfs1_cache_t *VAR_1,
        const lfs1_cache_t *VAR_2, lfs1_block_t VAR_3,
        lfs1_off_t VAR_4, const void *VAR_5, lfs1_size_t VAR_6) {
    const uint8_t *VAR_7 = VAR_5;

    for (lfs1_off_t VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
        uint8_t VAR_9;
        int VAR_10 = FUNC_0(VAR_0, VAR_1, VAR_2,
                VAR_3, VAR_4+VAR_8, &VAR_9, 1);
        if (VAR_10) {
            return VAR_10;
        }

        if (VAR_9 != VAR_7[VAR_8]) {
            return 0;
        }
    }

    return 1;
}
