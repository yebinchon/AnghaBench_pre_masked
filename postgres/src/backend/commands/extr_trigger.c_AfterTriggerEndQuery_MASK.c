
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int * head; int * tail; } ;
struct TYPE_8__ {size_t query_depth; size_t maxquerydepth; TYPE_1__* query_stack; int firing_counter; int events; } ;
struct TYPE_7__ {TYPE_3__ events; } ;
typedef int EState ;
typedef int CommandId ;
typedef TYPE_1__ AfterTriggersQueryData ;
typedef int AfterTriggerEventChunk ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_3__*,int ,int *,int) ;
 scalar_t__ FUNC_4 (TYPE_3__*,int *,int) ;
 TYPE_2__ VAR_0 ;

void
FUNC_5(EState *VAR_1)
{
 AfterTriggersQueryData *VAR_2;


 FUNC_1(VAR_0.query_depth >= 0);





 if (VAR_0.query_depth >= VAR_0.maxquerydepth)
 {
  VAR_0.query_depth--;
  return;
 }
 VAR_2 = &VAR_0.query_stack[VAR_0.query_depth];

 for (;;)
 {
  if (FUNC_4(&VAR_2->events, &VAR_0.events, 1))
  {
   CommandId VAR_3 = VAR_0.firing_counter++;
   AfterTriggerEventChunk *VAR_4 = VAR_2->events.tail;

   if (FUNC_3(&VAR_2->events, VAR_3, VAR_1, 0))
    break;
   VAR_2 = &VAR_0.query_stack[VAR_0.query_depth];
   FUNC_1(VAR_4 != ((void*)0));
   while (VAR_2->events.head != VAR_4)
    FUNC_2(VAR_2);
  }
  else
   break;
 }


 FUNC_0(&VAR_0.query_stack[VAR_0.query_depth]);

 VAR_0.query_depth--;
}
