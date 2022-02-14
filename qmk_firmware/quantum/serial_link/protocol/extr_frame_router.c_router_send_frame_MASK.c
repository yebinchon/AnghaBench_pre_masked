
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef size_t uint16_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int*,size_t) ;

void FUNC_1(uint8_t VAR_3, uint8_t* VAR_4, uint16_t VAR_5) {
    if (VAR_3 == 0) {
        if (!VAR_2) {
            VAR_4[VAR_5] = 1;
            FUNC_0(VAR_1, VAR_4, VAR_5 + 1);
        }
    } else {
        if (VAR_2) {
            VAR_4[VAR_5] = VAR_3;
            FUNC_0(VAR_0, VAR_4, VAR_5 + 1);
        }
    }
}
