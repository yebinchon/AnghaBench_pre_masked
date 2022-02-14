
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int buf ;
struct TYPE_2__ {scalar_t__ chip_size; } ;
typedef TYPE_1__ SpiFlashChip ;


 int FUNC_0 (scalar_t__,char*,int) ;
 int FUNC_1 (scalar_t__,char*,int) ;
 int VAR_0 ;
 int FUNC_2 (char*) ;
 int VAR_1 ;

void FUNC_3(void) {


    SpiFlashChip *VAR_2 = (SpiFlashChip*)(&VAR_1 + 4);

    char VAR_3[128];
    FUNC_0(VAR_2->chip_size - 4 * 0x1000, VAR_3, sizeof(VAR_3));





    bool VAR_4 = 0;
    for (int VAR_5 = 0; VAR_5 < sizeof(VAR_3); VAR_5++) {
        if (VAR_3[VAR_5] != 0xff) {
            VAR_4 = 1;
            break;
        }
    }

    if (!VAR_4) {
        static char VAR_6[] = "Writing init data\n";
        FUNC_2(VAR_6);
        FUNC_0((uint32_t)&VAR_0 - 0x40200000, VAR_3, sizeof(VAR_3));
        FUNC_1(VAR_2->chip_size - 4 * 0x1000, VAR_3, sizeof(VAR_3));
    }

    asm("j call_user_start");
}
