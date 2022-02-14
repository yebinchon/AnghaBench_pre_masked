
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LONG ;
typedef int IUnknown ;
typedef int IHTMLRect ;
typedef int IHTMLElement2 ;
typedef scalar_t__ HRESULT ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int **) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int*) ;
 scalar_t__ FUNC_4 (int *,int*) ;
 scalar_t__ FUNC_5 (int *,int*) ;
 scalar_t__ FUNC_6 (int *,int*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (int,char*,...) ;
 int FUNC_9 (int *,int *,char*) ;

__attribute__((used)) static void FUNC_10(IUnknown *VAR_2)
{
    IHTMLRect *VAR_3, *VAR_4;
    IHTMLElement2 *VAR_5;
    LONG VAR_6;
    HRESULT VAR_7;

    VAR_5 = FUNC_7(VAR_2);
    VAR_7 = FUNC_1(VAR_5, &VAR_3);
    FUNC_8(VAR_7 == VAR_1, "getBoundingClientRect failed: %08x\n", VAR_7);
    VAR_7 = FUNC_1(VAR_5, &VAR_4);
    FUNC_0(VAR_5);
    FUNC_8(VAR_7 == VAR_1, "getBoundingClientRect failed: %08x\n", VAR_7);
    FUNC_8(VAR_3 != ((void*)0), "rect == NULL\n");
    FUNC_8(VAR_3 != VAR_4, "rect == rect2\n");
    FUNC_2(VAR_4);

    FUNC_9((IUnknown*)VAR_3, &VAR_0, "[object]");

    VAR_6 = 0xdeadbeef;
    VAR_7 = FUNC_6(VAR_3, &VAR_6);
    FUNC_8(VAR_7 == VAR_1, "get_top failed: %08x\n", VAR_7);
    FUNC_8(VAR_6 != 0xdeadbeef, "l = 0xdeadbeef\n");

    VAR_6 = 0xdeadbeef;
    VAR_7 = FUNC_4(VAR_3, &VAR_6);
    FUNC_8(VAR_7 == VAR_1, "get_left failed: %08x\n", VAR_7);
    FUNC_8(VAR_6 != 0xdeadbeef, "l = 0xdeadbeef\n");

    VAR_6 = 0xdeadbeef;
    VAR_7 = FUNC_3(VAR_3, &VAR_6);
    FUNC_8(VAR_7 == VAR_1, "get_bottom failed: %08x\n", VAR_7);
    FUNC_8(VAR_6 != 0xdeadbeef, "l = 0xdeadbeef\n");

    VAR_6 = 0xdeadbeef;
    VAR_7 = FUNC_5(VAR_3, &VAR_6);
    FUNC_8(VAR_7 == VAR_1, "get_right failed: %08x\n", VAR_7);
    FUNC_8(VAR_6 != 0xdeadbeef, "l = 0xdeadbeef\n");

    FUNC_2(VAR_3);
}
