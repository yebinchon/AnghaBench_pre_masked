
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsnd_kctrl_cfg {int val; } ;
struct rsnd_kctrl_cfg_m {struct rsnd_kctrl_cfg cfg; int val; } ;



struct rsnd_kctrl_cfg *FUNC_0(struct rsnd_kctrl_cfg_m *VAR_0)
{
 VAR_0->cfg.val = VAR_0->val;

 return &VAR_0->cfg;
}
