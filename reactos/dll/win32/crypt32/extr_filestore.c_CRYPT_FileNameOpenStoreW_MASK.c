
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WINECRYPT_CERTSTORE ;
typedef char WCHAR ;
typedef void const* LPCWSTR ;
typedef scalar_t__ HCRYPTPROV ;
typedef int * HCERTSTORE ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int * FUNC_0 (int,int *,scalar_t__,int) ;
 int * FUNC_1 (int ,int ,int ,int,int *) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (void const*,int,int ,int *,int,int ,int *) ;
 scalar_t__ FUNC_4 (int ,void const*,int,int ,int ,int *,int*,int *,int **,int *,int *) ;
 int FUNC_5 (scalar_t__,int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_6 (scalar_t__,int *) ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,scalar_t__,int,int ) ;
 int FUNC_9 (void const*) ;
 int FUNC_10 (void const*,char const*) ;
 void const* FUNC_11 (void const*,char) ;

WINECRYPT_CERTSTORE *FUNC_12(HCRYPTPROV VAR_23,
 DWORD VAR_24, const void *VAR_25)
{
    HCERTSTORE VAR_26 = 0;
    LPCWSTR VAR_27 = VAR_25;
    DWORD VAR_28, VAR_29;
    HANDLE VAR_30;

    FUNC_8("(%ld, %08x, %s)\n", VAR_23, VAR_24, FUNC_9(VAR_27));

    if (!VAR_27)
    {
        FUNC_7(VAR_14);
        return ((void*)0);
    }
    if ((VAR_24 & VAR_10) &&
     (VAR_24 & VAR_0))
    {
        FUNC_7(VAR_15);
        return ((void*)0);
    }

    VAR_28 = VAR_18;
    if (VAR_24 & VAR_0)
        VAR_28 |= VAR_19;
    if (VAR_24 & VAR_6)
        VAR_29 = VAR_13;
    else if (VAR_24 & VAR_8)
        VAR_29 = VAR_22;
    else
        VAR_29 = VAR_21;
    VAR_30 = FUNC_3(VAR_27, VAR_28, VAR_17, ((void*)0), VAR_29,
     VAR_16, ((void*)0));
    if (VAR_30 != VAR_20)
    {
        HCERTSTORE VAR_31 = ((void*)0);
        DWORD VAR_32 = FUNC_6(VAR_30, ((void*)0)), VAR_33 = 0;


        if (VAR_32)
        {
            DWORD VAR_34;
            BOOL VAR_35;


            FUNC_2(VAR_30);
            VAR_35 = FUNC_4(VAR_5, VAR_27,
             VAR_1 |
             VAR_3 |
             VAR_2,
             VAR_4, 0, ((void*)0), &VAR_34, ((void*)0),
             &VAR_31, ((void*)0), ((void*)0));
            if (VAR_35)
            {
                if (VAR_34 == VAR_2)
                    VAR_33 = VAR_11;
                else
                    VAR_33 = VAR_12;

                VAR_30 = FUNC_3(VAR_27, VAR_28, VAR_17, ((void*)0),
                 VAR_29, VAR_16, ((void*)0));
            }
        }
        else
        {
            static const WCHAR VAR_36[] = { 's','p','c',0 };
            static const WCHAR VAR_37[] = { 'p','7','c',0 };
            LPCWSTR VAR_38 = FUNC_11(VAR_27, '.');

            if (VAR_38)
            {
                VAR_38++;
                if (!FUNC_10(VAR_38, VAR_36) || !FUNC_10(VAR_38, VAR_37))
                    VAR_33 = VAR_11;
            }
            if (!VAR_33)
                VAR_33 = VAR_12;
            VAR_31 = FUNC_1(VAR_9, 0, 0,
             VAR_6, ((void*)0));
        }
        if (VAR_31)
        {
            VAR_26 = FUNC_0(VAR_24, VAR_31, VAR_30, VAR_33);

            if (VAR_23 && !(VAR_24 & VAR_7))
                FUNC_5(VAR_23, 0);
        }
    }
    return VAR_26;
}
