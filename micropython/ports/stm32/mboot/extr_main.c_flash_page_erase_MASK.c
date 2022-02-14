
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_3__ {int NbSectors; scalar_t__ Sector; int Banks; int VoltageRange; int TypeErase; } ;
typedef TYPE_1__ FLASH_EraseInitTypeDef ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (TYPE_1__*,scalar_t__*) ;
 int FUNC_1 () ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__*) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static int FUNC_5(uint32_t VAR_11, uint32_t *VAR_12) {
    uint32_t VAR_13 = 0;
    uint32_t VAR_14 = FUNC_3(VAR_11, &VAR_13);
    if (VAR_14 == 0) {

        return -1;
    }

    *VAR_12 = VAR_11 + VAR_13;

    FUNC_1();





    FUNC_2(VAR_2 | VAR_3 | VAR_7 |
                           VAR_4 | VAR_5 | VAR_6);



    FLASH_EraseInitTypeDef VAR_15;
    VAR_15.TypeErase = VAR_9;
    VAR_15.VoltageRange = VAR_10;



    VAR_15.Sector = VAR_14;
    VAR_15.NbSectors = 1;

    uint32_t VAR_16 = 0;
    if (FUNC_0(&VAR_15, &VAR_16) != VAR_8) {

        return -1;
    }


    for (int VAR_17 = 0; VAR_17 < 64; ++VAR_17) {
        if (((volatile uint32_t*)VAR_11)[VAR_17] != 0xffffffff) {
            return -2;
        }
    }

    return 0;
}
