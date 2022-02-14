
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef int IStream ;
typedef int HRESULT ;
typedef int BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 int * FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int *,int *,int,int*) ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_2 ;
 int FUNC_6 (int *,int *,int) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static HRESULT FUNC_8(IStream *VAR_3, BYTE *VAR_4, BYTE **VAR_5, ULONG *VAR_6)
{
    BYTE VAR_7[8];
    HRESULT VAR_8;
    ULONG VAR_9;

    VAR_8 = FUNC_4(VAR_3, VAR_7, 8, &VAR_9);
    if (FUNC_0(VAR_8) || VAR_9 < 8)
    {
        if (FUNC_5(VAR_8))
            VAR_8 = VAR_0;
        return VAR_8;
    }

    *VAR_6 = FUNC_7(&VAR_7[0]);

    FUNC_6(VAR_4, &VAR_7[4], 4);

    if (VAR_5)
    {
        *VAR_5 = FUNC_2(FUNC_1(), 0, *VAR_6);
        if (!*VAR_5)
            return VAR_1;

        VAR_8 = FUNC_4(VAR_3, *VAR_5, *VAR_6, &VAR_9);

        if (FUNC_0(VAR_8) || VAR_9 < *VAR_6)
        {
            if (FUNC_5(VAR_8))
                VAR_8 = VAR_0;
            FUNC_3(FUNC_1(), 0, *VAR_5);
            *VAR_5 = ((void*)0);
            return VAR_8;
        }


    }

    return VAR_2;
}
