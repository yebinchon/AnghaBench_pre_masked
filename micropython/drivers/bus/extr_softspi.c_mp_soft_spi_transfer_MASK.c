
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_2__ {scalar_t__ delay_half; int polarity; scalar_t__ phase; int sck; int miso; int mosi; } ;
typedef TYPE_1__ mp_soft_spi_obj_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;

void FUNC_3(void *VAR_1, size_t VAR_2, const uint8_t *VAR_3, uint8_t *VAR_4) {
    mp_soft_spi_obj_t *VAR_5 = (mp_soft_spi_obj_t*)VAR_1;
    uint32_t VAR_6 = VAR_5->delay_half;
    for (size_t VAR_7 = 0; VAR_7 < VAR_2; ++VAR_7) {
        uint8_t VAR_8 = VAR_3[VAR_7];
        uint8_t VAR_9 = 0;
        for (int VAR_10 = 0; VAR_10 < 8; ++VAR_10, VAR_8 <<= 1) {
            FUNC_2(VAR_5->mosi, (VAR_8 >> 7) & 1);
            if (VAR_5->phase == 0) {
                FUNC_0(VAR_6);
                FUNC_2(VAR_5->sck, 1 - VAR_5->polarity);
            } else {
                FUNC_2(VAR_5->sck, 1 - VAR_5->polarity);
                FUNC_0(VAR_6);
            }
            VAR_9 = (VAR_9 << 1) | FUNC_1(VAR_5->miso);
            if (VAR_5->phase == 0) {
                FUNC_0(VAR_6);
                FUNC_2(VAR_5->sck, VAR_5->polarity);
            } else {
                FUNC_2(VAR_5->sck, VAR_5->polarity);
                FUNC_0(VAR_6);
            }
        }
        if (VAR_4 != ((void*)0)) {
            VAR_4[VAR_7] = VAR_9;
        }
    }
}
