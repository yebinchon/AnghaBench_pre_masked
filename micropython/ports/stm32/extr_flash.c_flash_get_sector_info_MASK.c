
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_3__ {scalar_t__ base_address; int sector_count; int sector_size; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

uint32_t FUNC_1(uint32_t VAR_1, uint32_t *VAR_2, uint32_t *VAR_3) {
    if (VAR_1 >= VAR_0[0].base_address) {
        uint32_t VAR_4 = 0;
        for (int VAR_5 = 0; VAR_5 < FUNC_0(VAR_0); ++VAR_5) {
            for (int VAR_6 = 0; VAR_6 < VAR_0[VAR_5].sector_count; ++VAR_6) {
                uint32_t VAR_7 = VAR_0[VAR_5].base_address
                    + (VAR_6 + 1) * VAR_0[VAR_5].sector_size;
                if (VAR_1 < VAR_7) {
                    if (VAR_2 != ((void*)0)) {
                        *VAR_2 = VAR_0[VAR_5].base_address
                            + VAR_6 * VAR_0[VAR_5].sector_size;
                    }
                    if (VAR_3 != ((void*)0)) {
                        *VAR_3 = VAR_0[VAR_5].sector_size;
                    }
                    return VAR_4;
                }
                ++VAR_4;
            }
        }
    }
    return 0;
}
