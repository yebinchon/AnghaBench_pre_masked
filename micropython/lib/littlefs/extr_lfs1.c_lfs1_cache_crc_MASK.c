
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int lfs1_t ;
typedef scalar_t__ lfs1_size_t ;
typedef scalar_t__ lfs1_off_t ;
typedef int lfs1_cache_t ;
typedef int lfs1_block_t ;


 int FUNC_0 (int *,int *,int const*,int ,scalar_t__,int *,int) ;
 int FUNC_1 (int *,int *,int) ;

__attribute__((used)) static int FUNC_2(lfs1_t *VAR_0, lfs1_cache_t *VAR_1,
        const lfs1_cache_t *VAR_2, lfs1_block_t VAR_3,
        lfs1_off_t VAR_4, lfs1_size_t VAR_5, uint32_t *VAR_6) {
    for (lfs1_off_t VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
        uint8_t VAR_8;
        int VAR_9 = FUNC_0(VAR_0, VAR_1, VAR_2,
                VAR_3, VAR_4+VAR_7, &VAR_8, 1);
        if (VAR_9) {
            return VAR_9;
        }

        FUNC_1(VAR_6, &VAR_8, 1);
    }

    return 0;
}
