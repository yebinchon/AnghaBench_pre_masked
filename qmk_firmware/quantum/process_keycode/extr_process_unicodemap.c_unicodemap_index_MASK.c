
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((weak)) uint16_t FUNC_1(uint16_t VAR_5) {
    if (VAR_5 >= VAR_2) {

        uint16_t VAR_6 = VAR_5 - VAR_2;

        bool VAR_7 = VAR_4 & VAR_0, VAR_8 = FUNC_0(VAR_3);
        if (VAR_7 ^ VAR_8) {
            VAR_6 >>= 7;
        }

        return VAR_6 & 0x7F;
    } else {

        return VAR_5 - VAR_1;
    }
}
