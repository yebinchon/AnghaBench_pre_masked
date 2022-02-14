
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WINECRYPT_CERTSTORE ;
typedef scalar_t__ HCRYPTPROV ;
typedef int * HCERTSTORE ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;






 int VAR_6 ;


 int FUNC_0 (int *,int *,int ,int ) ;
 int FUNC_1 (int *,int ) ;
 int * FUNC_2 (int ,int ,int ,int,void const*) ;
 int FUNC_3 (scalar_t__,int ) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,scalar_t__,int,int ) ;
 scalar_t__ VAR_9 ;
 int FUNC_6 (void const*) ;

__attribute__((used)) static WINECRYPT_CERTSTORE *FUNC_7(HCRYPTPROV VAR_10,
 DWORD VAR_11, const void *VAR_12)
{
    HCERTSTORE VAR_13 = 0;
    BOOL VAR_14;

    FUNC_5("(%ld, %08x, %s)\n", VAR_10, VAR_11,
     FUNC_6(VAR_12));

    if (!VAR_12)
    {
        FUNC_4(VAR_7);
        return ((void*)0);
    }



    switch (VAR_11 & VAR_6)
    {
    case 132:
    case 134:
    case 135:
    case 129:
    case 128:
    case 133:
    case 130:
    case 131:
        VAR_14 = VAR_9;
        break;
    default:
        FUNC_4(VAR_7);
        VAR_14 = VAR_8;
    }
    if (VAR_14)
    {
        HCERTSTORE VAR_15 = FUNC_2(VAR_4,
         0, 0, VAR_11, VAR_12);

        if (VAR_15)
        {
            VAR_13 = FUNC_2(VAR_3, 0, 0,
             VAR_1, ((void*)0));
            FUNC_0(VAR_13, VAR_15,
             VAR_11 & VAR_5 ? 0 :
             VAR_0, 0);
            FUNC_1(VAR_15, 0);



            if ((VAR_11 & VAR_6) ==
             134)
            {
                VAR_11 &= ~134;
                VAR_11 |= 132;
                VAR_15 = FUNC_2(VAR_4, 0,
                 0, VAR_11, VAR_12);
                if (VAR_15)
                {
                    FUNC_0(VAR_13, VAR_15,
                     VAR_11 & VAR_5 ? 0 :
                     VAR_0, 0);
                    FUNC_1(VAR_15, 0);
                }
            }

            if (VAR_10 && !(VAR_11 & VAR_2))
                FUNC_3(VAR_10, 0);
        }
    }
    return VAR_13;
}
