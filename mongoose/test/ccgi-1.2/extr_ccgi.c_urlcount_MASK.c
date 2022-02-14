
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (char const*,char const) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_0, const char *VAR_1) {
    int VAR_2;
    for (VAR_2 = 0; *VAR_0 != 0; VAR_0++) {
        if (FUNC_0(*VAR_0) || *VAR_0 == ' ' ||
            (VAR_1 != 0 && FUNC_1(VAR_1, *VAR_0) != 0))
        {
            VAR_2++;
        }
        else {
            VAR_2 += 3;
        }
    }
    return VAR_2;
}
