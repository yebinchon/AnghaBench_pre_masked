
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buffer ;
typedef int WCHAR ;
typedef int UINT ;
typedef int * LPSTR ;
typedef int * LPCWSTR ;
typedef int * LPBYTE ;
typedef int HANDLE ;
typedef int ENCODING ;
typedef scalar_t__ DWORD ;
typedef int BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int *) ;
 int VAR_3 ;
 void* FUNC_3 (int ,int ,int *,scalar_t__,int *,int,int *,int *) ;
 int FUNC_4 (int ,int *,scalar_t__,scalar_t__*,int *) ;
 int FUNC_5 (int *,int *,scalar_t__) ;

__attribute__((used)) static BOOL FUNC_6(HANDLE VAR_4, LPCWSTR VAR_5, DWORD VAR_6, ENCODING VAR_7)
{
    LPBYTE VAR_8 = ((void*)0);
    LPBYTE VAR_9 = ((void*)0);
    DWORD VAR_10 = 0;
    DWORD VAR_11;
    BYTE VAR_12[1024];
    UINT VAR_13 = 0;
    DWORD VAR_14, VAR_15;
    BOOL VAR_16 = VAR_2;
    int VAR_17, VAR_18;
    BYTE VAR_19;

    while(VAR_10 < VAR_6)
    {
        switch(VAR_7)
        {
            case 129:
                VAR_8 = (LPBYTE) &VAR_5[VAR_10];
                VAR_11 = (VAR_6 - VAR_10) * sizeof(WCHAR);
                VAR_10 = VAR_6;
                break;

            case 130:
                VAR_11 = (VAR_6 - VAR_10) * sizeof(WCHAR);
                if (VAR_11 > sizeof(VAR_12))
                    VAR_11 = sizeof(VAR_12);

                FUNC_5(VAR_12, &VAR_5[VAR_10], VAR_11);
                for (VAR_15 = 0; VAR_15 < VAR_11; VAR_15 += 2)
                {
                    VAR_19 = VAR_12[VAR_15+0];
                    VAR_12[VAR_15+0] = VAR_12[VAR_15+1];
                    VAR_12[VAR_15+1] = VAR_19;
                }
                VAR_8 = (LPBYTE) &VAR_12[VAR_10];
                VAR_10 += VAR_11 / sizeof(WCHAR);
                break;

            case 131:
            case 128:
                if (VAR_7 == 131)
                    VAR_13 = VAR_0;
                else if (VAR_7 == 128)
                    VAR_13 = VAR_1;

                VAR_18 = FUNC_3(VAR_13, 0, &VAR_5[VAR_10], VAR_6 - VAR_10, ((void*)0), 0, ((void*)0), ((void*)0));
                if (VAR_18 <= 0)
                {
                    goto done;
                }
                else if (VAR_18 < sizeof(VAR_12))
                {
                    VAR_8 = VAR_12;
                    VAR_17 = sizeof(VAR_12);
                }
                else
                {
                    VAR_9 = (LPBYTE) FUNC_1(FUNC_0(), 0, VAR_18);
                    if (!VAR_9)
                        return VAR_2;
                    VAR_8 = VAR_9;
                    VAR_17 = VAR_18;
                }

                VAR_11 = FUNC_3(VAR_13, 0, &VAR_5[VAR_10], VAR_6 - VAR_10, (LPSTR) VAR_8, VAR_17, ((void*)0), ((void*)0));
                if (!VAR_11)
                    goto done;

                VAR_10 = VAR_6;
                break;

            default:
                goto done;
        }

        if (!FUNC_4(VAR_4, VAR_8, VAR_11, &VAR_14, ((void*)0)))
            goto done;


        if (VAR_9)
        {
            FUNC_2(FUNC_0(), 0, VAR_9);
            VAR_9 = ((void*)0);
        }
    }
    VAR_16 = VAR_3;

done:
    if (VAR_9)
        FUNC_2(FUNC_0(), 0, VAR_9);
    return VAR_16;
}
