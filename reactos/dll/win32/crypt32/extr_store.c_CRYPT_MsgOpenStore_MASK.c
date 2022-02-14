
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int provInfo ;
typedef int count ;
typedef int WINECRYPT_CERTSTORE ;
struct TYPE_3__ {int cbSize; int hStoreProv; int rgpvStoreProvFunc; int cStoreProvFunc; int member_0; } ;
typedef scalar_t__* LPBYTE ;
typedef scalar_t__ HCRYPTPROV ;
typedef int HCRYPTMSG ;
typedef scalar_t__ DWORD ;
typedef TYPE_1__ CERT_STORE_PROV_INFO ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * FUNC_1 (scalar_t__,int *,TYPE_1__*) ;
 scalar_t__ FUNC_2 (int *,int ,scalar_t__*,scalar_t__,int ,int *) ;
 scalar_t__ FUNC_3 (int *,int ,scalar_t__*,scalar_t__,int ,int *) ;
 int FUNC_4 (int *,int ) ;
 int * FUNC_5 (int ,int ,int ,int ,int *) ;
 scalar_t__* FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__*) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ,int ,scalar_t__,scalar_t__*,scalar_t__*) ;
 int FUNC_10 (scalar_t__,int ) ;
 int FUNC_11 (char*,int *,...) ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static WINECRYPT_CERTSTORE *FUNC_12(HCRYPTPROV VAR_10,
 DWORD VAR_11, const void *VAR_12)
{
    WINECRYPT_CERTSTORE *VAR_13 = ((void*)0);
    HCRYPTMSG VAR_14 = (HCRYPTMSG)VAR_12;
    WINECRYPT_CERTSTORE *VAR_15;

    FUNC_11("(%ld, %08x, %p)\n", VAR_10, VAR_11, VAR_12);

    VAR_15 = FUNC_5(VAR_3, 0, 0,
     VAR_1, ((void*)0));
    if (VAR_15)
    {
        BOOL VAR_16;
        DWORD VAR_17, VAR_18, VAR_19;

        VAR_17 = sizeof(VAR_18);
        VAR_16 = FUNC_9(VAR_14, VAR_4, 0, &VAR_18, &VAR_17);
        for (VAR_19 = 0; VAR_16 && VAR_19 < VAR_18; VAR_19++)
        {
            VAR_17 = 0;
            VAR_16 = FUNC_9(VAR_14, VAR_5, VAR_19, ((void*)0), &VAR_17);
            if (VAR_16)
            {
                LPBYTE VAR_20 = FUNC_6(VAR_17);

                if (VAR_20)
                {
                    VAR_16 = FUNC_9(VAR_14, VAR_5, VAR_19, VAR_20, &VAR_17);
                    if (VAR_16)
                        VAR_16 = FUNC_3(VAR_15,
                         VAR_8, VAR_20, VAR_17, VAR_0,
                         ((void*)0));
                    FUNC_7(VAR_20);
                }
            }
        }
        VAR_17 = sizeof(VAR_18);
        VAR_16 = FUNC_9(VAR_14, VAR_6, 0, &VAR_18, &VAR_17);
        for (VAR_19 = 0; VAR_16 && VAR_19 < VAR_18; VAR_19++)
        {
            VAR_17 = 0;
            VAR_16 = FUNC_9(VAR_14, VAR_7, VAR_19, ((void*)0), &VAR_17);
            if (VAR_16)
            {
                LPBYTE VAR_21 = FUNC_6(VAR_17);

                if (VAR_21)
                {
                    VAR_16 = FUNC_9(VAR_14, VAR_7, VAR_19, VAR_21, &VAR_17);
                    if (VAR_16)
                        VAR_16 = FUNC_2(VAR_15,
                         VAR_8, VAR_21, VAR_17, VAR_0,
                         ((void*)0));
                    FUNC_7(VAR_21);
                }
            }
        }
        if (VAR_16)
        {
            CERT_STORE_PROV_INFO VAR_22 = { 0 };

            VAR_22.cbSize = sizeof(VAR_22);
            VAR_22.cStoreProvFunc = FUNC_0(VAR_9);
            VAR_22.rgpvStoreProvFunc = VAR_9;
            VAR_22.hStoreProv = FUNC_8(VAR_14);
            VAR_13 = FUNC_1(VAR_11, VAR_15, &VAR_22);

            if (VAR_10 && !(VAR_11 & VAR_2))
                FUNC_10(VAR_10, 0);
        }
        else
            FUNC_4(VAR_15, 0);
    }
    FUNC_11("returning %p\n", VAR_13);
    return VAR_13;
}
