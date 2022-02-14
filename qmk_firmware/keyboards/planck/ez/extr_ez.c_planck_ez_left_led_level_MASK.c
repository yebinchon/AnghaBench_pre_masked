
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int,int ) ;

void FUNC_4(uint8_t VAR_2) {
    VAR_1 = (uint32_t)(FUNC_1(0xFFFF * (uint32_t) VAR_2 / 255));
    if (VAR_2 == 0) {

        FUNC_2(&VAR_0, 3);
    } else {

        FUNC_3(&VAR_0, 3, FUNC_0(&VAR_0,0xFFFF,VAR_1));
    }
}
