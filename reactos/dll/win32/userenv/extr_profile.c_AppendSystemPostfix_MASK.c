
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int* LPWSTR ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 int FUNC_0 (int*) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 int FUNC_2 (char*,int*,int ) ;
 int VAR_1 ;
 int FUNC_3 () ;
 int VAR_2 ;
 int FUNC_4 (int ) ;
 int VAR_3 ;
 int FUNC_5 (int*) ;
 int FUNC_6 (int*,int*) ;
 scalar_t__ FUNC_7 (int*) ;

BOOL
FUNC_8(LPWSTR VAR_4,
                    DWORD VAR_5)
{
    WCHAR VAR_6[VAR_2];
    LPWSTR VAR_7;
    LPWSTR VAR_8;


    if (!FUNC_2(L"%SystemRoot%",
                                   VAR_6,
                                   FUNC_0(VAR_6)))
    {
        FUNC_1("Error: %lu\n", FUNC_3());
        return VAR_1;
    }

    FUNC_5(VAR_6);


    VAR_6[2] = L'.';
    VAR_7 = &VAR_6[2];
    VAR_8 = VAR_7;
    while (*VAR_8 != (WCHAR)0)
    {
        if (*VAR_8 == L'\\')
            *VAR_8 = L'_';
        VAR_8++;
    }

    if (FUNC_7(VAR_4) + FUNC_7(VAR_7) + 1 >= VAR_5)
    {
        FUNC_1("Error: buffer overflow\n");
        FUNC_4(VAR_0);
        return VAR_1;
    }

    FUNC_6(VAR_4, VAR_7);

    return VAR_3;
}
