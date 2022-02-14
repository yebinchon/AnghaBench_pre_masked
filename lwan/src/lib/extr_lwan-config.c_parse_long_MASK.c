
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 long FUNC_0 (char const*,char**,int ) ;

long FUNC_1(const char *VAR_1, long VAR_2)
{
    char *VAR_3;
    long VAR_4;

    VAR_0 = 0;
    VAR_4 = FUNC_0(VAR_1, &VAR_3, 0);

    if (VAR_0 != 0)
        return VAR_2;

    if (*VAR_3 != '\0' || VAR_1 == VAR_3)
        return VAR_2;

    return VAR_4;
}
