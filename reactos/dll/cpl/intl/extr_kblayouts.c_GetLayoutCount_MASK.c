
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int szPreload ;
typedef int szLayoutID ;
typedef int WCHAR ;
typedef int UINT ;
typedef int PWSTR ;
typedef int LPBYTE ;
typedef int INT ;
typedef int HKEY ;
typedef int DWORD ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int,int *,int*,int *,int*,int *,int *) ;
 scalar_t__ FUNC_2 (int ,char*,int ,int ,int *) ;
 int FUNC_3 (int ,int *,int *,int *,int ,int*) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static INT
FUNC_6(PWSTR VAR_5)
{
    HKEY VAR_6;
    WCHAR VAR_7[3 + 1], VAR_8[VAR_0 + 1], VAR_9[VAR_4];
    DWORD VAR_10 = 0, VAR_11, VAR_12;
    UINT VAR_13 = 0, VAR_14, VAR_15;

    if (FUNC_2(VAR_2, L"Keyboard Layout\\Preload",
        0, VAR_3, &VAR_6) == VAR_1)
    {
        VAR_12 = sizeof(VAR_7);

        while (FUNC_1(VAR_6, VAR_10, VAR_7, &VAR_12, ((void*)0), &VAR_11, ((void*)0), ((void*)0)) == VAR_1)
        {
            VAR_12 = sizeof(VAR_8);
            FUNC_3(VAR_6, VAR_7, ((void*)0), ((void*)0), (LPBYTE)VAR_8, &VAR_12);

            for (VAR_14 = 4, VAR_15 = 0; VAR_14 < FUNC_5(VAR_8)+1; VAR_14++, VAR_15++)
                VAR_9[VAR_15] = VAR_8[VAR_14];

            if (FUNC_4(VAR_9, VAR_5) == 0) VAR_13 += 1;

            VAR_12 = sizeof(VAR_7);
            VAR_10++;
        }

        FUNC_0(VAR_6);
    }

    return VAR_13;
}
