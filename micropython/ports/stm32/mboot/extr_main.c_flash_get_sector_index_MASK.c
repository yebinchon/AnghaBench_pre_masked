
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_3__ {scalar_t__ base_address; int sector_count; int sector_size; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static uint32_t FUNC_1(uint32_t VAR_1, uint32_t *VAR_2) {
    if (VAR_1 >= VAR_0[0].base_address) {
        uint32_t VAR_3 = 0;
        for (int VAR_4 = 0; VAR_4 < FUNC_0(VAR_0); ++VAR_4) {
            for (int VAR_5 = 0; VAR_5 < VAR_0[VAR_4].sector_count; ++VAR_5) {
                uint32_t VAR_6 = VAR_0[VAR_4].base_address
                    + (VAR_5 + 1) * VAR_0[VAR_4].sector_size;
                if (VAR_1 < VAR_6) {
                    *VAR_2 = VAR_0[VAR_4].sector_size;
                    return VAR_3;
                }
                ++VAR_3;
            }
        }
    }
    return 0;
}
