
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WINECRYPT_CERTSTORE ;
typedef char WCHAR ;
typedef int REGSAM ;
typedef scalar_t__ LPWSTR ;
typedef void const* LPCWSTR ;
typedef int LONG ;
typedef int HKEY ;
typedef int HCRYPTPROV ;
typedef int DWORD ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;






 int VAR_5 ;


 int FUNC_0 () ;
 int * FUNC_1 (int ,int,int ) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (scalar_t__) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (char*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,scalar_t__,int ,int *,int ,int ,int *,int *,int*) ;
 int FUNC_7 (int ,scalar_t__,int ,int ,int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*,int ,int,int ) ;
 int FUNC_10 (void const*) ;
 int FUNC_11 (void const*,int ) ;
 int FUNC_12 (void const*) ;
 int VAR_13 ;
 int FUNC_13 (scalar_t__,char const*,void const*,void const*) ;

__attribute__((used)) static WINECRYPT_CERTSTORE *FUNC_14(HCRYPTPROV VAR_14,
 DWORD VAR_15, const void *VAR_16)
{
    static const WCHAR VAR_17[] = { '%','s','\\','%','s',0 };
    LPCWSTR VAR_18 = VAR_16;
    LPWSTR VAR_19;
    WINECRYPT_CERTSTORE *VAR_20 = ((void*)0);
    HKEY VAR_21;
    LPCWSTR VAR_22;

    FUNC_9("(%ld, %08x, %s)\n", VAR_14, VAR_15,
     FUNC_10(VAR_16));

    if (!VAR_16)
    {
        FUNC_8(VAR_7);
        return ((void*)0);
    }

    switch (VAR_15 & VAR_5)
    {
    case 132:
        VAR_21 = VAR_9;
        VAR_22 = VAR_1;

        if (!FUNC_11(VAR_18, VAR_13))
            FUNC_0();
        break;
    case 134:
        VAR_21 = VAR_8;
        VAR_22 = VAR_1;
        break;
    case 135:



        FUNC_4("CERT_SYSTEM_STORE_CURRENT_SERVICE, %s: stub\n",
         FUNC_10(VAR_18));
        return ((void*)0);
    case 129:



        FUNC_4("CERT_SYSTEM_STORE_SERVICES, %s: stub\n",
         FUNC_10(VAR_18));
        return ((void*)0);
    case 128:

        FUNC_4("CERT_SYSTEM_STORE_USERS, %s: stub\n",
         FUNC_10(VAR_18));
        return ((void*)0);
    case 133:
        VAR_21 = VAR_8;
        VAR_22 = VAR_0;
        break;
    case 130:
        VAR_21 = VAR_9;
        VAR_22 = VAR_0;
        break;
    case 131:

        FUNC_4("CERT_SYSTEM_STORE_LOCAL_MACHINE_ENTERPRISE, %s: stub\n",
         FUNC_10(VAR_18));
        return ((void*)0);
    default:
        FUNC_8(VAR_7);
        return ((void*)0);
    }

    VAR_19 = FUNC_2((FUNC_12(VAR_22) + FUNC_12(VAR_18) + 2) *
     sizeof(WCHAR));
    if (VAR_19)
    {
        LONG VAR_23;
        HKEY VAR_24;
        REGSAM VAR_25 = VAR_15 & VAR_4 ? VAR_11 :
            VAR_10;

        FUNC_13(VAR_19, VAR_17, VAR_22, VAR_18);
        if (VAR_15 & VAR_3)
            VAR_23 = FUNC_7(VAR_21, VAR_19, 0, VAR_25, &VAR_24);
        else
        {
            DWORD VAR_26;

            VAR_23 = FUNC_6(VAR_21, VAR_19, 0, ((void*)0), 0, VAR_25, ((void*)0),
                                 &VAR_24, &VAR_26);
            if (!VAR_23 && VAR_15 & VAR_2 &&
                VAR_26 == VAR_12)
            {
                FUNC_5(VAR_24);
                VAR_23 = VAR_6;
            }
        }
        if (!VAR_23)
        {
            VAR_20 = FUNC_1(VAR_14, VAR_15, VAR_24);
            FUNC_5(VAR_24);
        }
        else
            FUNC_8(VAR_23);
        FUNC_3(VAR_19);
    }
    return VAR_20;
}
