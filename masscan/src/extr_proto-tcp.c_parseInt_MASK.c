
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;



__attribute__((used)) static uint64_t
FUNC_0(const void *VAR_0, size_t VAR_1)
{
    const char *VAR_2 = (const char *)VAR_0;
    uint64_t VAR_3 = 0;
    size_t VAR_4;

    for (VAR_4=0; VAR_4<VAR_1; VAR_4++) {
        VAR_3 = VAR_3 * 10 + (VAR_2[VAR_4] - '0');
    }
    return VAR_3;
}
