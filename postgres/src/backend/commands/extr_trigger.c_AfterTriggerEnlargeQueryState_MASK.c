
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int maxquerydepth; int query_depth; TYPE_2__* query_stack; } ;
struct TYPE_5__ {int * tailfree; int * tail; int * head; } ;
struct TYPE_6__ {int tables; int * fdw_tuplestore; TYPE_1__ events; } ;
typedef TYPE_2__ AfterTriggersQueryData ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__ VAR_2 ;
 scalar_t__ FUNC_3 (TYPE_2__*,int) ;

__attribute__((used)) static void
FUNC_4(void)
{
 int VAR_3 = VAR_2.maxquerydepth;

 FUNC_0(VAR_2.query_depth >= VAR_2.maxquerydepth);

 if (VAR_2.maxquerydepth == 0)
 {
  int VAR_4 = FUNC_1(VAR_2.query_depth + 1, 8);

  VAR_2.query_stack = (AfterTriggersQueryData *)
   FUNC_2(VAR_1,
          VAR_4 * sizeof(AfterTriggersQueryData));
  VAR_2.maxquerydepth = VAR_4;
 }
 else
 {

  int VAR_5 = VAR_2.maxquerydepth;
  int VAR_6 = FUNC_1(VAR_2.query_depth + 1,
         VAR_5 * 2);

  VAR_2.query_stack = (AfterTriggersQueryData *)
   FUNC_3(VAR_2.query_stack,
      VAR_6 * sizeof(AfterTriggersQueryData));
  VAR_2.maxquerydepth = VAR_6;
 }


 while (VAR_3 < VAR_2.maxquerydepth)
 {
  AfterTriggersQueryData *VAR_7 = &VAR_2.query_stack[VAR_3];

  VAR_7->events.head = ((void*)0);
  VAR_7->events.tail = ((void*)0);
  VAR_7->events.tailfree = ((void*)0);
  VAR_7->fdw_tuplestore = ((void*)0);
  VAR_7->tables = VAR_0;

  ++VAR_3;
 }
}
