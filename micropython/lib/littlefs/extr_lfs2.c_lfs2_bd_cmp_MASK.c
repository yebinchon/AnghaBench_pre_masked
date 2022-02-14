
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ const uint8_t ;
typedef int lfs2_t ;
typedef size_t lfs2_size_t ;
typedef size_t lfs2_off_t ;
typedef int lfs2_cache_t ;
typedef int lfs2_block_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int const*,int *,size_t,int ,size_t,scalar_t__ const*,int) ;

__attribute__((used)) static int FUNC_1(lfs2_t *VAR_3,
        const lfs2_cache_t *VAR_4, lfs2_cache_t *VAR_5, lfs2_size_t VAR_6,
        lfs2_block_t VAR_7, lfs2_off_t VAR_8,
        const void *VAR_9, lfs2_size_t VAR_10) {
    const uint8_t *VAR_11 = VAR_9;

    for (lfs2_off_t VAR_12 = 0; VAR_12 < VAR_10; VAR_12++) {
        uint8_t VAR_13;
        int VAR_14 = FUNC_0(VAR_3,
                VAR_4, VAR_5, VAR_6-VAR_12,
                VAR_7, VAR_8+VAR_12, &VAR_13, 1);
        if (VAR_14) {
            return VAR_14;
        }

        if (VAR_13 != VAR_11[VAR_12]) {
            return (VAR_13 < VAR_11[VAR_12]) ? VAR_2 : VAR_1;
        }
    }

    return VAR_0;
}
