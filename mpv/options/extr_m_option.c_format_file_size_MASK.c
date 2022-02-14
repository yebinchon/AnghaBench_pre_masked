
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;


 char* FUNC_0 (int *,char*,double) ;

char *FUNC_1(int64_t VAR_0)
{
    double VAR_1 = VAR_0;
    if (VAR_0 < 1024)
        return FUNC_0(((void*)0), "%.0f B", VAR_1);

    if (VAR_0 < (1024 * 1024))
        return FUNC_0(((void*)0), "%.3f KiB", VAR_1 / (1024.0));

    if (VAR_0 < (1024 * 1024 * 1024))
        return FUNC_0(((void*)0), "%.3f MiB", VAR_1 / (1024.0 * 1024.0));

    if (VAR_0 < (1024LL * 1024LL * 1024LL * 1024LL))
        return FUNC_0(((void*)0), "%.3f GiB", VAR_1 / (1024.0 * 1024.0 * 1024.0));

    return FUNC_0(((void*)0), "%.3f TiB", VAR_1 / (1024.0 * 1024.0 * 1024.0 * 1024.0));
}
