
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct skl_up_down_mixer_cfg {int ch_map; int out_ch_cfg; } ;
struct skl_module_iface {TYPE_1__* outputs; } ;
struct skl_module_fmt {int ch_map; int ch_cfg; } ;
struct skl_module_cfg {size_t fmt_idx; struct skl_module* module; } ;
struct skl_module {struct skl_module_iface* formats; } ;
struct skl_dev {int dummy; } ;
struct skl_base_cfg {int dummy; } ;
struct TYPE_2__ {struct skl_module_fmt fmt; } ;


 int FUNC_0 (struct skl_dev*,struct skl_module_cfg*,struct skl_base_cfg*) ;

__attribute__((used)) static void FUNC_1(struct skl_dev *VAR_0,
   struct skl_module_cfg *VAR_1,
   struct skl_up_down_mixer_cfg *VAR_2)
{
 struct skl_module *VAR_3 = VAR_1->module;
 struct skl_module_iface *VAR_4 = &VAR_3->formats[VAR_1->fmt_idx];
 struct skl_module_fmt *VAR_5 = &VAR_4->outputs[0].fmt;

 FUNC_0(VAR_0, VAR_1,
  (struct skl_base_cfg *)VAR_2);
 VAR_2->out_ch_cfg = VAR_5->ch_cfg;
 VAR_2->ch_map = VAR_5->ch_map;
}
