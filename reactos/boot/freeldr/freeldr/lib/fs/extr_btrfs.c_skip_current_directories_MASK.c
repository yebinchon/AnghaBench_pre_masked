
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline const char *FUNC_0(const char *VAR_0)
{
    while (1)
    {
        if (VAR_0[0] == '/' || VAR_0[0] == '\\')
            ++VAR_0;
        else if (VAR_0[0] == '.' && (VAR_0[1] == '/' || VAR_0[1] == '\\'))
            VAR_0 += 2;
        else
            break;
    }

    return VAR_0;
}
