
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cbData; int * pbData; } ;
typedef int DWORD ;
typedef TYPE_1__ CRYPT_HASH_BLOB ;
typedef int BYTE ;



__attribute__((used)) static void FUNC_0(CRYPT_HASH_BLOB *VAR_0)
{
    DWORD VAR_1;
    BYTE VAR_2;

    for (VAR_1 = 0; VAR_1 < VAR_0->cbData / 2; VAR_1++)
    {
        VAR_2 = VAR_0->pbData[VAR_0->cbData - VAR_1 - 1];
        VAR_0->pbData[VAR_0->cbData - VAR_1 - 1] = VAR_0->pbData[VAR_1];
        VAR_0->pbData[VAR_1] = VAR_2;
    }
}
