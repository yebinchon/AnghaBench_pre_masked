
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int WPARAM ;
struct TYPE_2__ {char* szClass; char* szTitle; int lParam; scalar_t__ style; void* cy; void* cx; void* y; void* x; int hOwner; } ;
typedef TYPE_1__ MDICREATESTRUCTA ;
typedef int LPARAM ;
typedef scalar_t__ HWND ;


 void* VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;
 scalar_t__ FUNC_3 (scalar_t__,int ,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (int,char*,...) ;
 int FUNC_5 (char*,scalar_t__,...) ;

__attribute__((used)) static void FUNC_6(HWND VAR_6)
{
    HWND VAR_7, VAR_8, VAR_9, VAR_10;
    HWND VAR_11[4];
    MDICREATESTRUCTA VAR_12;

    VAR_12.szClass = "MDI_child_Class_1";
    VAR_12.szTitle = "MDI child";
    VAR_12.hOwner = FUNC_1(0);
    VAR_12.x = VAR_0;
    VAR_12.y = VAR_0;
    VAR_12.cx = VAR_0;
    VAR_12.cy = VAR_0;
    VAR_12.style = 0;
    VAR_12.lParam = (LPARAM)VAR_5;

    VAR_7 = (HWND)FUNC_3(VAR_6, VAR_2, 0, (LPARAM)&VAR_12);
    FUNC_4(VAR_7 != 0, "expected child_1 to be non NULL\n");
    VAR_8 = (HWND)FUNC_3(VAR_6, VAR_2, 0, (LPARAM)&VAR_12);
    FUNC_4(VAR_8 != 0, "expected child_2 to be non NULL\n");
    VAR_9 = (HWND)FUNC_3(VAR_6, VAR_2, 0, (LPARAM)&VAR_12);
    FUNC_4(VAR_9 != 0, "expected child_3 to be non NULL\n");
    VAR_10 = (HWND)FUNC_3(VAR_6, VAR_2, 0, (LPARAM)&VAR_12);
    FUNC_4(VAR_10 != 0, "expected child_4 to be non NULL\n");

    VAR_11[0] = (HWND)FUNC_3(VAR_6, VAR_3, 0, 0);
    VAR_11[1] = FUNC_2(VAR_11[0], VAR_1);
    VAR_11[2] = FUNC_2(VAR_11[1], VAR_1);
    VAR_11[3] = FUNC_2(VAR_11[2], VAR_1);
    FUNC_5("Initial MDI child stack: %p->%p->%p->%p\n", VAR_11[0], VAR_11[1], VAR_11[2], VAR_11[3]);
    FUNC_4(VAR_11[0] == VAR_10 && VAR_11[1] == VAR_9 &&
        VAR_11[2] == VAR_8 && VAR_11[3] == VAR_7,
        "Unexpected initial order, should be: %p->%p->%p->%p\n",
            VAR_10, VAR_9, VAR_8, VAR_7);

    FUNC_5("Activate child next to %p\n", VAR_9);
    FUNC_3(VAR_6, VAR_4, (WPARAM)VAR_9, 0);

    VAR_11[0] = (HWND)FUNC_3(VAR_6, VAR_3, 0, 0);
    VAR_11[1] = FUNC_2(VAR_11[0], VAR_1);
    VAR_11[2] = FUNC_2(VAR_11[1], VAR_1);
    VAR_11[3] = FUNC_2(VAR_11[2], VAR_1);
    FUNC_4(VAR_11[0] == VAR_8 && VAR_11[1] == VAR_10 &&
        VAR_11[2] == VAR_7 && VAR_11[3] == VAR_9,
        "Broken MDI child stack:\nexpected: %p->%p->%p->%p, but got: %p->%p->%p->%p\n",
            VAR_8, VAR_10, VAR_7, VAR_9, VAR_11[0], VAR_11[1], VAR_11[2], VAR_11[3]);

    FUNC_5("Activate child previous to %p\n", VAR_7);
    FUNC_3(VAR_6, VAR_4, (WPARAM)VAR_7, 1);

    VAR_11[0] = (HWND)FUNC_3(VAR_6, VAR_3, 0, 0);
    VAR_11[1] = FUNC_2(VAR_11[0], VAR_1);
    VAR_11[2] = FUNC_2(VAR_11[1], VAR_1);
    VAR_11[3] = FUNC_2(VAR_11[2], VAR_1);
    FUNC_4(VAR_11[0] == VAR_10 && VAR_11[1] == VAR_8 &&
        VAR_11[2] == VAR_7 && VAR_11[3] == VAR_9,
        "Broken MDI child stack:\nexpected: %p->%p->%p->%p, but got: %p->%p->%p->%p\n",
            VAR_10, VAR_8, VAR_7, VAR_9, VAR_11[0], VAR_11[1], VAR_11[2], VAR_11[3]);

    FUNC_0(VAR_7);
    FUNC_0(VAR_8);
    FUNC_0(VAR_9);
    FUNC_0(VAR_10);
}
