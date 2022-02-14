
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct choke_sched_data {unsigned int tail; unsigned int head; unsigned int tab_mask; } ;



__attribute__((used)) static unsigned int FUNC_0(const struct choke_sched_data *VAR_0)
{
 return (VAR_0->tail - VAR_0->head) & VAR_0->tab_mask;
}
