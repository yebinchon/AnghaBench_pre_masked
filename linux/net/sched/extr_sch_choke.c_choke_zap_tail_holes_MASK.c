
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct choke_sched_data {size_t tail; int tab_mask; int head; int ** tab; } ;



__attribute__((used)) static void FUNC_0(struct choke_sched_data *VAR_0)
{
 do {
  VAR_0->tail = (VAR_0->tail - 1) & VAR_0->tab_mask;
  if (VAR_0->head == VAR_0->tail)
   break;
 } while (VAR_0->tab[VAR_0->tail] == ((void*)0));
}
