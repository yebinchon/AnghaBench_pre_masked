
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (char const*,int ,int ) ;

__attribute__((used)) static unsigned
FUNC_2(const char *VAR_0)
{
    if (VAR_0 == ((void*)0) || VAR_0[0] == 0)
        return 1;
    if (FUNC_0(VAR_0[0])) {
        if (FUNC_1(VAR_0,0,0) == 0)
            return 0;
        else
            return 1;
    }
    switch (VAR_0[0]) {
    case 't':
    case 'T':
        return 1;
    case 'f':
    case 'F':
        return 0;
    case 'o':
    case 'O':
        if (VAR_0[1] == 'f' || VAR_0[1] == 'F')
            return 0;
        else
            return 1;
        break;
    case 'Y':
    case 'y':
        return 1;
    case 'n':
    case 'N':
        return 0;
    }
    return 1;
}
