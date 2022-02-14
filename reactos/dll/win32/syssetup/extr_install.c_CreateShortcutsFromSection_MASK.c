
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int LPWSTR ;
typedef int LPCWSTR ;
typedef int INT ;
typedef int INFCONTEXT ;
typedef int HINF ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int ,int*,int*,int*,int,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,int *,int *) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int,int*) ;
 int FUNC_6 (int *,int,int*,int ,int *) ;
 int VAR_2 ;
 int FUNC_7 (int*,char*) ;

__attribute__((used)) static BOOL FUNC_8(HINF VAR_3, LPWSTR VAR_4, LPCWSTR VAR_5)
{
    INFCONTEXT VAR_6;
    DWORD VAR_7;
    INT VAR_8;
    WCHAR VAR_9[VAR_1];
    WCHAR VAR_10[VAR_1];
    WCHAR VAR_11[VAR_1];
    WCHAR VAR_12[VAR_1];

    if (!FUNC_2(VAR_3, VAR_4, ((void*)0), &VAR_6))
        return VAR_0;

    do
    {
        VAR_7 = FUNC_4(&VAR_6);
        if (VAR_7 < 3)
            continue;

        if (!FUNC_6(&VAR_6, 1, VAR_9, FUNC_0(VAR_9), ((void*)0)))
            continue;

        if (!FUNC_6(&VAR_6, 2, VAR_10, FUNC_0(VAR_10), ((void*)0)))
            continue;

        if (!FUNC_6(&VAR_6, 3, VAR_11, FUNC_0(VAR_11), ((void*)0)))
            continue;

        if (VAR_7 < 4 || !FUNC_5(&VAR_6, 4, &VAR_8))
            VAR_8 = -1;

        if (VAR_7 < 5 || !FUNC_6(&VAR_6, 5, VAR_12, FUNC_0(VAR_12), ((void*)0)))
            VAR_12[0] = L'\0';

        FUNC_7(VAR_10, L".lnk");

        FUNC_1(VAR_5, VAR_10, VAR_9, VAR_11, VAR_8, VAR_12);

    } while (FUNC_3(&VAR_6, &VAR_6));

    return VAR_2;
}
