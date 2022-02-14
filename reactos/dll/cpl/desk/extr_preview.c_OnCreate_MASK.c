
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_4__ {int Scheme; int lpButText; int lpMessText; int lpMessBox; int lpWinTxt; int lpAct; int lpInAct; int hMenu; scalar_t__ hClientFont; } ;
typedef TYPE_1__* PPREVIEW_DATA ;
typedef int HWND ;
typedef scalar_t__ HFONT ;
typedef int COLOR_SCHEME ;


 int FUNC_0 (int *,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_7 (int ,TYPE_1__*,int *) ;
 int VAR_11 ;

__attribute__((used)) static VOID
FUNC_8(HWND VAR_12, PPREVIEW_DATA VAR_13)
{
    COLOR_SCHEME *VAR_14;

    VAR_13->hClientFont = (HFONT)FUNC_2(VAR_0);


    VAR_13->hMenu = FUNC_5(VAR_11, FUNC_6(VAR_1));
    FUNC_1(VAR_13->hMenu,
                   1, VAR_8 | VAR_9);
    FUNC_3(VAR_12, VAR_13->hMenu,
                   2, VAR_8 | VAR_10);




    FUNC_0(&VAR_13->lpInAct, VAR_11, VAR_4);
    FUNC_0(&VAR_13->lpAct, VAR_11, VAR_2);
    FUNC_0(&VAR_13->lpWinTxt, VAR_11, VAR_7);
    FUNC_0(&VAR_13->lpMessBox, VAR_11, VAR_5);
    FUNC_0(&VAR_13->lpMessText, VAR_11, VAR_6);
    FUNC_0(&VAR_13->lpButText, VAR_11, VAR_3);

    VAR_14 = &VAR_13->Scheme;
    FUNC_4(VAR_14);

    FUNC_7(VAR_12, VAR_13, VAR_14);
}
