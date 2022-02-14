
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ kernel_uint_t ;



__attribute__((used)) static inline kernel_uint_t FUNC_0(kernel_uint_t *VAR_0, kernel_uint_t *VAR_1) {
    kernel_uint_t VAR_2 = 0;

    if(*VAR_0 > *VAR_1) {
        VAR_2 += *VAR_1;
        *VAR_0 -= *VAR_1;
        *VAR_1 = 0;
    }
    else {
        VAR_2 += *VAR_0;
        *VAR_1 -= *VAR_0;
        *VAR_0 = 0;
    }

    return VAR_2;
}
