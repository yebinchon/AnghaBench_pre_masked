
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* LPSTR ;
typedef char* LPCSTR ;
typedef int DWORD ;


 int FUNC_0 () ;
 char* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,char*) ;
 int FUNC_3 (char*,char const*,int) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static LPSTR FUNC_5(LPCSTR VAR_0, DWORD *VAR_1)
{
    DWORD VAR_2;
    const char *VAR_3 = VAR_0;
    const char *VAR_4 = VAR_0 + FUNC_4(VAR_0) - 1;
    LPSTR VAR_5, VAR_6;


    while (VAR_3 < VAR_4 && (*VAR_3 == ' ' || *VAR_3 == '\t' || *VAR_3 == ':'))
        VAR_3++;


    while (VAR_4 > VAR_3 && (*VAR_4 == ' ' || *VAR_4 == '\t' || *VAR_4 == ':'))
        VAR_4--;

    if (VAR_3 == VAR_4)
        return ((void*)0);

    VAR_2 = VAR_4 - VAR_3 + 3;
    VAR_5 = FUNC_1(FUNC_0(), 0, VAR_2);
    FUNC_3(VAR_5, VAR_3, VAR_2 - 1);
    VAR_5[VAR_2 - 1] = '\0';


    if (!VAR_5[0])
    {
        FUNC_2(FUNC_0(), 0, VAR_5);
        return ((void*)0);
    }

    *VAR_1 = 1;


    VAR_6 = VAR_5;
    while (*VAR_6)
    {
        if (*VAR_6 == ':')
        {
            *VAR_6 = '\0';
            (*VAR_1)++;
        }

        VAR_6++;
    }

    return VAR_5;
}
