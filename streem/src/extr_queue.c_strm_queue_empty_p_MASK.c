
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strm_queue {scalar_t__ head; scalar_t__ tail; } ;



int
FUNC_0(struct strm_queue* VAR_0)
{
  if (VAR_0->head == VAR_0->tail) return 1;
  return 0;
}
