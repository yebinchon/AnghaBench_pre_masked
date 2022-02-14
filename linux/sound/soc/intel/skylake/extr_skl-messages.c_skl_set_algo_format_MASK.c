
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ caps_size; int caps; } ;
struct skl_module_cfg {TYPE_1__ formats_config; } ;
struct skl_dev {int dummy; } ;
struct skl_base_cfg {int dummy; } ;
struct skl_algo_cfg {int params; } ;


 int FUNC_0 (int ,int ,scalar_t__) ;
 int FUNC_1 (struct skl_dev*,struct skl_module_cfg*,struct skl_base_cfg*) ;

__attribute__((used)) static void FUNC_2(struct skl_dev *VAR_0,
   struct skl_module_cfg *VAR_1,
   struct skl_algo_cfg *VAR_2)
{
 struct skl_base_cfg *VAR_3 = (struct skl_base_cfg *)VAR_2;

 FUNC_1(VAR_0, VAR_1, VAR_3);

 if (VAR_1->formats_config.caps_size == 0)
  return;

 FUNC_0(VAR_2->params,
   VAR_1->formats_config.caps,
   VAR_1->formats_config.caps_size);

}
