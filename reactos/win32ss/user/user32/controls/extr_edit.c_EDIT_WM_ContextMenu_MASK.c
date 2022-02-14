
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_10__ {scalar_t__ selection_start; scalar_t__ selection_end; int style; int flags; int hwndSelf; } ;
struct TYPE_9__ {int left; int right; int top; int bottom; } ;
typedef TYPE_1__ RECT ;
typedef int POINT ;
typedef int INT ;
typedef int HMENU ;
typedef TYPE_2__ EDITSTATE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (int ,TYPE_1__*) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_8 (int ,int ,int *,int) ;
 int FUNC_9 (scalar_t__,scalar_t__) ;
 int FUNC_10 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_11 (int ,int,int,int,int ,int ,int *) ;
 int FUNC_12 (int ,int ,int *,TYPE_1__*) ;
 scalar_t__ FUNC_13 (TYPE_2__*) ;
 int VAR_12 ;

__attribute__((used)) static void FUNC_14(EDITSTATE *VAR_13, INT VAR_14, INT VAR_15)
{
 HMENU VAR_16 = FUNC_7(VAR_12, "EDITMENU");
 HMENU VAR_17 = FUNC_5(VAR_16, 0);
 UINT VAR_18 = VAR_13->selection_start;
 UINT VAR_19 = VAR_13->selection_end;
 UINT VAR_20;

 FUNC_9(VAR_18, VAR_19);


 FUNC_3(VAR_17, 0, VAR_5 | (FUNC_2(VAR_13) && !(VAR_13->style & VAR_4) ? VAR_6 : VAR_7));

 FUNC_3(VAR_17, 2, VAR_5 | ((VAR_19 - VAR_18) && !(VAR_13->style & VAR_3) && !(VAR_13->style & VAR_4) ? VAR_6 : VAR_7));

 FUNC_3(VAR_17, 3, VAR_5 | ((VAR_19 - VAR_18) && !(VAR_13->style & VAR_3) ? VAR_6 : VAR_7));

 FUNC_3(VAR_17, 4, VAR_5 | (FUNC_6(VAR_0) && !(VAR_13->style & VAR_4) ? VAR_6 : VAR_7));

 FUNC_3(VAR_17, 5, VAR_5 | ((VAR_19 - VAR_18) && !(VAR_13->style & VAR_4) ? VAR_6 : VAR_7));

 FUNC_3(VAR_17, 7, VAR_5 | (VAR_18 || (VAR_19 != FUNC_13(VAR_13)) ? VAR_6 : VAR_7));

        if (VAR_14 == -1 && VAR_15 == -1)
        {
            RECT VAR_21;






            FUNC_12( VAR_13->hwndSelf, VAR_1, ((void*)0), &VAR_21 );

            VAR_14 = VAR_21.left + (VAR_21.right - VAR_21.left) / 2;
            VAR_15 = VAR_21.top + (VAR_21.bottom - VAR_21.top) / 2;
        }

 if (!(VAR_13->flags & VAR_2))
            FUNC_10(VAR_13->hwndSelf);

 VAR_20 = FUNC_11(VAR_17, VAR_8 | VAR_11 | VAR_10 | VAR_9,
        VAR_14, VAR_15, 0, VAR_13->hwndSelf, ((void*)0));

 if (VAR_20)
     FUNC_1(VAR_13, VAR_20);

 FUNC_0(VAR_16);
}
