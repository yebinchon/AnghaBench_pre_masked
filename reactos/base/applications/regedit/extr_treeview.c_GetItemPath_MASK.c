
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__* LPCWSTR ;
typedef int HWND ;
typedef scalar_t__ HTREEITEM ;
typedef int * HKEY ;


 int FUNC_0 () ;
 scalar_t__* FUNC_1 (int ,int ,int) ;
 scalar_t__ FUNC_2 (int ,int ,scalar_t__*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,scalar_t__,int **,scalar_t__**,int*,int*) ;
 scalar_t__* VAR_0 ;

LPCWSTR FUNC_5(HWND VAR_1, HTREEITEM VAR_2, HKEY* VAR_3)
{
    int VAR_4 = 0, VAR_5;

    *VAR_3 = ((void*)0);
    if (!VAR_0) VAR_0 = FUNC_1(FUNC_0(), 0, 1024);
    if (!VAR_0) return ((void*)0);
    *VAR_0 = 0;
    VAR_5 = (int) FUNC_2(FUNC_0(), 0, VAR_0);
    if (VAR_5 == -1) return ((void*)0);
    if (!VAR_2) VAR_2 = FUNC_3(VAR_1);
    if (!VAR_2) return ((void*)0);
    if (!FUNC_4(VAR_1, VAR_2, VAR_3, &VAR_0, &VAR_4, &VAR_5))
    {
        return ((void*)0);
    }
    return VAR_0;
}
