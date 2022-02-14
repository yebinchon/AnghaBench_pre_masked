
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WINECRYPT_CERTSTORE ;
typedef scalar_t__ HCRYPTPROV ;
typedef scalar_t__ HCERTSTORE ;
typedef int HANDLE ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_0 (int,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int ,int *) ;
 int FUNC_3 (scalar_t__,int ) ;
 scalar_t__ FUNC_4 (int ,int ,int ,int *,int,int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,int *,...) ;
 int VAR_11 ;

WINECRYPT_CERTSTORE *FUNC_8(HCRYPTPROV VAR_12, DWORD VAR_13,
 const void *VAR_14)
{
    WINECRYPT_CERTSTORE *VAR_15 = ((void*)0);
    HANDLE VAR_16 = (HANDLE)VAR_14;

    FUNC_7("(%ld, %08x, %p)\n", VAR_12, VAR_13, VAR_14);

    if (!VAR_14)
    {
        FUNC_6(VAR_7);
        return ((void*)0);
    }
    if (VAR_13 & VAR_2)
    {
        FUNC_6(VAR_8);
        return ((void*)0);
    }
    if ((VAR_13 & VAR_5) &&
     (VAR_13 & VAR_0))
    {
        FUNC_6(VAR_8);
        return ((void*)0);
    }

    if (FUNC_4(FUNC_5(), (HANDLE)VAR_14,
     FUNC_5(), &VAR_16, VAR_13 & VAR_5 ?
     VAR_9 : VAR_9 | VAR_10, VAR_11, 0))
    {
        HCERTSTORE VAR_17;

        VAR_17 = FUNC_2(VAR_4, 0, 0,
         VAR_1, ((void*)0));
        if (VAR_17)
        {
            if (FUNC_1(VAR_16, VAR_17))
            {
                VAR_15 = FUNC_0(VAR_13, VAR_17, VAR_16,
                 VAR_6);

                if (VAR_12 &&
                 !(VAR_13 & VAR_3))
                    FUNC_3(VAR_12, 0);
            }
        }
    }
    FUNC_7("returning %p\n", VAR_15);
    return VAR_15;
}
