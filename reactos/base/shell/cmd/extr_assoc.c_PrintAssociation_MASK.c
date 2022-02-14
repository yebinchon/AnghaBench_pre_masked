
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TCHAR ;
typedef int * LPTSTR ;
typedef int * LPBYTE ;
typedef int INT ;
typedef int * HKEY ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (int *,int *,int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int *,int ,int ,int **) ;
 scalar_t__ FUNC_3 (int *,int *,int *,int *,int *,scalar_t__*) ;
 int FUNC_4 (char*) ;
 int * FUNC_5 (char*) ;
 int * FUNC_6 (scalar_t__) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static INT
FUNC_8(LPTSTR VAR_4)
{
    DWORD VAR_5;
    HKEY VAR_6 = ((void*)0), VAR_7 = ((void*)0);

    DWORD VAR_8 = 0;
    LPTSTR VAR_9 = ((void*)0);

    VAR_5 = FUNC_2(VAR_2, FUNC_5("SOFTWARE\\Classes"), 0, VAR_3, &VAR_6);

    if (VAR_5 != VAR_1)
        return -1;

    VAR_5 = FUNC_2(VAR_6, VAR_4, 0, VAR_3, &VAR_7);
    FUNC_1(VAR_6);

    if (VAR_5 != VAR_1)
        return 0;


    VAR_5 = FUNC_3(VAR_7, ((void*)0), ((void*)0), ((void*)0), ((void*)0), &VAR_8);

    if (VAR_5 == VAR_0)
    {
        FUNC_1(VAR_7);
        return 0;
    }

    if (VAR_5 != VAR_1)
    {
        FUNC_1(VAR_7);
        return -2;
    }

    VAR_9 = FUNC_6(VAR_8 * sizeof(TCHAR));
    if (!VAR_9)
    {
        FUNC_4("Cannot allocate memory for fileType!\n");
        FUNC_1(VAR_7);
        return -2;
    }


    VAR_5 = FUNC_3(VAR_7, ((void*)0), ((void*)0), ((void*)0), (LPBYTE)VAR_9, &VAR_8);
    FUNC_1(VAR_7);

    if (VAR_5 != VAR_1)
    {
        FUNC_7(VAR_9);
        return -2;
    }

    if (VAR_8 != 0)
    {
        FUNC_0(FUNC_5("%s=%s\n"), VAR_4, VAR_9);
    }

    FUNC_7(VAR_9);
    return 1;
}
