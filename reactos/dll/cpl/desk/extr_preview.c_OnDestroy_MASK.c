
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_3__ {scalar_t__ lpButText; scalar_t__ lpMessText; scalar_t__ lpMessBox; scalar_t__ lpWinTxt; scalar_t__ lpAct; scalar_t__ lpInAct; int hMenu; int hMessageFont; int hMenuFont; int hCaptionFont; int hbrWindow; int hbrDesktop; int hbrScrollbar; } ;
typedef TYPE_1__* PPREVIEW_DATA ;
typedef int HLOCAL ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static VOID
FUNC_3(PPREVIEW_DATA VAR_0)
{
    FUNC_0(VAR_0->hbrScrollbar);
    FUNC_0(VAR_0->hbrDesktop);
    FUNC_0(VAR_0->hbrWindow);

    FUNC_0(VAR_0->hCaptionFont);
    FUNC_0(VAR_0->hMenuFont);
    FUNC_0(VAR_0->hMessageFont);

    FUNC_1(VAR_0->hMenu);

    FUNC_2((HLOCAL)VAR_0->lpInAct);
    FUNC_2((HLOCAL)VAR_0->lpAct);
    FUNC_2((HLOCAL)VAR_0->lpWinTxt);
    FUNC_2((HLOCAL)VAR_0->lpMessBox);
    FUNC_2((HLOCAL)VAR_0->lpMessText);
    FUNC_2((HLOCAL)VAR_0->lpButText);
}
