
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct deferred_action {int dummy; } ;
struct action_fifo {int head; struct deferred_action* fifo; } ;


 int VAR_0 ;

__attribute__((used)) static struct deferred_action *FUNC_0(struct action_fifo *VAR_1)
{
 if (VAR_1->head >= VAR_0 - 1)
  return ((void*)0);

 return &VAR_1->fifo[VAR_1->head++];
}
