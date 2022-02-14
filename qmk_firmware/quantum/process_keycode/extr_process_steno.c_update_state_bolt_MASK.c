
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;


 size_t FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__* VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__* VAR_2 ;

__attribute__((used)) static bool FUNC_2(uint8_t VAR_3, bool VAR_4) {
    uint8_t VAR_5 = FUNC_1(VAR_0 + VAR_3);
    if (VAR_4) {
        VAR_2[FUNC_0(VAR_5)] |= VAR_5;
        VAR_1[FUNC_0(VAR_5)] |= VAR_5;
    } else {
        VAR_2[FUNC_0(VAR_5)] &= ~VAR_5;
    }
    return 0;
}
