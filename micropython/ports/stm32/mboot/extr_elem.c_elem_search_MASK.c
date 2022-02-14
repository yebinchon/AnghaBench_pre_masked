
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int const* VAR_0 ;
 int const VAR_1 ;

const uint8_t *FUNC_0(const uint8_t *VAR_2, uint8_t VAR_3) {
    while (VAR_2 + 2 + VAR_2[1] <= VAR_0) {
        if (VAR_2[0] == VAR_3) {

            return VAR_2 + 2;
        }
        if (VAR_2[0] == VAR_1) {

            return ((void*)0);
        }
        VAR_2 += 2 + VAR_2[1];
    }
    return ((void*)0);
}
