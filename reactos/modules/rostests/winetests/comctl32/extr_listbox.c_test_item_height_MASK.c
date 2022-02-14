
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


 int FUNC_0 (int ,char*,int ,int ,int ,int,int,int *,int *,int *,int ) ;
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
 int VAR_5 ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int,char*,...) ;

__attribute__((used)) static void FUNC_9(void)
{
    INT VAR_6;
    TEXTMETRICA VAR_7;
    HFONT VAR_8;
    HWND VAR_9;
    HDC VAR_10;

    VAR_9 = FUNC_7 (0, 0);
    FUNC_8 ((VAR_10 = FUNC_3( VAR_9, 0, VAR_0 )) != 0, "Can't get hdc\n");
    FUNC_8 ((VAR_8 = FUNC_2(VAR_10, VAR_3)) != 0, "Can't get the current font\n");
    FUNC_8 (FUNC_4( VAR_10, &VAR_7 ), "Can't read font metrics\n");
    FUNC_5( VAR_9, VAR_10);

    FUNC_8 (FUNC_6(VAR_9, VAR_5, (WPARAM)VAR_8, 0) == 0, "Can't set font\n");

    VAR_6 = FUNC_6(VAR_9, VAR_2, 0, 0);
    FUNC_8 (VAR_6 == VAR_7.tmHeight, "Item height wrong, got %d, expecting %d\n", VAR_6, VAR_7.tmHeight);

    FUNC_1 (VAR_9);

    VAR_9 = FUNC_0(VAR_4, "TestList", VAR_1, 0, 0, 100, 100, ((void*)0), ((void*)0), ((void*)0), 0);

    VAR_6 = FUNC_6(VAR_9, VAR_2, 0, 0);
    FUNC_8(VAR_6 > 0 && VAR_6 <= VAR_7.tmHeight, "Unexpected item height %d, expected %d.\n",
        VAR_6, VAR_7.tmHeight);
    VAR_6 = FUNC_6(VAR_9, VAR_2, 5, 0);
    FUNC_8(VAR_6 > 0 && VAR_6 <= VAR_7.tmHeight, "Unexpected item height %d, expected %d.\n",
        VAR_6, VAR_7.tmHeight);
    VAR_6 = FUNC_6(VAR_9, VAR_2, -5, 0);
    FUNC_8(VAR_6 > 0 && VAR_6 <= VAR_7.tmHeight, "Unexpected item height %d, expected %d.\n",
        VAR_6, VAR_7.tmHeight);

    FUNC_1 (VAR_9);
}
