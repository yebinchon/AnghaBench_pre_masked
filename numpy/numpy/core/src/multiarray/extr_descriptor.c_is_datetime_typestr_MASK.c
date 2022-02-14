
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Py_ssize_t ;


 scalar_t__ FUNC_0 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_1(char *VAR_0, Py_ssize_t VAR_1)
{
    if (VAR_1 < 2) {
        return 0;
    }
    if (VAR_0[1] == '8' && (VAR_0[0] == 'M' || VAR_0[0] == 'm')) {
        return 1;
    }
    if (VAR_1 < 10) {
        return 0;
    }
    if (FUNC_0(VAR_0, "datetime64", 10) == 0) {
        return 1;
    }
    if (VAR_1 < 11) {
        return 0;
    }
    if (FUNC_0(VAR_0, "timedelta64", 11) == 0) {
        return 1;
    }
    return 0;
}
