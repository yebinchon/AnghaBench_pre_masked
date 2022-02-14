
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ WCHAR ;
typedef scalar_t__* LPCWSTR ;
typedef int DWORD ;
typedef scalar_t__* BSTR ;


 scalar_t__* FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (scalar_t__ const) ;
 scalar_t__ FUNC_2 (scalar_t__ const) ;
 int FUNC_3 (scalar_t__ const*) ;

__attribute__((used)) static BSTR FUNC_4(LPCWSTR VAR_0) {
    const WCHAR *VAR_1, *VAR_2, *VAR_3;
    WCHAR *VAR_4;
    DWORD VAR_5;
    BSTR VAR_6;

    VAR_1 = VAR_0;

    while(*VAR_1 && (FUNC_1(*VAR_1) || FUNC_2(*VAR_1))) ++VAR_1;


    if(!*VAR_1)
        return FUNC_0(((void*)0), 0);

    VAR_2 = VAR_1 + FUNC_3(VAR_1);
    while(--VAR_2 > VAR_1 && (FUNC_1(*VAR_2) || FUNC_2(*VAR_2)));

    VAR_5 = ++VAR_2 - VAR_1;
    for(VAR_3 = VAR_1; VAR_3 < VAR_2; VAR_3++) {
        if(FUNC_1(*VAR_3))
            VAR_5--;
    }

    VAR_6 = FUNC_0(((void*)0), VAR_5);
    if(!VAR_6)
        return ((void*)0);

    for(VAR_3 = VAR_1, VAR_4=VAR_6; VAR_3 < VAR_2; VAR_3++) {
        if(!FUNC_1(*VAR_3))
            *VAR_4++ = *VAR_3;
    }

    return VAR_6;
}
