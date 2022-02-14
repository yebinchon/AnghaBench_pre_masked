
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int provInfo ;
typedef int WINECRYPT_CERTSTORE ;
struct TYPE_4__ {int cbSize; int member_0; } ;
typedef scalar_t__ (* PFN_CERT_DLL_OPEN_STORE_PROV_FUNC ) (int ,int,int ,int,void const*,int *,TYPE_1__*) ;
typedef int LPCSTR ;
typedef int HCRYPTPROV ;
typedef int * HCRYPTOIDFUNCSET ;
typedef int HCRYPTOIDFUNCADDR ;
typedef int * HCERTSTORE ;
typedef int DWORD ;
typedef TYPE_1__ CERT_STORE_PROV_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int,int *,TYPE_1__*) ;
 int FUNC_1 (int *,int ) ;
 int * FUNC_2 (int ,int ,int ,int ,int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,int,int ,int ,void**,int *) ;
 int * FUNC_5 (int ,int ) ;
 int VAR_4 ;
 int FUNC_6 (int ) ;

WINECRYPT_CERTSTORE *FUNC_7(LPCSTR VAR_5,
 DWORD VAR_6, HCRYPTPROV VAR_7, DWORD VAR_8, const void *VAR_9)
{
    static HCRYPTOIDFUNCSET VAR_10 = ((void*)0);
    PFN_CERT_DLL_OPEN_STORE_PROV_FUNC VAR_11;
    HCRYPTOIDFUNCADDR VAR_12;
    WINECRYPT_CERTSTORE *VAR_13 = ((void*)0);

    if (!VAR_10)
        VAR_10 = FUNC_5(VAR_3, 0);
    FUNC_4(VAR_10, VAR_6, VAR_5, 0,
     (void **)&VAR_11, &VAR_12);
    if (VAR_11)
    {
        CERT_STORE_PROV_INFO VAR_14 = { 0 };

        VAR_14.cbSize = sizeof(VAR_14);
        if (VAR_8 & VAR_1)
            VAR_11(VAR_5, VAR_6, VAR_7,
             VAR_8, VAR_9, ((void*)0), &VAR_14);
        else
        {
            HCERTSTORE VAR_15;

            VAR_15 = FUNC_2(VAR_2, 0, 0,
             VAR_0, ((void*)0));
            if (VAR_15)
            {
                if (VAR_11(VAR_5, VAR_6, VAR_7,
                 VAR_8, VAR_9, VAR_15, &VAR_14))
                    VAR_13 = FUNC_0(VAR_8, VAR_15, &VAR_14);
                else
                    FUNC_1(VAR_15, 0);
            }
        }
        FUNC_3(VAR_12, 0);
    }
    else
        FUNC_6(VAR_4);
    return VAR_13;
}
