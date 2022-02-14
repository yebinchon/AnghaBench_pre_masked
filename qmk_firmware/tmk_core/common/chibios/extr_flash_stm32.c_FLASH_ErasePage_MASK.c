
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int SR; int CR; int AR; } ;
typedef scalar_t__ FLASH_Status ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

FLASH_Status FUNC_3(uint32_t VAR_9) {
    FLASH_Status VAR_10 = VAR_2;

    FUNC_0(FUNC_2(VAR_9));

    VAR_10 = FUNC_1(VAR_0);

    if (VAR_10 == VAR_2) {

        VAR_1->CR |= VAR_3;
        VAR_1->AR = VAR_9;
        VAR_1->CR |= VAR_4;


        VAR_10 = FUNC_1(VAR_0);
        if (VAR_10 != VAR_8) {

            VAR_1->CR &= ~VAR_3;
        }
        VAR_1->SR = (VAR_5 | VAR_6 | VAR_7);
    }

    return VAR_10;
}
