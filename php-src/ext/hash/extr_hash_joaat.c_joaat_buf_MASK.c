
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char uint32_t ;



__attribute__((used)) static uint32_t
FUNC_0(void *VAR_0, size_t VAR_1, uint32_t VAR_2)
{
    size_t VAR_3;
    unsigned char *VAR_4 = (unsigned char *)VAR_0;

    for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
        VAR_2 += VAR_4[VAR_3];
        VAR_2 += (VAR_2 << 10);
        VAR_2 ^= (VAR_2 >> 6);
    }

    VAR_2 += (VAR_2 << 3);
    VAR_2 ^= (VAR_2 >> 11);
    VAR_2 += (VAR_2 << 15);

    return VAR_2;
}
