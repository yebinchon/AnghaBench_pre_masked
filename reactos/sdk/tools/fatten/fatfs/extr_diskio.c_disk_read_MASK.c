
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int DWORD ;
typedef int DRESULT ;
typedef size_t BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int ** VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (size_t*,int,int,int *) ;
 scalar_t__ FUNC_1 (int *,int,int ) ;

DRESULT FUNC_2(
    BYTE VAR_6,
    BYTE *VAR_7,
    DWORD VAR_8,
    UINT VAR_9
    )
{
    DWORD VAR_10;

    if (VAR_6 < VAR_5)
    {
        if (VAR_4[VAR_6] != ((void*)0))
        {
            if (FUNC_1(VAR_4[VAR_6], VAR_8 * 512, VAR_3))
                return VAR_0;

            VAR_10 = FUNC_0(VAR_7, 512, VAR_9, VAR_4[VAR_6]);

            if (VAR_10 != VAR_9)
                return VAR_0;

            return VAR_1;
        }
    }

    return VAR_2;
}
