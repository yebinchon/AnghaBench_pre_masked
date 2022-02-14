
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct python_obs_timer {struct python_obs_timer* next; struct python_obs_timer** p_prev_next; } ;



__attribute__((used)) static inline void FUNC_0(struct python_obs_timer *VAR_0)
{
 struct python_obs_timer *VAR_1 = VAR_0->next;
 if (VAR_1)
  VAR_1->p_prev_next = VAR_0->p_prev_next;
 *VAR_0->p_prev_next = VAR_0->next;
}
