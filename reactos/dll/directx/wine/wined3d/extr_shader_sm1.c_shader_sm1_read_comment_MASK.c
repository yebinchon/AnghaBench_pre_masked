
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int token ;
typedef int UINT ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ const FUNC_1 (char,char,char,char) ;
 int FUNC_2 (char const*,int) ;

__attribute__((used)) static void FUNC_3(const DWORD **VAR_4)
{
    DWORD VAR_5 = **VAR_4;
    const char *VAR_6;
    UINT VAR_7;

    while ((VAR_5 & VAR_2) == VAR_3)
    {
        VAR_7 = (VAR_5 & VAR_0) >> VAR_1;
        VAR_6 = (const char *)++(*VAR_4);
        *VAR_4 += VAR_7;

        if (VAR_7 > 1 && *(const DWORD *)VAR_6 == FUNC_1('T', 'E', 'X', 'T'))
        {
            const char *VAR_8 = VAR_6 + VAR_7 * sizeof(VAR_5);
            const char *VAR_9 = VAR_6 + sizeof(VAR_5);
            const char *VAR_10 = VAR_9;

            FUNC_0("// TEXT\n");
            while (VAR_9 != VAR_8)
            {
                if (*VAR_9 == '\n')
                {
                    UINT VAR_11 = VAR_9 - VAR_10;
                    if (VAR_11 && *(VAR_9 - 1) == '\r') --VAR_11;
                    FUNC_0("// %s\n", FUNC_2(VAR_10, VAR_11));
                    VAR_10 = ++VAR_9;
                }
                else ++VAR_9;
            }
            if (VAR_10 != VAR_9)
                FUNC_0("// %s\n", FUNC_2(VAR_10, VAR_9 - VAR_10));
        }
        else if (VAR_7)
            FUNC_0("// %s\n", FUNC_2(VAR_6, VAR_7 * sizeof(VAR_5)));
        else
            break;

        VAR_5 = **VAR_4;
    }
}
