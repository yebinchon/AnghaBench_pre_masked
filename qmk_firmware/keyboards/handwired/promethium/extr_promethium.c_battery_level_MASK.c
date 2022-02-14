
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 float VAR_1 ;
 float VAR_2 ;
 int FUNC_0 (int ) ;

uint8_t FUNC_1(void) {
    float VAR_3 = FUNC_0(VAR_0) * 2 * 3.3 / 1024;
    if (VAR_3 < VAR_2) return 0;
    if (VAR_3 > VAR_1) return 255;
    return (VAR_3 - VAR_2) / (VAR_1 - VAR_2) * 255;
}
