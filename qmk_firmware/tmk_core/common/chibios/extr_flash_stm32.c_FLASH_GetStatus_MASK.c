
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int SR; } ;
typedef int FLASH_Status ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

FLASH_Status FUNC_0(void) {
    if ((VAR_0->SR & VAR_7) == VAR_7) return VAR_1;

    if ((VAR_0->SR & VAR_8) != 0) return VAR_4;

    if ((VAR_0->SR & VAR_9) != 0) return VAR_5;

    if ((VAR_0->SR & VAR_6) != 0) return VAR_3;

    return VAR_2;
}
