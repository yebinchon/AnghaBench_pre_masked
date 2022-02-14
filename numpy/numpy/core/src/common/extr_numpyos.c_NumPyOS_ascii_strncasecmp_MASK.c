
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const) ;

__attribute__((used)) static int
FUNC_1(const char* VAR_0, const char* VAR_1, size_t VAR_2)
{
    while (VAR_2 > 0 && *VAR_0 != '\0' && *VAR_1 != '\0') {
        int VAR_3 = FUNC_0(*VAR_0) - FUNC_0(*VAR_1);
        if (VAR_3 != 0) {
            return VAR_3;
        }
        ++VAR_0;
        ++VAR_1;
        --VAR_2;
    }
    if (VAR_2 > 0) {
        return *VAR_0 - *VAR_1;
    }
    return 0;
}
