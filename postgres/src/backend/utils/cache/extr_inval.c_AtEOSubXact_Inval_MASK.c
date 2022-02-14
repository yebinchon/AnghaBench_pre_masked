
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int my_level; int RelcacheInitFileInval; struct TYPE_4__* parent; int PriorCmdInvalidMsgs; } ;
typedef TYPE_1__ TransInvalidationInfo ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_0 ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 TYPE_1__* VAR_1 ;

void
FUNC_6(bool VAR_2)
{
 int VAR_3;
 TransInvalidationInfo *VAR_4 = VAR_1;


 if (VAR_4 == ((void*)0))
  return;


 VAR_3 = FUNC_3();
 if (VAR_4->my_level != VAR_3)
 {
  FUNC_1(VAR_4->my_level < VAR_3);
  return;
 }

 if (VAR_2)
 {

  FUNC_2();







  if (VAR_4->parent == ((void*)0) || VAR_4->parent->my_level < VAR_3 - 1)
  {
   VAR_4->my_level--;
   return;
  }


  FUNC_0(&VAR_4->parent->PriorCmdInvalidMsgs,
           &VAR_4->PriorCmdInvalidMsgs);


  if (VAR_4->RelcacheInitFileInval)
   VAR_4->parent->RelcacheInitFileInval = 1;


  VAR_1 = VAR_4->parent;


  FUNC_5(VAR_4);
 }
 else
 {
  FUNC_4(&VAR_4->PriorCmdInvalidMsgs,
         VAR_0);


  VAR_1 = VAR_4->parent;


  FUNC_5(VAR_4);
 }
}
