
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PUXINI_FILE ;
typedef char* LPCWSTR ;
typedef int DWORD ;


 char* FUNC_0 (int ,int*) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (char) ;

LPCWSTR FUNC_3(PUXINI_FILE VAR_0, DWORD *VAR_1, LPCWSTR *VAR_2, DWORD *VAR_3)
{
    LPCWSTR VAR_4;
    LPCWSTR VAR_5;
    LPCWSTR VAR_6 = ((void*)0);
    LPCWSTR VAR_7 = ((void*)0);
    DWORD VAR_8 = 0;
    DWORD VAR_9 = 0;
    DWORD VAR_10;
    VAR_4 = FUNC_0(VAR_0, &VAR_10);
    if(!VAR_4)
        return ((void*)0);
    if(VAR_4[0] == '[') {
        FUNC_1(VAR_0, VAR_4);
        return ((void*)0);
    }
    VAR_5 = VAR_4 + VAR_10;

    VAR_6 = VAR_4;
    while(VAR_9 < VAR_10 && *VAR_4 != '=') {
        VAR_4++;
        VAR_9++;
    }
    if(*VAR_4 != '=') return ((void*)0);
    VAR_4++;


    while(FUNC_2(VAR_6[VAR_9-1])) VAR_9--;

    while(FUNC_2(*VAR_4) && VAR_4 < VAR_5) VAR_4++;
    VAR_7 = VAR_4;
    VAR_8 = VAR_10-(VAR_7-VAR_6);

    *VAR_1 = VAR_9;
    *VAR_3 = VAR_8;
    *VAR_2 = VAR_7;

    return VAR_6;
}
