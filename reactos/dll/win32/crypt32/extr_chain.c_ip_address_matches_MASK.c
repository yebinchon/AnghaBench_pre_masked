
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int subnet ;
typedef int mask ;
typedef int addr ;
struct TYPE_4__ {int cbData; int* pbData; } ;
typedef int DWORD ;
typedef TYPE_1__ CRYPT_DATA_BLOB ;
typedef int BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int*,int,int*) ;
 int VAR_2 ;
 int FUNC_1 (int*,int*,int) ;

__attribute__((used)) static BOOL FUNC_2(const CRYPT_DATA_BLOB *VAR_3,
 const CRYPT_DATA_BLOB *VAR_4, DWORD *VAR_5)
{
    BOOL VAR_6 = VAR_1;

    FUNC_0("(%d, %p), (%d, %p)\n", VAR_3->cbData, VAR_3->pbData,
     VAR_4->cbData, VAR_4->pbData);




    if (VAR_3->cbData != sizeof(DWORD) * 2 && VAR_3->cbData != 32)
        *VAR_5 |= VAR_0;
    else if (VAR_4->cbData == sizeof(DWORD) &&
     VAR_3->cbData == sizeof(DWORD) * 2)
    {
        DWORD VAR_7, VAR_8, VAR_9;

        FUNC_1(&VAR_7, VAR_3->pbData, sizeof(VAR_7));
        FUNC_1(&VAR_8, VAR_3->pbData + sizeof(VAR_7), sizeof(VAR_8));
        FUNC_1(&VAR_9, VAR_4->pbData, sizeof(VAR_9));



        VAR_6 = (VAR_7 & VAR_8) == (VAR_9 & VAR_8);
    }
    else if (VAR_4->cbData == 16 && VAR_3->cbData == 32)
    {
        const BYTE *VAR_10, *VAR_11, *VAR_12;
        DWORD VAR_13;

        VAR_10 = VAR_3->pbData;
        VAR_11 = VAR_3->pbData + 16;
        VAR_12 = VAR_4->pbData;
        VAR_6 = VAR_2;
        for (VAR_13 = 0; VAR_6 && VAR_13 < 16; VAR_13++)
            if ((VAR_10[VAR_13] & VAR_11[VAR_13]) != (VAR_12[VAR_13] & VAR_11[VAR_13]))
                VAR_6 = VAR_1;
    }


    return VAR_6;
}
