
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ HWND ;
typedef scalar_t__ HDC ;
typedef int DWORD ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ,int) ;
 int FUNC_4 (int) ;

void
FUNC_5(void)
{
    HDC VAR_0 = FUNC_0(((void*)0));
    HWND VAR_1;

    VAR_1 = (HWND)FUNC_3((DWORD)VAR_0, 0x1f);
    FUNC_4(VAR_1 != 0);
    FUNC_4(FUNC_2(VAR_1));
    FUNC_4(VAR_1 == FUNC_1());

}
