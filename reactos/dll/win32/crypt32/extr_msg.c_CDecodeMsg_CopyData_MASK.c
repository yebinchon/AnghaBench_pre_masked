
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ cbData; scalar_t__ pbData; } ;
typedef scalar_t__ DWORD ;
typedef TYPE_1__ CRYPT_DATA_BLOB ;
typedef int BYTE ;
typedef int BOOL ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (scalar_t__,int const*,scalar_t__) ;

__attribute__((used)) static BOOL FUNC_3(CRYPT_DATA_BLOB *VAR_2, const BYTE *VAR_3,
 DWORD VAR_4)
{
    BOOL VAR_5 = VAR_1;

    if (VAR_4)
    {
        if (VAR_2->cbData)
            VAR_2->pbData = FUNC_1(VAR_2->pbData,
             VAR_2->cbData + VAR_4);
        else
            VAR_2->pbData = FUNC_0(VAR_4);
        if (VAR_2->pbData)
        {
            FUNC_2(VAR_2->pbData + VAR_2->cbData, VAR_3, VAR_4);
            VAR_2->cbData += VAR_4;
        }
        else
            VAR_5 = VAR_0;
    }
    return VAR_5;
}
