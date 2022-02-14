
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int* LPWSTR ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*) ;
 char* FUNC_2 () ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int*,int*,size_t) ;
 int VAR_0 ;

void FUNC_5(LPWSTR *VAR_1, LPWSTR VAR_2)
{
    WCHAR *VAR_3 = *VAR_1;
    size_t VAR_4 = 0;
    VAR_2[0] = 0;

    if (!VAR_3[0])
    {
        return;
    }

    if (VAR_3[0] == L'"')
    {
        VAR_3++;
        (*VAR_1)++;
        while(VAR_3[0] != L'"')
        {
            if (!VAR_3[0])
            {
                FUNC_1(VAR_0, L"%s: Unexpected end of file name!\n", FUNC_2());
                FUNC_0(1);
            }
            VAR_3++;
            VAR_4++;
        }
    }
    else
    {
        while(VAR_3[0] && !FUNC_3(VAR_3[0]))
        {
            VAR_3++;
            VAR_4++;
        }
    }
    FUNC_4(VAR_2, *VAR_1, VAR_4 * sizeof(WCHAR));

    if (VAR_2[VAR_4 - 1] == L'\\')
    {
        VAR_2[VAR_4 - 1] = L'\0';
    }
    else
    {
        VAR_2[VAR_4] = L'\0';
    }

    if (VAR_3[0])
    {
        VAR_3++;
        VAR_4++;
    }
    while(VAR_3[0] && FUNC_3(VAR_3[0]))
    {
        VAR_3++;
        VAR_4++;
    }
    (*VAR_1) += VAR_4;
}
