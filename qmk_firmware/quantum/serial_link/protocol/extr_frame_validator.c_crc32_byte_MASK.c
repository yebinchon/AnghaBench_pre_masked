
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef int uint32_t ;


 int* VAR_0 ;

__attribute__((used)) static uint32_t FUNC_0(uint8_t* VAR_1, uint32_t VAR_2) {
    uint32_t VAR_3 = 0xffffffff;
    while (VAR_2-- != 0) VAR_3 = VAR_0[((uint8_t)VAR_3 ^ *(VAR_1++))] ^ (VAR_3 >> 8);

    return (VAR_3 ^ 0xffffffff);
}
