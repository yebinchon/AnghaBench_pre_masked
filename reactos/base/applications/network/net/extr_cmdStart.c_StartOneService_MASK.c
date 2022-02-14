
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int * SC_HANDLE ;
typedef int LPVOID ;
typedef int * LPCWSTR ;
typedef int INT ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 () ;
 int ** FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,int ,int ) ;
 int * FUNC_6 (int *,int ,int ) ;
 int * FUNC_7 (int *,int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_8 (int *,scalar_t__,int **) ;
 int VAR_4 ;

__attribute__((used)) static
INT
FUNC_9(INT VAR_5, WCHAR **VAR_6)
{
    SC_HANDLE VAR_7 = ((void*)0);
    SC_HANDLE VAR_8 = ((void*)0);
    LPCWSTR *VAR_9 = ((void*)0);
    DWORD VAR_10 = VAR_0;
    INT VAR_11 = 0;
    INT VAR_12;

    VAR_7 = FUNC_6(((void*)0),
                              VAR_2,
                              VAR_1);
    if (VAR_7 == ((void*)0))
    {
        VAR_10 = FUNC_2();
        VAR_11 = 1;
        goto done;
    }

    VAR_8 = FUNC_7(VAR_7,
                            VAR_6[2],
                            VAR_3);
    if (VAR_8 == ((void*)0))
    {
        VAR_10 = FUNC_2();
        VAR_11 = 1;
        goto done;
    }

    VAR_9 = FUNC_4(FUNC_3(),
                             0,
                             (VAR_5 - 2) * sizeof(LPCWSTR));
    if (VAR_9 == ((void*)0))
    {
        VAR_10 = FUNC_2();
        VAR_11 = 1;
        goto done;
    }

    for (VAR_12 = 2; VAR_12 < VAR_5; VAR_12++)
    {
        VAR_9[VAR_12 - 2] = VAR_6[VAR_12];
    }

    if (!FUNC_8(VAR_8,
                       (DWORD)VAR_5 - 2,
                       VAR_9))
    {
        VAR_10 = FUNC_2();
        VAR_11 = 1;
    }

done:
    if (VAR_9 != ((void*)0))
        FUNC_5(FUNC_3(), 0, (LPVOID)VAR_9);

    if (VAR_8 != ((void*)0))
        FUNC_0(VAR_8);

    if (VAR_7 != ((void*)0))
        FUNC_0(VAR_7);

    if (VAR_10 != VAR_0)
    {

        FUNC_1(VAR_4, L"Error: %lu\n", VAR_10);
    }

    return VAR_11;
}
