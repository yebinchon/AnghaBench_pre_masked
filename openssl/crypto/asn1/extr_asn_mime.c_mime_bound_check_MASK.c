
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char*,char const*,int) ;

__attribute__((used)) static int FUNC_2(char *VAR_0, int VAR_1, const char *VAR_2, int VAR_3)
{
    if (VAR_1 == -1)
        VAR_1 = FUNC_0(VAR_0);
    if (VAR_3 == -1)
        VAR_3 = FUNC_0(VAR_2);

    if (VAR_3 + 2 > VAR_1)
        return 0;

    if ((FUNC_1(VAR_0, "--", 2) == 0)
        && FUNC_1(VAR_0 + 2, VAR_2, VAR_3) == 0) {
        if (FUNC_1(VAR_0 + VAR_3 + 2, "--", 2) == 0)
            return 2;
        else
            return 1;
    }
    return 0;
}
