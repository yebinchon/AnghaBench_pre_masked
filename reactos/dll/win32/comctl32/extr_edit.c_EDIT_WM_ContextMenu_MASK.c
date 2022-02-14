
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_12__ {scalar_t__ selection_start; scalar_t__ selection_end; int style; int flags; int hwndSelf; } ;
struct TYPE_11__ {int x; int y; } ;
struct TYPE_10__ {int left; int right; int top; int bottom; } ;
typedef TYPE_1__ RECT ;
typedef TYPE_2__ POINT ;
typedef void* INT ;
typedef int HMENU ;
typedef TYPE_3__ EDITSTATE ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*,scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 (int ,TYPE_1__*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_10 (scalar_t__,scalar_t__) ;
 int FUNC_11 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_12 (int ,int,int,int,int ,int ,int *) ;
 scalar_t__ FUNC_13 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_14(EDITSTATE *VAR_11, INT VAR_12, INT VAR_13)
{
    HMENU VAR_14 = FUNC_9(FUNC_6("user32.dll"), "EDITMENU");
    HMENU VAR_15 = FUNC_7(VAR_14, 0);
    UINT VAR_16 = VAR_11->selection_start;
    UINT VAR_17 = VAR_11->selection_end;
    UINT VAR_18;
    POINT VAR_19;

    FUNC_10(VAR_16, VAR_17);


    FUNC_4(VAR_15, 0, VAR_4 | (FUNC_3(VAR_11) && !(VAR_11->style & VAR_3) ? VAR_5 : VAR_6));

    FUNC_4(VAR_15, 2, VAR_4 | ((VAR_17 - VAR_16) && !(VAR_11->style & VAR_2) && !(VAR_11->style & VAR_3) ? VAR_5 : VAR_6));

    FUNC_4(VAR_15, 3, VAR_4 | ((VAR_17 - VAR_16) && !(VAR_11->style & VAR_2) ? VAR_5 : VAR_6));

    FUNC_4(VAR_15, 4, VAR_4 | (FUNC_8(VAR_0) && !(VAR_11->style & VAR_3) ? VAR_5 : VAR_6));

    FUNC_4(VAR_15, 5, VAR_4 | ((VAR_17 - VAR_16) && !(VAR_11->style & VAR_3) ? VAR_5 : VAR_6));

    FUNC_4(VAR_15, 7, VAR_4 | (VAR_16 || (VAR_17 != FUNC_13(VAR_11)) ? VAR_5 : VAR_6));

    VAR_19.x = VAR_12;
    VAR_19.y = VAR_13;

    if (VAR_19.x == -1 && VAR_19.y == -1)
    {
        RECT VAR_20;


        FUNC_5(VAR_11->hwndSelf, &VAR_20);
        VAR_19.x = VAR_20.left + (VAR_20.right - VAR_20.left) / 2;
        VAR_19.y = VAR_20.top + (VAR_20.bottom - VAR_20.top) / 2;
        FUNC_0(VAR_11->hwndSelf, &VAR_19);
    }

    if (!(VAR_11->flags & VAR_1))
        FUNC_11(VAR_11->hwndSelf);

    VAR_18 = FUNC_12(VAR_15, VAR_7 | VAR_10 | VAR_9 | VAR_8,
            VAR_19.x, VAR_19.y, 0, VAR_11->hwndSelf, ((void*)0));

    if (VAR_18)
        FUNC_2(VAR_11, VAR_18);

    FUNC_1(VAR_14);
}
