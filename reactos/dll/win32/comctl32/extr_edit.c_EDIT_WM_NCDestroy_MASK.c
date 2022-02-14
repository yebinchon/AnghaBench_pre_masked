
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ hloc32W; scalar_t__ hlocapp; struct TYPE_6__* undo_text; int hwndSelf; struct TYPE_6__* next; struct TYPE_6__* first_line_def; } ;
typedef int LRESULT ;
typedef TYPE_1__ LINEDEF ;
typedef int HTHEME ;
typedef TYPE_1__ EDITSTATE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static LRESULT FUNC_6(EDITSTATE *VAR_0)
{
    LINEDEF *VAR_1, *VAR_2;
    HTHEME VAR_3;

    VAR_3 = FUNC_2(VAR_0->hwndSelf);
    FUNC_0(VAR_3);


    if (VAR_0->hloc32W && (VAR_0->hloc32W != VAR_0->hlocapp))
        FUNC_3(VAR_0->hloc32W);

    FUNC_1(VAR_0);

    VAR_1 = VAR_0->first_line_def;
    while (VAR_1)
    {
        VAR_2 = VAR_1->next;
        FUNC_5(VAR_1);
        VAR_1 = VAR_2;
    }

    FUNC_4( VAR_0->hwndSelf, 0, 0 );
    FUNC_5(VAR_0->undo_text);
    FUNC_5(VAR_0);

    return 0;
}
