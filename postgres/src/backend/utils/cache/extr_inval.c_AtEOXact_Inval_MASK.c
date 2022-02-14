
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int my_level; int PriorCmdInvalidMsgs; scalar_t__ RelcacheInitFileInval; int CurrentCmdInvalidMsgs; int * parent; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int VAR_1 ;
 int * VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__* VAR_4 ;

void
FUNC_6(bool VAR_5)
{

 if (VAR_4 == ((void*)0))
  return;


 FUNC_1(VAR_4->my_level == 1 && VAR_4->parent == ((void*)0));

 if (VAR_5)
 {





  if (VAR_4->RelcacheInitFileInval)
   FUNC_5();

  FUNC_0(&VAR_4->PriorCmdInvalidMsgs,
           &VAR_4->CurrentCmdInvalidMsgs);

  FUNC_3(&VAR_4->PriorCmdInvalidMsgs,
           VAR_1);

  if (VAR_4->RelcacheInitFileInval)
   FUNC_4();
 }
 else
 {
  FUNC_2(&VAR_4->PriorCmdInvalidMsgs,
         VAR_0);
 }


 VAR_4 = ((void*)0);
 VAR_2 = ((void*)0);
 VAR_3 = 0;
}
