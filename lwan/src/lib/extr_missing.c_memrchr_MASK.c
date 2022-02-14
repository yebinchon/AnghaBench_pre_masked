
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ptrdiff_t ;


 scalar_t__ FUNC_0 (char const*,int,size_t) ;

void *FUNC_1(const void *VAR_0, int VAR_1, size_t VAR_2)
{
    const char *VAR_3 = (const char *)VAR_0 + VAR_2 + 1;
    const char *VAR_4 = ((void*)0);

    for (const char *VAR_5 = VAR_0; VAR_5 <= VAR_3; VAR_4 = VAR_5++) {
        VAR_5 = (const char *)FUNC_0(VAR_5, VAR_1, (size_t)(ptrdiff_t)(VAR_3 - VAR_5));
        if (!VAR_5)
            break;
    }

    return (void *)VAR_4;
}
