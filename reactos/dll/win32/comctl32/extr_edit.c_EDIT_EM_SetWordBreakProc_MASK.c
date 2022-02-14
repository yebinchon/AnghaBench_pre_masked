
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ word_break_proc; int style; } ;
typedef scalar_t__ EDITWORDBREAKPROCW ;
typedef TYPE_1__ EDITSTATE ;


 int FUNC_0 (TYPE_1__*,int ,int ,int ,int *) ;
 int FUNC_1 (TYPE_1__*,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(EDITSTATE *VAR_3, EDITWORDBREAKPROCW VAR_4)
{
 if (VAR_3->word_break_proc == VAR_4)
  return;

 VAR_3->word_break_proc = VAR_4;

 if ((VAR_3->style & VAR_1) && !(VAR_3->style & VAR_0)) {
  FUNC_0(VAR_3, 0, FUNC_2(VAR_3), 0, ((void*)0));
  FUNC_1(VAR_3, ((void*)0), VAR_2);
 }
}
