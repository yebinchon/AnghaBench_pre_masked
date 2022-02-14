
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int miso; int mosi; int sck; int polarity; } ;
typedef TYPE_1__ mp_soft_spi_obj_t ;




 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

int FUNC_3(void *VAR_0, uint32_t VAR_1) {
    mp_soft_spi_obj_t *VAR_2 = (mp_soft_spi_obj_t*)VAR_0;

    switch (VAR_1) {
        case 128:
            FUNC_2(VAR_2->sck, VAR_2->polarity);
            FUNC_1(VAR_2->sck);
            FUNC_1(VAR_2->mosi);
            FUNC_0(VAR_2->miso);
            break;

        case 129:
            break;
    }

    return 0;
}
