
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int* LPWSTR ;
typedef int INT ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int*,int*,int ) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (int ,int ,char*,int ) ;
 int VAR_1 ;
 char* VAR_2 ;
 int* FUNC_4 (int*,int) ;
 int FUNC_5 (char*,int*) ;

__attribute__((used)) static INT FUNC_6(LPWSTR VAR_3)
{
    WCHAR *VAR_4, *VAR_5, *VAR_6, VAR_7;

    VAR_4 = VAR_3;
    while (*VAR_4 == L' ')
        VAR_4++;


    if ((VAR_5 = FUNC_4(VAR_4, L'=')) != ((void*)0))
    {
        VAR_6 = VAR_5 + 1;
        while (*VAR_6 == L' ')
            VAR_6++;

        while (VAR_5 > VAR_4 && VAR_5[-1] == L' ')
            VAR_5--;


        VAR_7 = *VAR_5;
        *VAR_5 = L'\0';

        if (!FUNC_4(VAR_4, L' ') && FUNC_1(VAR_4, VAR_6, VAR_1))
            return 0;
        *VAR_5 = VAR_7;
    }

    FUNC_3(FUNC_2(((void*)0)),
                VAR_0,
                VAR_2,
                FUNC_0(VAR_2));
    FUNC_5(VAR_2, VAR_3);
    return 1;
}
