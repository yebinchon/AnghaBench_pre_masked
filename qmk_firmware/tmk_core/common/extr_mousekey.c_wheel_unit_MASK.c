
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static uint8_t FUNC_0(void) {
    uint16_t VAR_6;
    if (VAR_4 & (1 << 0)) {
        VAR_6 = (VAR_0 * VAR_2) / 4;
    } else if (VAR_4 & (1 << 1)) {
        VAR_6 = (VAR_0 * VAR_2) / 2;
    } else if (VAR_4 & (1 << 2)) {
        VAR_6 = (VAR_0 * VAR_2);
    } else if (VAR_5 == 0) {
        VAR_6 = VAR_0;
    } else if (VAR_5 >= VAR_3) {
        VAR_6 = VAR_0 * VAR_2;
    } else {
        VAR_6 = (VAR_0 * VAR_2 * VAR_5) / VAR_3;
    }
    return (VAR_6 > VAR_1 ? VAR_1 : (VAR_6 == 0 ? 1 : VAR_6));
}
