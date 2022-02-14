
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lua_obs_timer {struct lua_obs_timer* next; struct lua_obs_timer** p_prev_next; } ;


 struct lua_obs_timer* VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;

__attribute__((used)) static inline void FUNC_2(struct lua_obs_timer *VAR_2)
{
 FUNC_0(&VAR_1);

 struct lua_obs_timer *VAR_3 = VAR_0;
 VAR_2->next = VAR_3;
 VAR_2->p_prev_next = &VAR_0;
 if (VAR_3)
  VAR_3->p_prev_next = &VAR_2->next;
 VAR_0 = VAR_2;

 FUNC_1(&VAR_1);
}
