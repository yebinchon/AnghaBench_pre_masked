
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int * PCCERT_CONTEXT ;
typedef scalar_t__* LPWSTR ;
typedef int HCERTSTORE ;
typedef int DWORD ;


 int VAR_0 ;
 scalar_t__* FUNC_0 (int) ;
 int FUNC_1 (scalar_t__*) ;
 int FUNC_2 (int ,int ,void const*,int,scalar_t__*,int) ;
 int FUNC_3 (char*,int ) ;
 int * FUNC_4 (int ,int *,int ,int ,int ,scalar_t__*) ;
 int VAR_1 ;
 int FUNC_5 (void const*) ;
 int * FUNC_6 (int ,int ,int ,int *,int *) ;
 scalar_t__ FUNC_7 (scalar_t__) ;

__attribute__((used)) static PCCERT_CONTEXT FUNC_8(HCERTSTORE VAR_2, DWORD VAR_3,
 DWORD VAR_4, const void *VAR_5, PCCERT_CONTEXT VAR_6)
{
    PCCERT_CONTEXT VAR_7 = ((void*)0);

    FUNC_3("%s\n", FUNC_5(VAR_5));

    if (VAR_5)
    {
        int VAR_8 = FUNC_2(VAR_0, 0, VAR_5, -1, ((void*)0), 0);
        LPWSTR VAR_9 = FUNC_0(VAR_8 * sizeof(WCHAR));

        if (VAR_9)
        {
            LPWSTR VAR_10;

            FUNC_2(VAR_0, 0, VAR_5, -1, VAR_9, VAR_8);
            for (VAR_10 = VAR_9; *VAR_10; VAR_10++)
                *VAR_10 = FUNC_7(*VAR_10);
            VAR_7 = FUNC_4(VAR_2, VAR_6,
             VAR_1, VAR_3, VAR_4, VAR_9);
            FUNC_1(VAR_9);
        }
    }
    else
        VAR_7 = FUNC_6(VAR_2, VAR_3, VAR_4, ((void*)0), VAR_6);
    return VAR_7;
}
