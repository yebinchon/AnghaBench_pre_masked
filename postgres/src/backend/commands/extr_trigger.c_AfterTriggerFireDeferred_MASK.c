
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * head; } ;
struct TYPE_6__ {int query_depth; int firing_counter; TYPE_1__ events; } ;
typedef int CommandId ;
typedef TYPE_1__ AfterTriggerEventList ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int ,int *,int) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int *,int) ;
 TYPE_2__ VAR_0 ;

void
FUNC_6(void)
{
 AfterTriggerEventList *VAR_1;
 bool VAR_2 = 0;


 FUNC_0(VAR_0.query_depth == -1);






 VAR_1 = &VAR_0.events;
 if (VAR_1->head != ((void*)0))
 {
  FUNC_3(FUNC_1());
  VAR_2 = 1;
 }





 while (FUNC_5(VAR_1, ((void*)0), 0))
 {
  CommandId VAR_3 = VAR_0.firing_counter++;

  if (FUNC_4(VAR_1, VAR_3, ((void*)0), 1))
   break;
 }






 if (VAR_2)
  FUNC_2();
}
