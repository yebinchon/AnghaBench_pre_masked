
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int x; int y; } ;
struct TYPE_5__ {int left; int right; int top; int bottom; } ;
typedef TYPE_1__ RECT ;
typedef TYPE_2__ POINT ;
typedef int LRESULT ;
typedef int LPARAM ;
typedef int HWND ;
typedef scalar_t__ HTREEITEM ;


 int FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 (int,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 () ;
 int FUNC_10 (int ,int ) ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_11 (int,char*) ;
 int FUNC_12 (int ,int ,int ,char*,int ) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;

__attribute__((used)) static void FUNC_13(void)
{
    HWND VAR_19;
    HTREEITEM VAR_20;
    RECT VAR_21;
    LRESULT VAR_22;
    POINT VAR_23, VAR_24;

    VAR_19 = FUNC_7(0);
    FUNC_8(VAR_19);

    FUNC_5(VAR_19, VAR_7, 0, (LPARAM)VAR_13);
    FUNC_5(VAR_19, VAR_10, VAR_6, (LPARAM)VAR_13);
    VAR_20 = (HTREEITEM)FUNC_5(VAR_19, VAR_9, VAR_6, 0);
    FUNC_11(VAR_20 == VAR_13, "child item not selected\n");

    *(HTREEITEM *)&VAR_21 = VAR_15;
    VAR_22 = FUNC_5(VAR_19, VAR_8, VAR_5, (LPARAM)&VAR_21);
    FUNC_11(VAR_22, "TVM_GETITEMRECT failed\n");

    FUNC_9();

    VAR_23.x = (VAR_21.left + VAR_21.right) / 2;
    VAR_23.y = (VAR_21.top + VAR_21.bottom) / 2;
    FUNC_0(VAR_14, &VAR_23);
    FUNC_2(&VAR_24);
    FUNC_6(VAR_23.x, VAR_23.y);

    FUNC_9();
    FUNC_10(VAR_17, VAR_2);

    FUNC_4(VAR_19, VAR_11, VAR_1, FUNC_3(VAR_23.x, VAR_23.y));
    FUNC_4(VAR_19, VAR_12, 0, FUNC_3(VAR_23.x, VAR_23.y));

    FUNC_9();

    FUNC_12(VAR_17, VAR_4, VAR_18, "right click sequence", VAR_0);
    FUNC_12(VAR_17, VAR_3, VAR_16, "parent right click sequence", VAR_0);

    VAR_20 = (HTREEITEM)FUNC_5(VAR_19, VAR_9, VAR_6, 0);
    FUNC_11(VAR_20 == VAR_13, "child item should still be selected\n");

    FUNC_6(VAR_24.x, VAR_24.y);
    FUNC_1(VAR_19);
}
