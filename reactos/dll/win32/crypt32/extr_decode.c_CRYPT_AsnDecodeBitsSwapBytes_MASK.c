
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cbData; int * pbData; } ;
typedef int DWORD ;
typedef TYPE_1__ CRYPT_BIT_BLOB ;
typedef int BYTE ;
typedef int BOOL ;


 int FUNC_0 (int const*,int,int,void*,int*,int*) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int ,int,...) ;

__attribute__((used)) static BOOL FUNC_3(const BYTE *VAR_1,
 DWORD VAR_2, DWORD VAR_3, void *VAR_4, DWORD *VAR_5,
 DWORD *VAR_6)
{
    BOOL VAR_7;

    FUNC_2("(%p, %d, 0x%08x, %p, %d, %p)\n", VAR_1, VAR_2, VAR_3,
     VAR_4, *VAR_5, VAR_6);




    VAR_7 = FUNC_0(VAR_1, VAR_2,
     VAR_3 & ~VAR_0, VAR_4, VAR_5,
     VAR_6);
    if (VAR_7 && VAR_4)
    {
        CRYPT_BIT_BLOB *VAR_8 = VAR_4;

        if (VAR_8->cbData)
        {
            DWORD VAR_9;
            BYTE VAR_10;

            for (VAR_9 = 0; VAR_9 < VAR_8->cbData / 2; VAR_9++)
            {
                VAR_10 = VAR_8->pbData[VAR_9];
                VAR_8->pbData[VAR_9] = VAR_8->pbData[VAR_8->cbData - VAR_9 - 1];
                VAR_8->pbData[VAR_8->cbData - VAR_9 - 1] = VAR_10;
            }
        }
    }
    FUNC_2("returning %d (%08x)\n", VAR_7, FUNC_1());
    return VAR_7;
}
