
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int hMainWnd; } ;
typedef TYPE_1__ WINHELP_WINDOW ;
struct TYPE_7__ {scalar_t__ bottom; scalar_t__ left; scalar_t__ right; scalar_t__ top; } ;
typedef TYPE_2__ RECT ;
typedef scalar_t__ INT ;
typedef int HWND ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_3 (int ,int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ) ;

void FUNC_4(WINHELP_WINDOW* VAR_3)
{
    RECT VAR_4, VAR_5;
    INT VAR_6 = 0;
    HWND VAR_7 = FUNC_1(VAR_3->hMainWnd, VAR_0);
    HWND VAR_8 = FUNC_1(VAR_3->hMainWnd, VAR_1);

    FUNC_0(VAR_3->hMainWnd, &VAR_4);


    FUNC_3(VAR_7, VAR_2,
                 VAR_4.left, VAR_4.top,
                 VAR_4.right - VAR_4.left,
                 VAR_4.bottom - VAR_4.top, 0);

    if (FUNC_2(VAR_7, &VAR_5))
        VAR_6 = VAR_4.top + VAR_5.bottom - VAR_5.top;

    FUNC_3(VAR_8, VAR_2,
                 VAR_4.left, VAR_6,
                 VAR_4.right - VAR_4.left,
                 VAR_4.bottom - VAR_6, 0);

}
