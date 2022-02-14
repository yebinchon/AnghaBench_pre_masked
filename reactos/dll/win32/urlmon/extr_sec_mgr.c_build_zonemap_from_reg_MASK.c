
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int* LPDWORD ;
typedef int HKEY ;
typedef int DWORD ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int,char*,int*,int *,int *,int *,int *) ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (char*) ;
 int* FUNC_5 (int) ;
 int FUNC_6 (int*) ;
 int* FUNC_7 (int*,int) ;
 int VAR_1 ;

__attribute__((used)) static LPDWORD FUNC_8(void)
{
    WCHAR VAR_2[32];
    HKEY VAR_3;
    LPDWORD VAR_4 = ((void*)0);
    DWORD VAR_5 = 6;
    DWORD VAR_6 = 0;
    DWORD VAR_7;
    DWORD VAR_8;


    VAR_7 = FUNC_3(VAR_0, VAR_1, &VAR_3);
    if (VAR_7)
        return ((void*)0);

    VAR_4 = FUNC_5(VAR_5 * sizeof(DWORD));
    if (!VAR_4)
        goto cleanup;

    while (!VAR_7) {
        VAR_2[0] = '\0';
        VAR_8 = FUNC_0(VAR_2);
        VAR_7 = FUNC_2(VAR_3, VAR_6, VAR_2, &VAR_8, ((void*)0), ((void*)0), ((void*)0), ((void*)0));

        if (!VAR_7) {
            VAR_6++;
            if (VAR_6 == VAR_5) {
                LPDWORD VAR_9;

                VAR_5 *= 2;
                VAR_9 = FUNC_7(VAR_4, VAR_5 * sizeof(DWORD));
                if (!VAR_9)
                    goto cleanup;

                VAR_4 = VAR_9;
            }
            VAR_4[VAR_6] = FUNC_4(VAR_2);
        }
    }
    if (VAR_6) {
        FUNC_1(VAR_3);
        VAR_4[0] = VAR_6;
        return VAR_4;
    }

cleanup:

    FUNC_1(VAR_3);
    FUNC_6(VAR_4);
    return ((void*)0);
}
