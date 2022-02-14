
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int DWORD ;


 int FUNC_0 (char*,int *,int) ;
 int FUNC_1 () ;
 int * FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int *) ;
 int * FUNC_4 (int ,int ,int *,int) ;
 int VAR_0 ;

__attribute__((used)) static DWORD
FUNC_5(WCHAR **VAR_1)
{
    DWORD VAR_2;


    *VAR_1 = FUNC_2(FUNC_1(), 0, VAR_0 * sizeof(WCHAR));
    if (*VAR_1 != ((void*)0))
    {
        VAR_2 = FUNC_0(L"SystemDrive", *VAR_1, VAR_0);
        if (VAR_2 > VAR_0)
        {
            WCHAR *VAR_3;
            DWORD VAR_4;

            VAR_3 = FUNC_4(FUNC_1(), 0, *VAR_1, VAR_2 * sizeof(WCHAR));
            if (VAR_3 == ((void*)0))
                goto FailGetSysDrive;

            *VAR_1 = VAR_3;

            VAR_4 = FUNC_0(L"SystemDrive", *VAR_1, VAR_2);
            if (VAR_4 > VAR_2 || VAR_4 == 0)
                goto FailGetSysDrive;
        }
        else if (VAR_2 == 0)
        {
FailGetSysDrive:
            FUNC_3(FUNC_1(), 0, *VAR_1);
            *VAR_1 = ((void*)0);
            return 0;
        }

        return VAR_2;
    }

    return 0;
}
