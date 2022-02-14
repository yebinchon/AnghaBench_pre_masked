
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skl_specific_cfg {int caps_size; int param_id; scalar_t__ caps; int set_params; } ;
struct skl_module_cfg {struct skl_specific_cfg formats_config; } ;
struct skl_mic_sel_config {scalar_t__ flags; int mic_switch; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct device*,int,int ) ;
 int FUNC_1 (scalar_t__,struct skl_mic_sel_config*,int) ;

__attribute__((used)) static int FUNC_2(struct skl_module_cfg *VAR_4,
 struct skl_mic_sel_config *VAR_5, struct device *VAR_6)
{
 struct skl_specific_cfg *VAR_7 = &VAR_4->formats_config;

 VAR_7->caps_size = sizeof(struct skl_mic_sel_config);
 VAR_7->set_params = VAR_3;
 VAR_7->param_id = 0x00;
 if (!VAR_7->caps) {
  VAR_7->caps = FUNC_0(VAR_6, VAR_7->caps_size, VAR_1);
  if (!VAR_7->caps)
   return -VAR_0;
 }

 VAR_5->mic_switch = VAR_2;
 VAR_5->flags = 0;
 FUNC_1(VAR_7->caps, VAR_5, VAR_7->caps_size);

 return 0;
}
