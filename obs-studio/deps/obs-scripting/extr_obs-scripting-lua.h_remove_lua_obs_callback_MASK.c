
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lua_obs_callback {int reg_idx; int script; int base; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline void FUNC_2(struct lua_obs_callback *VAR_1)
{
 FUNC_1(&VAR_1->base);
 FUNC_0(VAR_1->script, VAR_0, VAR_1->reg_idx);
}
