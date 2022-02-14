
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ hwndSelf; int region_posx; int region_posy; int flags; int selection_end; int selection_start; int bCaptureState; } ;
typedef int LRESULT ;
typedef scalar_t__ INT ;
typedef TYPE_1__ EDITSTATE ;
typedef int BOOL ;


 scalar_t__ FUNC_0 (TYPE_1__*,scalar_t__,scalar_t__,int *) ;
 int FUNC_1 (TYPE_1__*,scalar_t__*,scalar_t__*) ;
 int FUNC_2 (TYPE_1__*,int ,scalar_t__,int ) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 () ;

__attribute__((used)) static LRESULT FUNC_5(EDITSTATE *VAR_1, INT VAR_2, INT VAR_3)
{
 INT VAR_4;
 BOOL VAR_5;
 INT VAR_6, VAR_7;




        if (!VAR_1->bCaptureState || FUNC_4() != VAR_1->hwndSelf)
  return 0;





 VAR_6 = VAR_2; VAR_7 = VAR_3;
 FUNC_1(VAR_1, &VAR_2, &VAR_3);
 VAR_1->region_posx = (VAR_6 < VAR_2) ? -1 : ((VAR_6 > VAR_2) ? 1 : 0);
 VAR_1->region_posy = (VAR_7 < VAR_3) ? -1 : ((VAR_7 > VAR_3) ? 1 : 0);
 VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3, &VAR_5);
 FUNC_2(VAR_1, VAR_1->selection_start, VAR_4, VAR_5);
 FUNC_3(VAR_1,VAR_1->selection_end,VAR_1->flags & VAR_0);
 return 0;
}
