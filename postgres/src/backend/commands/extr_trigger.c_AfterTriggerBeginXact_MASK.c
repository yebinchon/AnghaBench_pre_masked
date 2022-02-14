
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * head; } ;
struct TYPE_4__ {int query_depth; scalar_t__ maxquerydepth; scalar_t__ maxtransdepth; int * trans_stack; TYPE_1__ events; int * event_cxt; int * query_stack; int * state; scalar_t__ firing_counter; } ;
typedef scalar_t__ CommandId ;


 int FUNC_0 (int) ;
 TYPE_2__ VAR_0 ;

void
FUNC_1(void)
{



 VAR_0.firing_counter = (CommandId) 1;
 VAR_0.query_depth = -1;






 FUNC_0(VAR_0.state == ((void*)0));
 FUNC_0(VAR_0.query_stack == ((void*)0));
 FUNC_0(VAR_0.maxquerydepth == 0);
 FUNC_0(VAR_0.event_cxt == ((void*)0));
 FUNC_0(VAR_0.events.head == ((void*)0));
 FUNC_0(VAR_0.trans_stack == ((void*)0));
 FUNC_0(VAR_0.maxtransdepth == 0);
}
