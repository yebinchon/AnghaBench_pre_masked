
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HWND ;
typedef scalar_t__ HTREEITEM ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ,scalar_t__) ;
 scalar_t__ FUNC_4 (int ,scalar_t__,int ,scalar_t__) ;

void FUNC_5(HWND VAR_1, HTREEITEM VAR_2)
{
    HTREEITEM VAR_3, VAR_4, VAR_5;

    if (!VAR_1 || !VAR_2)
        return;

    VAR_3 = FUNC_2(VAR_1, VAR_2);
    VAR_4 = FUNC_2(VAR_1, VAR_3);
    if (!VAR_4)
        VAR_4 = VAR_0;


    VAR_5 = FUNC_4(VAR_1, VAR_2, FUNC_1(VAR_1, VAR_2), VAR_4);
    FUNC_0(VAR_1, VAR_2);
    FUNC_3(VAR_1, VAR_5);

    return;
}
