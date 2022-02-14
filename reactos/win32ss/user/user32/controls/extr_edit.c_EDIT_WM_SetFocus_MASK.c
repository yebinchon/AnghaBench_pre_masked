
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int flags; int style; int hwndSelf; int selection_end; int line_height; int selection_start; } ;
typedef int HDC ;
typedef TYPE_1__ EDITSTATE ;


 int FUNC_0 (int ,int ,int,int ) ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(EDITSTATE *VAR_5)
{
 VAR_5->flags |= VAR_1;

        if (!(VAR_5->style & VAR_4))
            FUNC_1(VAR_5, VAR_5->selection_start, VAR_5->selection_end);


        if (FUNC_6(VAR_5->hwndSelf) && !(VAR_5->style & VAR_3))
        {
            HDC VAR_6 = FUNC_5(VAR_5->hwndSelf);
            FUNC_4(VAR_5, VAR_6);
            FUNC_7(VAR_5->hwndSelf, VAR_6);
        }

 FUNC_0(VAR_5->hwndSelf, 0, 1, VAR_5->line_height);
 FUNC_3(VAR_5, VAR_5->selection_end,
    VAR_5->flags & VAR_0);
 FUNC_8(VAR_5->hwndSelf);
 FUNC_2(VAR_5, VAR_2);
}
