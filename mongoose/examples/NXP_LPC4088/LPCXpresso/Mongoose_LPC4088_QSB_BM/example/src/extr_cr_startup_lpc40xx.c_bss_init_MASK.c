
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__ ((section(".after_vectors")))
void FUNC_0(unsigned int VAR_0, unsigned int VAR_1) {
    unsigned int *VAR_2 = (unsigned int*) VAR_0;
    unsigned int VAR_3;
    for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3 = VAR_3 + 4)
        *VAR_2++ = 0;
}
