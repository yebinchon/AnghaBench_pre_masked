
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int caps_size; int caps; } ;
struct skl_module_cfg {TYPE_2__ formats_config; } ;
struct TYPE_3__ {int config_length; int config_data; } ;
struct skl_cpr_cfg {TYPE_1__ gtw_cfg; } ;


 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static void FUNC_1(struct skl_module_cfg *VAR_0,
    struct skl_cpr_cfg *VAR_1)
{
 if (VAR_0->formats_config.caps_size == 0)
  return;

 FUNC_0(VAR_1->gtw_cfg.config_data,
   VAR_0->formats_config.caps,
   VAR_0->formats_config.caps_size);

 VAR_1->gtw_cfg.config_length =
   (VAR_0->formats_config.caps_size) / 4;
}
