
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(const char *VAR_0)
{





    switch (*VAR_0) {

    case '\0': case '/':
        return 0;





    case 'g':
        if (VAR_0[1] != 'i')
            break;
        if (VAR_0[2] != 't')
            break;
        VAR_0 += 2;

    case '.':
        if (VAR_0[1] == '\0' || VAR_0[1] == '/')
            return 0;
    }
    return 1;
}
