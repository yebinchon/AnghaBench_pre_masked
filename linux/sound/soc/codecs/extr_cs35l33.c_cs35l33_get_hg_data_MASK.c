
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct device_node {int dummy; } ;
struct cs35l33_hg {int enable_hg_algo; void* vp_hg_va; void* vp_hg_rate; void* vp_hg; int vp_hg_auto; void* ldo_entry_delay; void* ldo_path_disable; void* ldo_thld; void* release_rate; void* mem_depth; } ;
struct cs35l33_pdata {struct cs35l33_hg hg_config; } ;


 struct device_node* FUNC_0 (struct device_node const*,char*) ;
 int FUNC_1 (struct device_node*) ;
 int FUNC_2 (struct device_node*,char*) ;
 scalar_t__ FUNC_3 (struct device_node*,char*,void**) ;

__attribute__((used)) static int FUNC_4(const struct device_node *VAR_0,
          struct cs35l33_pdata *VAR_1)
{
 struct device_node *VAR_2;
 struct cs35l33_hg *VAR_3 = &VAR_1->hg_config;
 u32 VAR_4;

 VAR_2 = FUNC_0(VAR_0, "cirrus,hg-algo");
 VAR_3->enable_hg_algo = VAR_2 ? 1 : 0;

 if (VAR_3->enable_hg_algo) {
  if (FUNC_3(VAR_2, "cirrus,mem-depth", &VAR_4) >= 0)
   VAR_3->mem_depth = VAR_4;
  if (FUNC_3(VAR_2, "cirrus,release-rate",
    &VAR_4) >= 0)
   VAR_3->release_rate = VAR_4;
  if (FUNC_3(VAR_2, "cirrus,ldo-thld", &VAR_4) >= 0)
   VAR_3->ldo_thld = VAR_4;
  if (FUNC_3(VAR_2, "cirrus,ldo-path-disable",
    &VAR_4) >= 0)
   VAR_3->ldo_path_disable = VAR_4;
  if (FUNC_3(VAR_2, "cirrus,ldo-entry-delay",
    &VAR_4) >= 0)
   VAR_3->ldo_entry_delay = VAR_4;

  VAR_3->vp_hg_auto = FUNC_2(VAR_2,
   "cirrus,vp-hg-auto");

  if (FUNC_3(VAR_2, "cirrus,vp-hg", &VAR_4) >= 0)
   VAR_3->vp_hg = VAR_4;
  if (FUNC_3(VAR_2, "cirrus,vp-hg-rate", &VAR_4) >= 0)
   VAR_3->vp_hg_rate = VAR_4;
  if (FUNC_3(VAR_2, "cirrus,vp-hg-va", &VAR_4) >= 0)
   VAR_3->vp_hg_va = VAR_4;
 }

 FUNC_1(VAR_2);

 return 0;
}
