
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* LPWSTR ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (char*,char) ;
 char* FUNC_2 (char*) ;

__attribute__((used)) static LPWSTR FUNC_3(LPWSTR VAR_0, int VAR_1)
{
    LPWSTR VAR_2, VAR_3;
    int VAR_4 = 1;

    if (VAR_1 == 0)
        return FUNC_2(VAR_0);

    VAR_2 = VAR_0;
    while ((VAR_3 = FUNC_1(VAR_2, ',')) && VAR_4 < VAR_1)
    {
        VAR_2 = VAR_3 + 1;
        while (*VAR_2 == ' ')
            VAR_2++;

        VAR_4++;
    }

    VAR_3 = FUNC_1(VAR_2, ',');
    if (!VAR_3)
        VAR_3 = VAR_2 + FUNC_0(VAR_2);

    *VAR_3 = '\0';
    return FUNC_2(VAR_2);
}
