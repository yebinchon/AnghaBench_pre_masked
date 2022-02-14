
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WINECRYPT_CERTSTORE ;
typedef int WCHAR ;
typedef int * LPWSTR ;
typedef int HCRYPTPROV ;
typedef int DWORD ;


 int VAR_0 ;
 int * FUNC_0 (int ,int ,int *) ;
 int * FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (int ,int ,void const*,int,int *,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int ,int ,int ) ;
 int FUNC_6 (void const*) ;

__attribute__((used)) static WINECRYPT_CERTSTORE *FUNC_7(HCRYPTPROV VAR_2,
 DWORD VAR_3, const void *VAR_4)
{
    int VAR_5;
    WINECRYPT_CERTSTORE *VAR_6 = ((void*)0);

    FUNC_5("(%ld, %08x, %s)\n", VAR_2, VAR_3,
     FUNC_6(VAR_4));

    if (!VAR_4)
    {
        FUNC_4(VAR_1);
        return ((void*)0);
    }
    VAR_5 = FUNC_3(VAR_0, 0, VAR_4, -1, ((void*)0), 0);
    if (VAR_5)
    {
        LPWSTR VAR_7 = FUNC_1(VAR_5 * sizeof(WCHAR));

        if (VAR_7)
        {
            FUNC_3(VAR_0, 0, VAR_4, -1, VAR_7, VAR_5);
            VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_7);
            FUNC_2(VAR_7);
        }
    }
    return VAR_6;
}
