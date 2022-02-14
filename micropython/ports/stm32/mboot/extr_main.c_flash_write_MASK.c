
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ const uint64_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_2__ {scalar_t__ base_address; scalar_t__ sector_size; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,scalar_t__,scalar_t__ const) ;
 int FUNC_1 () ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static int FUNC_2(uint32_t VAR_4, const uint8_t *VAR_5, size_t VAR_6) {
    if (VAR_4 >= VAR_3[0].base_address && VAR_4 < VAR_3[0].base_address + VAR_3[0].sector_size) {

        return -1;
    }

    const uint32_t *VAR_7 = (const uint32_t*)VAR_5;
    size_t VAR_8 = (VAR_6 + 3) / 4;
    FUNC_1();
    for (size_t VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
        if (FUNC_0(VAR_2, VAR_4, *VAR_7) != VAR_1) {
            return -1;
        }
        VAR_4 += 4;
        VAR_7 += 1;
    }





    return 0;
}
