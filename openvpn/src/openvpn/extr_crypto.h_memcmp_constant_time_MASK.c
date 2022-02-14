
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



__attribute__((used)) static inline int
FUNC_0(const void *VAR_0, const void *VAR_1, size_t VAR_2)
{
    const uint8_t *VAR_3 = VAR_0;
    const uint8_t *VAR_4 = VAR_1;
    int VAR_5 = 0;
    size_t VAR_6;

    for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++)
    {
        VAR_5 |= *VAR_3++ ^ *VAR_4++;
    }

    return VAR_5;
}
