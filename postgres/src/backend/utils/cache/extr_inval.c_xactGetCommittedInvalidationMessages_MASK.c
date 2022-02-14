
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int my_level; int RelcacheInitFileInval; int PriorCmdInvalidMsgs; int CurrentCmdInvalidMsgs; int * parent; } ;
typedef int SharedInvalidationMessage ;
typedef int MemoryContext ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;
 int * VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__* VAR_4 ;

int
FUNC_3(SharedInvalidationMessage **VAR_5,
          bool *VAR_6)
{
 MemoryContext VAR_7;


 if (VAR_4 == ((void*)0))
 {
  *VAR_6 = 0;
  *VAR_5 = ((void*)0);
  return 0;
 }


 FUNC_0(VAR_4->my_level == 1 && VAR_4->parent == ((void*)0));






 *VAR_6 = VAR_4->RelcacheInitFileInval;
 VAR_7 = FUNC_1(VAR_0);

 FUNC_2(&VAR_4->CurrentCmdInvalidMsgs,
          VAR_1);
 FUNC_2(&VAR_4->PriorCmdInvalidMsgs,
          VAR_1);
 FUNC_1(VAR_7);

 FUNC_0(!(VAR_3 > 0 &&
    VAR_2 == ((void*)0)));

 *VAR_5 = VAR_2;

 return VAR_3;
}
