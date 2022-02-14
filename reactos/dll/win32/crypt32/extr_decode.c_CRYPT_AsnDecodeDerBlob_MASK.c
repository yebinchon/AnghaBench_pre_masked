
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cbData; int* pbData; } ;
typedef int DWORD ;
typedef TYPE_1__ CRYPT_DER_BLOB ;
typedef int BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int) ;
 int VAR_2 ;
 int FUNC_1 (int const*,int,int*) ;
 int VAR_3 ;
 int FUNC_2 (int const) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int*) ;
 int FUNC_5 (int*,int const*,int) ;

__attribute__((used)) static BOOL FUNC_6(const BYTE *VAR_4, DWORD VAR_5,
 DWORD VAR_6, void *VAR_7, DWORD *VAR_8, DWORD *VAR_9)
{
    BOOL VAR_10;
    DWORD VAR_11;

    if ((VAR_10 = FUNC_1(VAR_4, VAR_5, &VAR_11)))
    {
        BYTE VAR_12 = FUNC_2(VAR_4[1]);
        DWORD VAR_13 = sizeof(CRYPT_DER_BLOB);

        if (!(VAR_6 & VAR_1))
            VAR_13 += 1 + VAR_12 + VAR_11;

        if (VAR_9)
            *VAR_9 = 1 + VAR_12 + VAR_11;
        if (!VAR_7)
            *VAR_8 = VAR_13;
        else if ((VAR_10 = FUNC_0(VAR_8, VAR_13)))
        {
            CRYPT_DER_BLOB *VAR_14;

            if (VAR_6 & VAR_0)
                VAR_7 = *(BYTE **)VAR_7;
            VAR_14 = VAR_7;
            VAR_14->cbData = 1 + VAR_12 + VAR_11;
            if (VAR_14->cbData)
            {
                if (VAR_6 & VAR_1)
                    VAR_14->pbData = (BYTE *)VAR_4;
                else
                {
                    FUNC_4(VAR_14->pbData);
                    FUNC_5(VAR_14->pbData, VAR_4, VAR_14->cbData);
                }
            }
            else
            {
                FUNC_3(VAR_2);
                VAR_10 = VAR_3;
            }
        }
    }
    return VAR_10;
}
