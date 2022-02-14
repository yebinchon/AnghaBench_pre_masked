
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef scalar_t__ LPWSTR ;
typedef int HWND ;
typedef scalar_t__ HTREEITEM ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;
 scalar_t__ FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static VOID
FUNC_4(HWND VAR_0,
            HTREEITEM VAR_1)
{
    HTREEITEM VAR_2;
    LPWSTR VAR_3;


    VAR_2 = FUNC_2(VAR_0, VAR_1);
    if (VAR_2)
    {

        FUNC_4(VAR_0, VAR_2);
    }


    VAR_3 = (LPWSTR)FUNC_3(VAR_0, VAR_1);
    if (VAR_3)
    {
        FUNC_1(FUNC_0(),
                 0,
                 VAR_3);
    }
}
