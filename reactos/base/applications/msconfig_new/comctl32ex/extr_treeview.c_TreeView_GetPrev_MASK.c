
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HWND ;
typedef int * HTREEITEM ;


 int * FUNC_0 (int ,int *) ;
 int * FUNC_1 (int ,int *) ;
 int * FUNC_2 (int ,int *) ;
 int * FUNC_3 (int ,int *) ;

HTREEITEM FUNC_4(HWND VAR_0, HTREEITEM VAR_1)
{
    HTREEITEM VAR_2, VAR_3;

    if (!VAR_0)
        return ((void*)0);

    VAR_2 = FUNC_3(VAR_0, VAR_1);
    if (!VAR_2)
        return FUNC_2(VAR_0, VAR_1);

    VAR_3 = FUNC_0(VAR_0, VAR_2);
    if (VAR_3)
        return FUNC_1(VAR_0, VAR_3);
    else
        return VAR_2;
}
