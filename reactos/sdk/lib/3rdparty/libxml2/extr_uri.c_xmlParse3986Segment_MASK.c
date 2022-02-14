
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static int
FUNC_2(const char **VAR_0, char VAR_1, int VAR_2)
{
    const char *VAR_3;

    VAR_3 = *VAR_0;
    if (!FUNC_0(VAR_3)) {
        if (VAR_2)
     return(0);
 return(1);
    }
    while (FUNC_0(VAR_3) && (*VAR_3 != VAR_1))
        FUNC_1(VAR_3);
    *VAR_0 = VAR_3;
    return (0);
}
