
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ hloc32W; scalar_t__ hlocapp; scalar_t__ hloc32A; struct TYPE_6__* undo_text; int hwndSelf; struct TYPE_6__* next; struct TYPE_6__* first_line_def; } ;
typedef int LRESULT ;
typedef TYPE_1__ LINEDEF ;
typedef TYPE_1__ EDITSTATE ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,TYPE_1__*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static LRESULT FUNC_5(EDITSTATE *VAR_0)
{
 LINEDEF *VAR_1, *VAR_2;


        if (VAR_0->hloc32W && (VAR_0->hloc32W != VAR_0->hlocapp)) {
  FUNC_3(VAR_0->hloc32W);
 }
        if (VAR_0->hloc32A && (VAR_0->hloc32A != VAR_0->hlocapp)) {
  FUNC_3(VAR_0->hloc32A);
 }
 FUNC_0(VAR_0);
 VAR_1 = VAR_0->first_line_def;
 while (VAR_1)
 {
  VAR_2 = VAR_1->next;
  FUNC_2(FUNC_1(), 0, VAR_1);
  VAR_1 = VAR_2;
 }

 FUNC_4( VAR_0->hwndSelf, 0, 0 );
 FUNC_2(FUNC_1(), 0, VAR_0->undo_text);
 FUNC_2(FUNC_1(), 0, VAR_0);

 return 0;
}
