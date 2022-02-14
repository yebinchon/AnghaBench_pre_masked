
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long uint8_t ;
typedef int layer_state_t ;



layer_state_t FUNC_0(layer_state_t VAR_0, uint8_t VAR_1, uint8_t VAR_2, uint8_t VAR_3) {
    layer_state_t VAR_4 = (1UL << VAR_1) | (1UL << VAR_2);
    layer_state_t VAR_5 = 1UL << VAR_3;
    return (VAR_0 & VAR_4) == VAR_4 ? (VAR_0 | VAR_5) : (VAR_0 & ~VAR_5);
}
