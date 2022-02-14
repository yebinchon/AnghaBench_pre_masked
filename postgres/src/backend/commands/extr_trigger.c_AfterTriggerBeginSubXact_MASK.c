
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int maxtransdepth; int firing_counter; TYPE_1__* trans_stack; int query_depth; int events; } ;
struct TYPE_4__ {int firing_counter; int query_depth; int events; int * state; } ;
typedef TYPE_1__ AfterTriggersTransData ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,int) ;
 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 scalar_t__ FUNC_2 (TYPE_1__*,int) ;

void
FUNC_3(void)
{
 int VAR_2 = FUNC_0();






 while (VAR_2 >= VAR_1.maxtransdepth)
 {
  if (VAR_1.maxtransdepth == 0)
  {

   VAR_1.trans_stack = (AfterTriggersTransData *)
    FUNC_1(VAR_0,
           8 * sizeof(AfterTriggersTransData));
   VAR_1.maxtransdepth = 8;
  }
  else
  {

   int VAR_3 = VAR_1.maxtransdepth * 2;

   VAR_1.trans_stack = (AfterTriggersTransData *)
    FUNC_2(VAR_1.trans_stack,
       VAR_3 * sizeof(AfterTriggersTransData));
   VAR_1.maxtransdepth = VAR_3;
  }
 }






 VAR_1.trans_stack[VAR_2].state = ((void*)0);
 VAR_1.trans_stack[VAR_2].events = VAR_1.events;
 VAR_1.trans_stack[VAR_2].query_depth = VAR_1.query_depth;
 VAR_1.trans_stack[VAR_2].firing_counter = VAR_1.firing_counter;
}
