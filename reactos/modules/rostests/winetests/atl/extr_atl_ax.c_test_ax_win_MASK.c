
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int wcex ;
struct TYPE_4__ {int cbSize; scalar_t__ style; } ;
typedef TYPE_1__ WNDCLASSEXW ;
typedef char WCHAR ;
typedef int HMODULE ;
typedef int BOOL ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,char const*,TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int FUNC_4 (int,char*,...) ;

__attribute__((used)) static void FUNC_5(void)
{
    BOOL VAR_1;
    WNDCLASSEXW VAR_2;
    static const WCHAR VAR_3[] = {'A','t','l','A','x','W','i','n',0};
    static HMODULE VAR_4 = 0;

    VAR_1 = FUNC_0();
    FUNC_4(VAR_1, "AtlAxWinInit failed\n");

    VAR_4 = FUNC_2(((void*)0));
    FUNC_3(&VAR_2, 0, sizeof(VAR_2));
    VAR_2.cbSize = sizeof(VAR_2);
    VAR_1 = FUNC_1(VAR_4, VAR_3, &VAR_2);
    FUNC_4(VAR_1, "AtlAxWin has not registered\n");
    FUNC_4(VAR_2.style == VAR_0, "wcex.style %08x\n", VAR_2.style);
}
