
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef char* LPWSTR ;
typedef int * HKEY ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,char*,unsigned int,char*,unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_1 (char*) ;
 int ** VAR_5 ;
 char** VAR_6 ;

__attribute__((used)) static BOOL FUNC_2(LPWSTR VAR_7, HKEY *VAR_8, LPWSTR *VAR_9)
{
    WCHAR* VAR_10 = ((void*)0);
    unsigned int VAR_11, VAR_12;

    if (VAR_7 == ((void*)0))
        return VAR_1;

    for(VAR_11 = 0; *(VAR_7+VAR_11) != 0; VAR_11++)
    {
        if(*(VAR_7+VAR_11) == '\\')
        {
            VAR_10 = VAR_7+VAR_11;
            break;
        }
    }

    if (VAR_10)
    {
        VAR_12 = VAR_10-VAR_7;
    }
    else
    {
        VAR_12 = FUNC_1(VAR_7);
        VAR_10 = VAR_7+VAR_12;
    }
    *VAR_8 = ((void*)0);

    for (VAR_11 = 0; VAR_11 < VAR_3; VAR_11++) {
        if (FUNC_0(VAR_2, 0, VAR_7, VAR_12, VAR_6[VAR_11], VAR_12) == VAR_0 &&
            VAR_12 == FUNC_1(VAR_6[VAR_11])) {
            *VAR_8 = VAR_5[VAR_11];
            break;
        }
    }

    if (*VAR_8 == ((void*)0))
        return VAR_1;


    if (*VAR_10 != '\0')
        VAR_10++;
    *VAR_9 = VAR_10;
    return VAR_4;
}
