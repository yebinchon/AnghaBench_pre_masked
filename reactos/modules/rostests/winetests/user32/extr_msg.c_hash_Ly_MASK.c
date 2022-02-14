
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned FUNC_0(const char *VAR_0)
{
    unsigned VAR_1 = 0;

    for (; *VAR_0; VAR_0++)
        VAR_1 = VAR_1 * 1664525u + (unsigned char)(*VAR_0) + 1013904223u;

    return VAR_1;
}
