
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WPARAM ;
struct TYPE_3__ {scalar_t__ top; scalar_t__ bottom; scalar_t__ left; scalar_t__ right; } ;
typedef TYPE_1__ RECT ;
typedef int LPARAM ;
typedef int INT ;
typedef int HWND ;
 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int VAR_4 ;
 int FUNC_6 (int,char*,int ,void*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (scalar_t__,int ) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_9(HWND VAR_6, INT VAR_7, WPARAM VAR_8, LPARAM VAR_9)
{
    RECT VAR_10;
    switch (VAR_7)
    {
        case 128:

            break;
        case 136:
            FUNC_2(VAR_6, &VAR_10);
            FUNC_8(VAR_10.right - VAR_10.left, 0);
            FUNC_8(VAR_10.bottom - VAR_10.top, 0);
            FUNC_7(FUNC_3(VAR_6), VAR_0);
            break;
        case 130:
            FUNC_2(VAR_6, &VAR_10);
            FUNC_8(VAR_10.right - VAR_10.left, VAR_4);
            FUNC_8(VAR_10.bottom - VAR_10.top, VAR_1);
            FUNC_7(FUNC_3(VAR_6), VAR_0);
            break;
        case 129:
            FUNC_5(VAR_6, VAR_3);
            break;
        case 131:
            FUNC_6(VAR_8 == 1, "Step %d: wParam was %p\n", VAR_5, (void *)VAR_8);
            FUNC_6(VAR_9 == 0xC000000F, "Step %d: lParam was %p\n", VAR_5, (void *)VAR_9);
            break;
        case 133:
            FUNC_6(VAR_8 == 2, "Step %d: wParam was %p\n", VAR_5, (void *)VAR_8);
            FUNC_6(VAR_9 == 0, "Step %d: lParam was %p\n", VAR_5, (void *)VAR_9);
            break;
        case 137:
            FUNC_0(VAR_6);
            break;
        case 132:
            FUNC_6(VAR_8 == 0, "Step %d: wParam was %p\n", VAR_5, (void *)VAR_8);
            FUNC_6(VAR_9 == 0xC000000F, "Step %d: lParam was %p\n", VAR_5, (void *)VAR_9);
            break;
        case 134:
            FUNC_6(VAR_8 == 1, "Step %d: wParam was %p\n", VAR_5, (void *)VAR_8);
            FUNC_6(VAR_9 == 0, "Step %d: lParam was %p\n", VAR_5, (void *)VAR_9);
            break;
        case 135:
            FUNC_5(VAR_6, VAR_2);
            break;
        case 138:
            FUNC_4(FUNC_1());
            break;
        case 139:
            FUNC_4(VAR_6);
            break;
    }
}
