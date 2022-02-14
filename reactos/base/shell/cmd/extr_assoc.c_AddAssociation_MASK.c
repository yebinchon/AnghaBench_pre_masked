
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TCHAR ;
typedef scalar_t__ LPTSTR ;
typedef int LPBYTE ;
typedef int INT ;
typedef int * HKEY ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,scalar_t__,int ,int *,int ,int ,int *,int **,int *) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int ,int **) ;
 scalar_t__ FUNC_3 (int *,int *,int ,int ,int ,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static INT
FUNC_6(LPTSTR VAR_5, LPTSTR VAR_6)
{
    DWORD VAR_7;
    HKEY VAR_8 = ((void*)0), VAR_9 = ((void*)0);

    VAR_7 = FUNC_2(VAR_1, FUNC_4("SOFTWARE\\Classes"), 0, VAR_2, &VAR_8);

    if (VAR_7 != VAR_0)
        return -1;

    VAR_7 = FUNC_1(VAR_8, VAR_5, 0, ((void*)0), VAR_3, VAR_2, ((void*)0), &VAR_9, ((void*)0));
    FUNC_0(VAR_8);

    if (VAR_7 != VAR_0)
        return -1;

    VAR_7 = FUNC_3(VAR_9, ((void*)0), 0, VAR_4, (LPBYTE)VAR_6, (FUNC_5(VAR_6) + 1) * sizeof(TCHAR));
    FUNC_0(VAR_9);

    if (VAR_7 != VAR_0)
        return -2;

    return 0;
}
