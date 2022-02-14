
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ HWND ;
typedef scalar_t__ HMENU ;
typedef int DWORD ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int) ;
 int VAR_0 ;

void
FUNC_5(void)
{
    DWORD VAR_1;
    HWND VAR_2;
    HMENU VAR_3;

    VAR_2 = FUNC_2();
    VAR_1 = FUNC_3((DWORD)VAR_2, VAR_0);
    FUNC_4(VAR_1 > 0);
    FUNC_4(VAR_1 < 0x80000000);

    VAR_3 = FUNC_0();
    VAR_1 = FUNC_3((DWORD)VAR_3, VAR_0);
    FUNC_1(VAR_3);
    FUNC_4(VAR_1 > 0);
    FUNC_4(VAR_1 < 0x80000000);

}
