
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * (* pfnAlloc ) (int) ;} ;
typedef int DWORD ;
typedef TYPE_1__ CRYPT_ENCODE_PARA ;
typedef int BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int * FUNC_2 (int) ;

BOOL FUNC_3(DWORD VAR_4, const CRYPT_ENCODE_PARA *VAR_5,
 BYTE *VAR_6, DWORD *VAR_7, DWORD VAR_8)
{
    BOOL VAR_9 = VAR_3;

    if (VAR_4 & VAR_0)
    {
        if (VAR_5 && VAR_5->pfnAlloc)
            *(BYTE **)VAR_6 = VAR_5->pfnAlloc(VAR_8);
        else
            *(BYTE **)VAR_6 = FUNC_0(0, VAR_8);
        if (!*(BYTE **)VAR_6)
            VAR_9 = VAR_2;
        else
            *VAR_7 = VAR_8;
    }
    else if (VAR_8 > *VAR_7)
    {
        *VAR_7 = VAR_8;
        FUNC_1(VAR_1);
        VAR_9 = VAR_2;
    }
    else
        *VAR_7 = VAR_8;
    return VAR_9;
}
