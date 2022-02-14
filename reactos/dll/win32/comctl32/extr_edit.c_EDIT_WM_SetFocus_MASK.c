
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_6__ {int flags; int style; int hwndSelf; int selection_end; int line_height; int selection_start; } ;
typedef scalar_t__ HTHEME ;
typedef TYPE_1__ EDITSTATE ;


 int FUNC_0 (int ,int ,int,int ) ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int ,int *,int *,int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(HTHEME VAR_8, EDITSTATE *VAR_9)
{
    UINT VAR_10 = VAR_6 | VAR_7;

    VAR_9->flags |= VAR_1;

    if (!(VAR_9->style & VAR_3))
        FUNC_1(VAR_9, VAR_9->selection_start, VAR_9->selection_end);

    FUNC_0(VAR_9->hwndSelf, 0, 1, VAR_9->line_height);
    FUNC_3(VAR_9, VAR_9->selection_end, VAR_9->flags & VAR_0);
    FUNC_5(VAR_9->hwndSelf);
    FUNC_2(VAR_9, VAR_2);

    if (VAR_8)
        VAR_10 |= VAR_5 | VAR_4;

    FUNC_4(VAR_9->hwndSelf, ((void*)0), ((void*)0), VAR_10);
}
