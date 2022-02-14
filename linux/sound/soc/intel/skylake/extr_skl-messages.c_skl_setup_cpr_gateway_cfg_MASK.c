
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct skl_module_res {int dma_buffer_size; int ibs; int obs; } ;
struct skl_module_cfg {int res_idx; int hw_conn_type; int dma_buffer_size; int dev_type; TYPE_1__* module; } ;
struct skl_dev {int dev; scalar_t__ nr_modules; } ;
struct TYPE_4__ {scalar_t__ node_id; int dma_buffer_size; scalar_t__ config_length; } ;
struct skl_cpr_cfg {TYPE_2__ gtw_cfg; scalar_t__ cpr_feature_mask; } ;
struct TYPE_3__ {struct skl_module_res* resources; } ;




 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct skl_module_cfg*,struct skl_cpr_cfg*) ;
 scalar_t__ FUNC_2 (struct skl_dev*,struct skl_module_cfg*) ;

__attribute__((used)) static void FUNC_3(struct skl_dev *VAR_2,
   struct skl_module_cfg *VAR_3,
   struct skl_cpr_cfg *VAR_4)
{
 u32 VAR_5;
 struct skl_module_res *VAR_6;
 int VAR_7 = VAR_3->res_idx;

 VAR_4->gtw_cfg.node_id = FUNC_2(VAR_2, VAR_3);

 if (VAR_4->gtw_cfg.node_id == VAR_1) {
  VAR_4->cpr_feature_mask = 0;
  return;
 }

 if (VAR_2->nr_modules) {
  VAR_6 = &VAR_3->module->resources[VAR_3->res_idx];
  VAR_4->gtw_cfg.dma_buffer_size = VAR_6->dma_buffer_size;
  goto skip_buf_size_calc;
 } else {
  VAR_6 = &VAR_3->module->resources[VAR_7];
 }

 switch (VAR_3->hw_conn_type) {
 case 128:
  if (VAR_3->dev_type == VAR_0)
   VAR_5 = VAR_6->ibs;
  else
   VAR_5 = VAR_6->obs;
  break;

 case 129:
  if (VAR_3->dev_type == VAR_0)
   VAR_5 = VAR_6->obs;
  else
   VAR_5 = VAR_6->ibs;
  break;

 default:
  FUNC_0(VAR_2->dev, "wrong connection type: %d\n",
    VAR_3->hw_conn_type);
  return;
 }

 VAR_4->gtw_cfg.dma_buffer_size =
    VAR_3->dma_buffer_size * VAR_5;


 if (!VAR_4->gtw_cfg.dma_buffer_size) {
  if (VAR_3->hw_conn_type == 128)
   VAR_4->gtw_cfg.dma_buffer_size = 2 * VAR_6->obs;
  else
   VAR_4->gtw_cfg.dma_buffer_size = 2 * VAR_6->ibs;
 }

skip_buf_size_calc:
 VAR_4->cpr_feature_mask = 0;
 VAR_4->gtw_cfg.config_length = 0;

 FUNC_1(VAR_3, VAR_4);
}
