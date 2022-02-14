
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * RPC_BINDING_HANDLE ;
typedef int * HSTRING_TABLE ;
typedef int BOOL ;


 int VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 scalar_t__ FUNC_0 (int *,int **) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 () ;

BOOL
FUNC_4(RPC_BINDING_HANDLE *VAR_5,
                   HSTRING_TABLE *VAR_6)
{
    if (VAR_1 != ((void*)0))
    {
        if (VAR_5 != ((void*)0))
            *VAR_5 = VAR_1;

        if (VAR_6 != ((void*)0))
            *VAR_6 = VAR_2;

        return VAR_4;
    }

    VAR_2 = FUNC_3();
    if (VAR_2 == ((void*)0))
        return VAR_0;

    if (FUNC_0(((void*)0), &VAR_1) != VAR_3)
    {
        FUNC_2(VAR_2);
        return VAR_0;
    }

    FUNC_1(VAR_2, L"PLT", 1);

    if (VAR_5 != ((void*)0))
        *VAR_5 = VAR_1;

    if (VAR_6 != ((void*)0))
        *VAR_6 = VAR_2;

    return VAR_4;
}
