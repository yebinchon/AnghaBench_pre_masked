
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int _tmp_string_t ;


 scalar_t__ FUNC_0 (int *,char const) ;

__attribute__((used)) static int
FUNC_1(_tmp_string_t *VAR_0, char const *VAR_1)
{
    for (; *VAR_1 != '\0'; VAR_1++) {
        if (FUNC_0(VAR_0, *VAR_1) < 0) {
            return -1;
        }
    }
    return 0;
}
