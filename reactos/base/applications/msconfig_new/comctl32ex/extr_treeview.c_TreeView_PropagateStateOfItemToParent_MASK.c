
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef int HWND ;
typedef int HTREEITEM ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;

void FUNC_4(HWND VAR_1, HTREEITEM VAR_2)
{
    HTREEITEM VAR_3;
    UINT VAR_4;

    if (!VAR_1 || !VAR_2 )
        return;

    VAR_3 = FUNC_1(VAR_1, VAR_2);
    if (!VAR_3)
        return;

    VAR_4 = FUNC_2(VAR_1, VAR_3);
    FUNC_3(VAR_1, VAR_3, FUNC_0(VAR_4 + 1), VAR_0);
    FUNC_4(VAR_1, VAR_3);

    return;
}
