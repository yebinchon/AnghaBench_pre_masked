
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int* LPWSTR ;
typedef int DWORD ;


 int FUNC_0 () ;
 int* FUNC_1 (int ,int ,int) ;
 int* FUNC_2 (int ,int ,int*,int) ;
 int FUNC_3 (int*,int,int*) ;
 int FUNC_4 (int*) ;

__attribute__((used)) static LPWSTR
FUNC_5(LPWSTR *VAR_0,
                 LPWSTR VAR_1)
{
    LPWSTR VAR_2 = ((void*)0);
    LPWSTR VAR_3;
    DWORD VAR_4;
    DWORD VAR_5;

    VAR_4 = FUNC_4(VAR_1) + 1;


    if (!*VAR_0)
    {

        VAR_4++;

        VAR_2 = FUNC_1(FUNC_0(),
                              0,
                              VAR_4 * sizeof(WCHAR));
        if (VAR_2)
        {

            FUNC_3(VAR_2,
                          VAR_4,
                          VAR_1);


            VAR_2[VAR_4 - 1] = L'\0';
        }
    }
    else
    {
        VAR_3 = *VAR_0;
        VAR_5 = 0;


        for (;;)
        {

            if (*VAR_3 == L'\0' && *(VAR_3 + 1) == L'\0')
                break;

            VAR_3++;
            VAR_5++;
        }
        VAR_5++;


        VAR_5++;


        VAR_2 = FUNC_2(FUNC_0(),
                                0,
                                *VAR_0,
                                (VAR_5 + VAR_4) * sizeof(WCHAR));
        if (VAR_2)
        {

            FUNC_3(&VAR_2[VAR_5 - 1],
                          VAR_4,
                          VAR_1);


            VAR_2[VAR_5 + VAR_4 - 1] = L'\0';
        }
    }

    return VAR_2;
}
