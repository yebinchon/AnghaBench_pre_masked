
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int * PCCERT_CONTEXT ;
typedef scalar_t__* LPWSTR ;
typedef scalar_t__* LPCWSTR ;
typedef int HCERTSTORE ;
typedef int DWORD ;


 scalar_t__* FUNC_0 (int) ;
 int FUNC_1 (scalar_t__*) ;
 int FUNC_2 (char*,int ) ;
 int * FUNC_3 (int ,int *,int ,int,int,scalar_t__*) ;
 int VAR_0 ;
 int FUNC_4 (void const*) ;
 int * FUNC_5 (int ,int,int,int *,int *) ;
 int FUNC_6 (void const*) ;
 scalar_t__ FUNC_7 (scalar_t__) ;

__attribute__((used)) static PCCERT_CONTEXT FUNC_8(HCERTSTORE VAR_1, DWORD VAR_2,
 DWORD VAR_3, const void *VAR_4, PCCERT_CONTEXT VAR_5)
{
    PCCERT_CONTEXT VAR_6 = ((void*)0);

    FUNC_2("%s\n", FUNC_4(VAR_4));

    if (VAR_4)
    {
        DWORD VAR_7 = FUNC_6(VAR_4);
        LPWSTR VAR_8 = FUNC_0((VAR_7 + 1) * sizeof(WCHAR));

        if (VAR_8)
        {
            LPCWSTR VAR_9;
            LPWSTR VAR_10;

            for (VAR_9 = VAR_4, VAR_10 = VAR_8; *VAR_9; VAR_9++, VAR_10++)
                *VAR_10 = FUNC_7(*VAR_9);
            *VAR_10 = 0;
           VAR_6 = FUNC_3(VAR_1, VAR_5,
            VAR_0, VAR_2, VAR_3, VAR_8);
           FUNC_1(VAR_8);
        }
    }
    else
        VAR_6 = FUNC_5(VAR_1, VAR_2, VAR_3, ((void*)0), VAR_5);
    return VAR_6;
}
