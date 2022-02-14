
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef char* PWSTR ;
typedef int PCWSTR ;
typedef int LPBYTE ;
typedef int INFCONTEXT ;
typedef int * HKEY ;
typedef int HINF ;
typedef int DWORD ;


 int * VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,char*,int **) ;
 scalar_t__ FUNC_2 (int *,char*,int *,int *,int ,int*) ;
 int FUNC_3 (int ,int ,int *,int *) ;
 int FUNC_4 (int *,int,char*,int,int*) ;
 int FUNC_5 (char*,char const*) ;
 int FUNC_6 (char*,int*) ;

__attribute__((used)) static void FUNC_7(HINF VAR_4, PCWSTR VAR_5, PWSTR VAR_6, DWORD VAR_7)
{
    INFCONTEXT VAR_8;
    WCHAR VAR_9[VAR_2 + 2], VAR_10[VAR_2 + 2];
    WCHAR VAR_11[VAR_3 + 2];
    HKEY VAR_12, VAR_13 = 0;
    DWORD VAR_14;

    static const WCHAR VAR_15[] = {'H','K','L','M',0};
    static const WCHAR VAR_16[] = {'H','K','C','U',0};


    FUNC_3(VAR_4, VAR_5, ((void*)0), &VAR_8);
    FUNC_4(&VAR_8, 1, VAR_11, VAR_3 + 2, &VAR_14);
    FUNC_6(VAR_11, &VAR_14);
    FUNC_4(&VAR_8, 2, VAR_9, VAR_2 + 2, &VAR_14);
    FUNC_6(VAR_9, &VAR_14);
    FUNC_4(&VAR_8, 3, VAR_10, VAR_2 + 2, &VAR_14);
    FUNC_6(VAR_10, &VAR_14);

    if (!FUNC_5(VAR_11, VAR_15))
        VAR_12 = VAR_1;
    else if (!FUNC_5(VAR_11, VAR_16))
        VAR_12 = VAR_0;
    else
        VAR_12 = ((void*)0);

    VAR_14 = VAR_7 * sizeof(WCHAR);


    if (FUNC_1(VAR_12, VAR_9, &VAR_13) ||
        FUNC_2(VAR_13, VAR_10, ((void*)0), ((void*)0), (LPBYTE)VAR_6, &VAR_14))
    {
        FUNC_4(&VAR_8, 5, VAR_6, VAR_7, &VAR_14);
        FUNC_6(VAR_6, &VAR_14);
    }

    if (VAR_13) FUNC_0(VAR_13);
}
