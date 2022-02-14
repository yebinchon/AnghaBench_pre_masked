
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * tailfree; int * tail; int * head; } ;
struct TYPE_4__ {int query_depth; int * state; scalar_t__ maxquerydepth; int * query_stack; scalar_t__ maxtransdepth; int * trans_stack; TYPE_1__ events; int * event_cxt; } ;


 int FUNC_0 (int *) ;
 TYPE_2__ VAR_0 ;

void
FUNC_1(bool VAR_1)
{
 if (VAR_0.event_cxt)
 {
  FUNC_0(VAR_0.event_cxt);
  VAR_0.event_cxt = ((void*)0);
  VAR_0.events.head = ((void*)0);
  VAR_0.events.tail = ((void*)0);
  VAR_0.events.tailfree = ((void*)0);
 }






 VAR_0.trans_stack = ((void*)0);
 VAR_0.maxtransdepth = 0;







 VAR_0.query_stack = ((void*)0);
 VAR_0.maxquerydepth = 0;
 VAR_0.state = ((void*)0);


 VAR_0.query_depth = -1;
}
