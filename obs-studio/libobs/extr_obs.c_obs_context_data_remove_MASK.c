
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct obs_context_data {int * mutex; TYPE_1__** prev_next; TYPE_1__* next; } ;
struct TYPE_2__ {struct TYPE_2__** prev_next; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct obs_context_data *VAR_0)
{
 if (VAR_0 && VAR_0->mutex) {
  FUNC_0(VAR_0->mutex);
  if (VAR_0->prev_next)
   *VAR_0->prev_next = VAR_0->next;
  if (VAR_0->next)
   VAR_0->next->prev_next = VAR_0->prev_next;
  FUNC_1(VAR_0->mutex);

  VAR_0->mutex = ((void*)0);
 }
}
