
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * (* pfnAlloc ) (int) ;} ;
typedef int DWORD ;
typedef TYPE_1__ CRYPT_DECODE_PARA ;
typedef int BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int * FUNC_2 (int) ;

__attribute__((used)) static BOOL FUNC_3(DWORD VAR_5,
 const CRYPT_DECODE_PARA *VAR_6, void *VAR_7, DWORD *VAR_8,
 DWORD VAR_9)
{
    BOOL VAR_10 = VAR_4;

    if (VAR_5 & VAR_0)
    {
        if (VAR_6 && VAR_6->pfnAlloc)
            *(BYTE **)VAR_7 = VAR_6->pfnAlloc(VAR_9);
        else
            *(BYTE **)VAR_7 = FUNC_0(VAR_3, VAR_9);
        if (!*(BYTE **)VAR_7)
            VAR_10 = VAR_2;
        else
            *VAR_8 = VAR_9;
    }
    else if (*VAR_8 < VAR_9)
    {
        *VAR_8 = VAR_9;
        FUNC_1(VAR_1);
        VAR_10 = VAR_2;
    }
    else
        *VAR_8 = VAR_9;
    return VAR_10;
}
