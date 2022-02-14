
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WINECRYPT_CERTSTORE ;
typedef int HCRYPTPROV ;
typedef int * HCERTSTORE ;
typedef int DWORD ;
typedef int CRYPT_DATA_BLOB ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int const*,int *) ;
 int FUNC_1 (int *,int ) ;
 int * FUNC_2 (int ,int ,int ,int ,int *) ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int *,...) ;

__attribute__((used)) static WINECRYPT_CERTSTORE *FUNC_5(HCRYPTPROV VAR_4,
 DWORD VAR_5, const void *VAR_6)
{
    HCERTSTORE VAR_7;
    const CRYPT_DATA_BLOB *VAR_8 = VAR_6;

    FUNC_4("(%ld, %08x, %p)\n", &VAR_4, VAR_5, VAR_6);

    if (VAR_5 & VAR_1)
    {
        FUNC_3(VAR_3);
        return ((void*)0);
    }

    VAR_7 = FUNC_2(VAR_2, 0, 0,
     VAR_0, ((void*)0));
    if (VAR_7)
    {
        if (!FUNC_0(VAR_8, VAR_7))
        {
            FUNC_1(VAR_7, 0);
            VAR_7 = ((void*)0);
        }
    }
    FUNC_4("returning %p\n", VAR_7);
    return (WINECRYPT_CERTSTORE*)VAR_7;
}
