
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static char *
FUNC_0(char *VAR_0, int *VAR_1)
{
    if (VAR_0[0] == '0') {
        switch (VAR_0[1]) {
        case 'x':
            *VAR_1 = 16;
            break;
        case 't': case 'n':
            *VAR_1 = 10;
            break;
        case 'o':
            *VAR_1 = 8;
            break;
        default:
            *VAR_1 = 10;
            return (VAR_0);
        }
        return (VAR_0 + 2);
    }
    *VAR_1 = 10;
    return (VAR_0);
}
