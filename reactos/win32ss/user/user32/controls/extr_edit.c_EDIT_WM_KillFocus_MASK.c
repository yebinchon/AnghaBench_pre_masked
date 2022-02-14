
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int style; int hwndSelf; int * hwndListBox; scalar_t__ wheelDeltaRemainder; int selection_end; int selection_start; int flags; } ;
typedef int LRESULT ;
typedef int LONG ;
typedef int HWND ;
typedef TYPE_1__ EDITSTATE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int VAR_6 ;

__attribute__((used)) static LRESULT FUNC_6(EDITSTATE *VAR_7)
{
 HWND VAR_8;
 LONG VAR_9;

 VAR_7->flags &= ~VAR_2;
 FUNC_0();
 if(!(VAR_7->style & VAR_4))
  FUNC_1(VAR_7, VAR_7->selection_start, VAR_7->selection_end);


 VAR_7->wheelDeltaRemainder = 0;

 if (VAR_7->hwndListBox == ((void*)0))
  FUNC_2(VAR_7, VAR_3);
 else
 {
  VAR_8 = FUNC_3(VAR_7->hwndSelf);
  VAR_9 = FUNC_4(VAR_8, VAR_5);
  if ((VAR_9 & VAR_0) || (VAR_9 & VAR_1))
   FUNC_5(VAR_8, VAR_6, 0, 0);
 }

 return 0;
}
