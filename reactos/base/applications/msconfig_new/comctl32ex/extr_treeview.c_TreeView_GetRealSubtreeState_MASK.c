
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int HWND ;
typedef int * HTREEITEM ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int *) ;
 int * FUNC_2 (int ,int *) ;
 int * FUNC_3 (int ,int *) ;

UINT FUNC_4(HWND VAR_0, HTREEITEM VAR_1)
{


    HTREEITEM VAR_2 = FUNC_2(VAR_0, VAR_1);
    UINT VAR_3 = FUNC_1(VAR_0, VAR_2);
    while ( VAR_2 && ( (VAR_2 = FUNC_3(VAR_0, VAR_2)) != ((void*)0) ) )
    {
        UINT VAR_4 = FUNC_1(VAR_0, VAR_2);
        VAR_3 = ((VAR_3) == (VAR_4) ? (VAR_3) : 2);
    }

    return VAR_3;
}
