
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;



__attribute__((used)) static uint64_t FUNC_0(const char *VAR_0, size_t VAR_1)
{
    uint64_t VAR_2 = 0;
    size_t VAR_3;

    for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
        if (VAR_0[VAR_3] == ' ' || VAR_0[VAR_3] == '\0')
            continue;
        if (VAR_0[VAR_3] < '0' || '7' < VAR_0[VAR_3])
            break;
        VAR_2 = VAR_2 * 8 + (VAR_0[VAR_3] - '0');
    }

    return VAR_2;
}
