
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t u8 ;
struct skl_pipe_params {scalar_t__ stream; int s_freq; int ch; int s_fmt; } ;
struct skl_module_res {int ibs; int obs; } ;
struct skl_module_fmt {int s_freq; int channels; int valid_bit_depth; int bit_depth; } ;
struct skl_module_cfg {TYPE_6__* module; TYPE_2__* mod_cfg; int res_idx; int fmt_idx; TYPE_1__* pipe; } ;
struct skl_dev {scalar_t__ nr_modules; } ;
struct device {int dummy; } ;
struct TYPE_12__ {TYPE_5__* formats; struct skl_module_res* resources; } ;
struct TYPE_11__ {TYPE_4__* outputs; TYPE_3__* inputs; } ;
struct TYPE_10__ {struct skl_module_fmt fmt; } ;
struct TYPE_9__ {struct skl_module_fmt fmt; } ;
struct TYPE_8__ {int res_idx; int fmt_idx; } ;
struct TYPE_7__ {size_t cur_config_idx; } ;


 int VAR_0 ;



 scalar_t__ VAR_1 ;
 int FUNC_0 (struct device*,char*,int) ;
 struct skl_dev* FUNC_1 (struct device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct skl_module_cfg*,struct skl_pipe_params*) ;

int FUNC_4(struct device *VAR_2,
   struct skl_module_cfg *VAR_3,
   struct skl_pipe_params *VAR_4)
{
 struct skl_module_res *VAR_5 = &VAR_3->module->resources[0];
 struct skl_dev *VAR_6 = FUNC_1(VAR_2);
 struct skl_module_fmt *VAR_7 = ((void*)0);
 u8 VAR_8 = VAR_3->pipe->cur_config_idx;

 FUNC_3(VAR_3, VAR_4);
 VAR_3->fmt_idx = VAR_3->mod_cfg[VAR_8].fmt_idx;
 VAR_3->res_idx = VAR_3->mod_cfg[VAR_8].res_idx;

 if (VAR_6->nr_modules)
  return 0;

 if (VAR_4->stream == VAR_1)
  VAR_7 = &VAR_3->module->formats[0].inputs[0].fmt;
 else
  VAR_7 = &VAR_3->module->formats[0].outputs[0].fmt;


 VAR_7->s_freq = VAR_4->s_freq;
 VAR_7->channels = VAR_4->ch;
 VAR_7->valid_bit_depth = FUNC_2(VAR_4->s_fmt);





 switch (VAR_7->valid_bit_depth) {
 case 130:
  VAR_7->bit_depth = VAR_7->valid_bit_depth;
  break;

 case 129:
 case 128:
  VAR_7->bit_depth = 128;
  break;

 default:
  FUNC_0(VAR_2, "Invalid bit depth %x for pipe\n",
    VAR_7->valid_bit_depth);
  return -VAR_0;
 }

 if (VAR_4->stream == VAR_1) {
  VAR_5->ibs = (VAR_7->s_freq / 1000) *
    (VAR_7->channels) *
    (VAR_7->bit_depth >> 3);
 } else {
  VAR_5->obs = (VAR_7->s_freq / 1000) *
    (VAR_7->channels) *
    (VAR_7->bit_depth >> 3);
 }

 return 0;
}
