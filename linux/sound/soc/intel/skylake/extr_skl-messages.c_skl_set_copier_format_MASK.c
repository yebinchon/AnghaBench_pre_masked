
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skl_module_cfg {int dummy; } ;
struct skl_dev {int dummy; } ;
struct skl_audio_data_format {int dummy; } ;
struct skl_cpr_cfg {struct skl_audio_data_format out_fmt; } ;
struct skl_base_cfg {int dummy; } ;


 int FUNC_0 (struct skl_dev*,struct skl_module_cfg*,struct skl_base_cfg*) ;
 int FUNC_1 (struct skl_dev*,struct skl_module_cfg*,struct skl_cpr_cfg*) ;
 int FUNC_2 (struct skl_dev*,struct skl_module_cfg*,struct skl_audio_data_format*) ;

__attribute__((used)) static void FUNC_3(struct skl_dev *VAR_0,
   struct skl_module_cfg *VAR_1,
   struct skl_cpr_cfg *VAR_2)
{
 struct skl_audio_data_format *VAR_3 = &VAR_2->out_fmt;
 struct skl_base_cfg *VAR_4 = (struct skl_base_cfg *)VAR_2;

 FUNC_0(VAR_0, VAR_1, VAR_4);

 FUNC_2(VAR_0, VAR_1, VAR_3);
 FUNC_1(VAR_0, VAR_1, VAR_2);
}
