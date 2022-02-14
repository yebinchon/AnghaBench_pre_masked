
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
const char *
FUNC_0(const char *VAR_0)
{
    while (*VAR_0 != 0)
    {
        if (VAR_0[0] == '\n' && VAR_0[1] == '\r') return VAR_0 + 2;
        else if (VAR_0[0] == '\n') return VAR_0 + 1;
        VAR_0++;
    }
    return VAR_0;
}
