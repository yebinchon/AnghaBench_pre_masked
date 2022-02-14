
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef char* LPCWSTR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char*,char) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static BOOL FUNC_3(LPCWSTR VAR_2, LPCWSTR VAR_3)
{
    static const WCHAR VAR_4[] = { '<','l','o','c','a','l','>',0 };
    BOOL VAR_5 = VAR_0;

    if (!FUNC_1( VAR_3, VAR_4 ) && !FUNC_0( VAR_2, '.' ))
        VAR_5 = VAR_1;
    else if (*VAR_3 == '*')
    {
        if (VAR_3[1] == '.')
        {
            LPCWSTR VAR_6;





            VAR_6 = FUNC_0( VAR_2, '.' );
            if (VAR_6)
            {
                int VAR_7 = FUNC_2( VAR_6 + 1 );

                if (VAR_7 > FUNC_2( VAR_3 + 2 ))
                {
                    LPCWSTR VAR_8;





                    VAR_8 = VAR_6 + VAR_7 + 1 - FUNC_2( VAR_3 + 2 );
                    if (!FUNC_1( VAR_8, VAR_3 + 2 ))
                    {





                        VAR_5 = *(VAR_8 - 1) == '.';
                    }
                }
                else
                    VAR_5 = !FUNC_1( VAR_6 + 1, VAR_3 + 2 );
            }
        }
    }
    else
        VAR_5 = !FUNC_1( VAR_2, VAR_3 );
    return VAR_5;
}
