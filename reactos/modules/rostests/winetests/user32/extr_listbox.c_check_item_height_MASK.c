
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WPARAM ;
struct TYPE_3__ {scalar_t__ tmHeight; } ;
typedef TYPE_1__ TEXTMETRICA ;
typedef scalar_t__ INT ;
typedef int HWND ;
typedef scalar_t__ HFONT ;
typedef int HDC ;


 int FUNC_0 (char*,char*,int ,int ,int ,int,int,int *,int *,int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ,int ,int,int ) ;
 int VAR_4 ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int,char*,...) ;

__attribute__((used)) static void FUNC_9(void)
{
    HWND VAR_5;
    HDC VAR_6;
    HFONT VAR_7;
    TEXTMETRICA VAR_8;
    INT VAR_9;

    VAR_5 = FUNC_7 (0, 0);
    FUNC_8 ((VAR_6 = FUNC_3( VAR_5, 0, VAR_0 )) != 0, "Can't get hdc\n");
    FUNC_8 ((VAR_7 = FUNC_2(VAR_6, VAR_3)) != 0, "Can't get the current font\n");
    FUNC_8 (FUNC_4( VAR_6, &VAR_8 ), "Can't read font metrics\n");
    FUNC_5( VAR_5, VAR_6);

    FUNC_8 (FUNC_6(VAR_5, VAR_4, (WPARAM)VAR_7, 0) == 0, "Can't set font\n");

    VAR_9 = FUNC_6(VAR_5, VAR_2, 0, 0);
    FUNC_8 (VAR_9 == VAR_8.tmHeight, "Item height wrong, got %d, expecting %d\n", VAR_9, VAR_8.tmHeight);

    FUNC_1 (VAR_5);

    VAR_5 = FUNC_0("LISTBOX", "TestList", VAR_1,
                         0, 0, 100, 100, ((void*)0), ((void*)0), ((void*)0), 0);
    VAR_9 = FUNC_6(VAR_5, VAR_2, 0, 0);
    FUNC_8(VAR_9 == VAR_8.tmHeight, "itemHeight %d\n", VAR_9);
    VAR_9 = FUNC_6(VAR_5, VAR_2, 5, 0);
    FUNC_8(VAR_9 == VAR_8.tmHeight, "itemHeight %d\n", VAR_9);
    VAR_9 = FUNC_6(VAR_5, VAR_2, -5, 0);
    FUNC_8(VAR_9 == VAR_8.tmHeight, "itemHeight %d\n", VAR_9);
    FUNC_1 (VAR_5);
}
