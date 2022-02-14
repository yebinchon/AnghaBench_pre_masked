
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HWND ;
typedef scalar_t__ HTREEITEM ;
typedef int HCURSOR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ,scalar_t__) ;
 int VAR_3 ;

BOOL FUNC_9(HWND VAR_4)
{
    HTREEITEM VAR_5;
    HTREEITEM VAR_6;
    HCURSOR VAR_7;

    VAR_6 = FUNC_7(VAR_4);
    VAR_7 = FUNC_3(FUNC_0(((void*)0), VAR_1));
    FUNC_2(VAR_4, VAR_3, VAR_0, 0);

    VAR_5 = FUNC_4(VAR_4, FUNC_6(VAR_4));
    while (VAR_5)
    {
        FUNC_1(VAR_4, VAR_5);
        VAR_5 = FUNC_5(VAR_4, VAR_5);
    }

    FUNC_2(VAR_4, VAR_3, VAR_2, 0);
    FUNC_3(VAR_7);


    (void)FUNC_8(VAR_4, VAR_6);
    return VAR_2;
}
