
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* LPCSTR ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char const) ;

__attribute__((used)) static BOOL FUNC_1(LPCSTR VAR_2)
{
    BOOL VAR_3;

    if (VAR_2[0] != '0' && VAR_2[0] != '1' && VAR_2[0] != '2')
        VAR_3 = VAR_0;
    else if (VAR_2[1] != '.')
        VAR_3 = VAR_0;
    else if (!VAR_2[2])
        VAR_3 = VAR_0;
    else
    {
        const char *VAR_4;
        BOOL VAR_5 = VAR_1;

        for (VAR_4 = VAR_2 + 2, VAR_3 = VAR_1; VAR_3 && *VAR_4; VAR_4++)
        {
            if (VAR_5)
            {
                if (!FUNC_0(*VAR_4))
                    VAR_3 = VAR_0;
                else if (*(VAR_4 + 1) == '.')
                    VAR_5 = VAR_0;
            }
            else
            {
                if (*VAR_4 != '.')
                    VAR_3 = VAR_0;
                else if (!(*(VAR_4 + 1)))
                    VAR_3 = VAR_0;
                else
                    VAR_5 = VAR_1;
            }
        }
    }
    return VAR_3;
}
