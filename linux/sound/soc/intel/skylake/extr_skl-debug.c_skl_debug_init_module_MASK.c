
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int name; } ;
struct skl_module_cfg {int dummy; } ;
struct skl_debug {int modules; } ;


 int FUNC_0 (int ,int,int ,struct skl_module_cfg*,int *) ;
 int VAR_0 ;

void FUNC_1(struct skl_debug *VAR_1,
   struct snd_soc_dapm_widget *VAR_2,
   struct skl_module_cfg *VAR_3)
{
 FUNC_0(VAR_2->name, 0444, VAR_1->modules, VAR_3,
       &VAR_0);
}
