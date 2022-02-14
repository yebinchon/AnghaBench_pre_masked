
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bottom; int top; int right; int left; } ;
typedef TYPE_1__ RECT ;
typedef int LONG ;
typedef int IUnknown ;
typedef int IHTMLWindow2 ;
typedef int IHTMLScreen ;
typedef int IDispatchEx ;
typedef int HRESULT ;
typedef int HDC ;


 int VAR_0 ;
 int FUNC_0 (char*,int *,int *,int *) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,void**) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int*) ;
 int FUNC_7 (int *,int*) ;
 int FUNC_8 (int *,int*) ;
 int FUNC_9 (int *,int*) ;
 int FUNC_10 (int *,int*) ;
 int FUNC_11 (int *,int **) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_12 (int ) ;
 int VAR_6 ;
 int FUNC_13 (int ,int ,TYPE_1__*,int ) ;
 int VAR_7 ;
 scalar_t__ FUNC_14 (int) ;
 int FUNC_15 (int *,int *) ;
 int FUNC_16 (int,char*,...) ;
 int FUNC_17 (int *,int *,char*) ;

__attribute__((used)) static void FUNC_18(IHTMLWindow2 *VAR_8)
{
    IHTMLScreen *VAR_9, *VAR_10;
    IDispatchEx *VAR_11;
    RECT VAR_12;
    LONG VAR_13, VAR_14;
    HDC VAR_15;
    HRESULT VAR_16;

    VAR_9 = ((void*)0);
    VAR_16 = FUNC_11(VAR_8, &VAR_9);
    FUNC_16(VAR_16 == VAR_6, "get_screen failed: %08x\n", VAR_16);
    FUNC_16(VAR_9 != ((void*)0), "screen == NULL\n");

    VAR_10 = ((void*)0);
    VAR_16 = FUNC_11(VAR_8, &VAR_10);
    FUNC_16(VAR_16 == VAR_6, "get_screen failed: %08x\n", VAR_16);
    FUNC_16(VAR_10 != ((void*)0), "screen == NULL\n");
    FUNC_16(FUNC_15((IUnknown*)VAR_10, (IUnknown*)VAR_9), "screen2 != screen\n");
    FUNC_5(VAR_10);

    VAR_16 = FUNC_4(VAR_9, &VAR_4, (void**)&VAR_11);
    FUNC_16(VAR_16 == VAR_6 || FUNC_14(VAR_16 == VAR_2), "Could not get IDispatchEx interface: %08x\n", VAR_16);
    if(FUNC_12(VAR_16)) {
        FUNC_17((IUnknown*)VAR_9, &VAR_1, "[object]");
        FUNC_3(VAR_11);
    }

    VAR_15 = FUNC_0("DISPLAY", ((void*)0), ((void*)0), ((void*)0));

    VAR_14 = FUNC_2(VAR_15, VAR_3);
    VAR_13 = 0xdeadbeef;
    VAR_16 = FUNC_10(VAR_9, &VAR_13);
    FUNC_16(VAR_16 == VAR_6, "get_width failed: %08x\n", VAR_16);
    FUNC_16(VAR_13 == VAR_14, "width = %d, expected %d\n", VAR_13, VAR_14);

    VAR_14 = FUNC_2(VAR_15, VAR_7);
    VAR_13 = 0xdeadbeef;
    VAR_16 = FUNC_9(VAR_9, &VAR_13);
    FUNC_16(VAR_16 == VAR_6, "get_height failed: %08x\n", VAR_16);
    FUNC_16(VAR_13 == VAR_14, "height = %d, expected %d\n", VAR_13, VAR_14);

    VAR_14 = FUNC_2(VAR_15, VAR_0);
    VAR_13 = 0xdeadbeef;
    VAR_16 = FUNC_8(VAR_9, &VAR_13);
    FUNC_16(VAR_16 == VAR_6, "get_height failed: %08x\n", VAR_16);
    FUNC_16(VAR_13 == VAR_14, "height = %d, expected %d\n", VAR_13, VAR_14);

    FUNC_1(VAR_15);

    FUNC_13(VAR_5, 0, &VAR_12, 0);

    VAR_13 = 0xdeadbeef;
    VAR_16 = FUNC_6(VAR_9, &VAR_13);
    FUNC_16(VAR_16 == VAR_6, "get_availHeight failed: %08x\n", VAR_16);
    FUNC_16(VAR_13 == VAR_12.bottom-VAR_12.top, "availHeight = %d, expected %d\n", VAR_13, VAR_12.bottom-VAR_12.top);

    VAR_13 = 0xdeadbeef;
    VAR_16 = FUNC_7(VAR_9, &VAR_13);
    FUNC_16(VAR_16 == VAR_6, "get_availWidth failed: %08x\n", VAR_16);
    FUNC_16(VAR_13 == VAR_12.right-VAR_12.left, "availWidth = %d, expected %d\n", VAR_13, VAR_12.right-VAR_12.left);

    FUNC_5(VAR_9);
}
