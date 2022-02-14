
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__ ((section(".after_vectors")))
void FUNC_0(unsigned int VAR_0, unsigned int VAR_1, unsigned int VAR_2) {
    unsigned int *VAR_3 = (unsigned int*) VAR_1;
    unsigned int *VAR_4 = (unsigned int*) VAR_0;
    unsigned int VAR_5;
    for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5 = VAR_5 + 4)
        *VAR_3++ = *VAR_4++;
}
