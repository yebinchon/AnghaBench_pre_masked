
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HMODULE ;
typedef int HANDLE ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int ) ;

HMODULE FUNC_3(void)
{
    static HANDLE VAR_0;

    if(!VAR_0) {
        const char *VAR_1;
        int VAR_2 = 0;

        while ((VAR_1 = FUNC_2 (VAR_2++))) {
            if((VAR_1[0] == 'm' || VAR_1[0] == 'M')
               && (VAR_1[1] == 's' || VAR_1[1] == 'S')
               && (VAR_1[2] == 'v' || VAR_1[2] == 'V')
               && (VAR_1[3] == 'c' || VAR_1[3] == 'C')
               && (VAR_1[4] == 'r' || VAR_1[4] == 'R')
               && (VAR_1[5] == 't' || VAR_1[5] == 'T' || ('0' <= VAR_1[5] && VAR_1[5] <= '9')))
                break;
        }

       if(VAR_1)
            VAR_0 = FUNC_0(VAR_1);
        if(!VAR_0)
            VAR_0 = FUNC_1(L"msvcrt.dll");
    }

    return VAR_0;
}
