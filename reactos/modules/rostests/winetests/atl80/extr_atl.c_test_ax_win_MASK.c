
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int wcex ;
struct TYPE_4__ {int cbSize; int style; } ;
typedef TYPE_1__ WNDCLASSEXW ;
typedef char WCHAR ;
typedef int HMODULE ;
typedef int BOOL ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char const*,TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int FUNC_4 (int,char*,...) ;

__attribute__((used)) static void FUNC_5(void)
{
    BOOL VAR_2;
    WNDCLASSEXW VAR_3;
    static const WCHAR VAR_4[] = {'A','t','l','A','x','W','i','n','8','0',0};
    static const WCHAR VAR_5[] = {'A','t','l','A','x','W','i','n','L','i','c','8','0',0};
    static HMODULE VAR_6 = 0;

    VAR_2 = FUNC_0();
    FUNC_4(VAR_2, "AtlAxWinInit failed\n");

    VAR_6 = FUNC_2(((void*)0));

    FUNC_3(&VAR_3, 0, sizeof(VAR_3));
    VAR_3.cbSize = sizeof(VAR_3);
    VAR_2 = FUNC_1(VAR_6, VAR_4, &VAR_3);
    FUNC_4(VAR_2, "AtlAxWin80 has not registered\n");
    FUNC_4(VAR_3.style == (VAR_1 | VAR_0), "wcex.style %08x\n", VAR_3.style);

    FUNC_3(&VAR_3, 0, sizeof(VAR_3));
    VAR_3.cbSize = sizeof(VAR_3);
    VAR_2 = FUNC_1(VAR_6, VAR_5, &VAR_3);
    FUNC_4(VAR_2, "AtlAxWinLic80 has not registered\n");
    FUNC_4(VAR_3.style == (VAR_1 | VAR_0), "wcex.style %08x\n", VAR_3.style);
}
