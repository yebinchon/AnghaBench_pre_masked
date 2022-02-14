
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct deferred_action {int dummy; } ;
struct action_fifo {int tail; struct deferred_action* fifo; } ;


 scalar_t__ FUNC_0 (struct action_fifo*) ;

__attribute__((used)) static struct deferred_action *FUNC_1(struct action_fifo *VAR_0)
{
 if (FUNC_0(VAR_0))
  return ((void*)0);

 return &VAR_0->fifo[VAR_0->tail++];
}
