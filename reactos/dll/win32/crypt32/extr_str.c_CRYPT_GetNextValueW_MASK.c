
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct X500TokenW {char* start; char* end; } ;
typedef int WCHAR ;
typedef char* LPCWSTR ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,...) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char) ;

__attribute__((used)) static BOOL FUNC_4(LPCWSTR VAR_4, DWORD VAR_5, LPCWSTR VAR_6,
 WCHAR *VAR_7, struct X500TokenW *VAR_8, LPCWSTR *VAR_9)
{
    BOOL VAR_10 = VAR_3;

    FUNC_1("(%s, %s, %p, %p)\n", FUNC_2(VAR_4), FUNC_2(VAR_6), VAR_8,
     VAR_9);

    *VAR_7 = 0;
    while (*VAR_4 && FUNC_3(*VAR_4))
        VAR_4++;
    if (*VAR_4)
    {
        VAR_8->start = VAR_4;
        if (!(VAR_5 & VAR_0) && *VAR_4 == '"')
        {
            VAR_8->end = ((void*)0);
            VAR_4++;
            while (!VAR_8->end && VAR_10)
            {
                while (*VAR_4 && *VAR_4 != '"')
                    VAR_4++;
                if (*VAR_4 == '"')
                {
                    if (*(VAR_4 + 1) != '"')
                        VAR_8->end = VAR_4 + 1;
                    else
                        VAR_4 += 2;
                }
                else
                {
                    FUNC_1("unterminated quote at %s\n", FUNC_2(VAR_4));
                    if (VAR_9)
                        *VAR_9 = VAR_4;
                    FUNC_0(VAR_1);
                    VAR_10 = VAR_2;
                }
            }
        }
        else
        {
            WCHAR VAR_11[256] = { 0 };

            while (*VAR_6)
                VAR_11[*VAR_6++] = 1;
            while (*VAR_4 && (*VAR_4 >= 0xff || !VAR_11[*VAR_4]))
                VAR_4++;
            VAR_8->end = VAR_4;
            if (VAR_11[*VAR_4]) *VAR_7 = *VAR_4;
        }
    }
    else
    {
        FUNC_1("missing value at %s\n", FUNC_2(VAR_4));
        if (VAR_9)
            *VAR_9 = VAR_4;
        FUNC_0(VAR_1);
        VAR_10 = VAR_2;
    }
    return VAR_10;
}
