
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct skl_module_res {int ibs; int obs; } ;
struct skl_module_fmt {int channels; int bit_depth; int s_freq; } ;
struct skl_module_cfg {scalar_t__ m_type; TYPE_4__* module; } ;
struct skl_dev {int dummy; } ;
struct TYPE_8__ {TYPE_3__* formats; struct skl_module_res* resources; } ;
struct TYPE_7__ {TYPE_2__* outputs; TYPE_1__* inputs; } ;
struct TYPE_6__ {struct skl_module_fmt fmt; } ;
struct TYPE_5__ {struct skl_module_fmt fmt; } ;


 int FUNC_0 (int ,int) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_1(struct skl_dev *VAR_1,
    struct skl_module_cfg *VAR_2)
{
 int VAR_3 = 1;
 struct skl_module_fmt *VAR_4, *VAR_5;
 struct skl_module_res *VAR_6;




 VAR_6 = &VAR_2->module->resources[0];
 VAR_4 = &VAR_2->module->formats[0].inputs[0].fmt;
 VAR_5 = &VAR_2->module->formats[0].outputs[0].fmt;

 if (VAR_2->m_type == VAR_0)
  VAR_3 = 5;

 VAR_6->ibs = FUNC_0(VAR_4->s_freq, 1000) *
   VAR_4->channels * (VAR_4->bit_depth >> 3) *
   VAR_3;

 VAR_6->obs = FUNC_0(VAR_5->s_freq, 1000) *
   VAR_5->channels * (VAR_5->bit_depth >> 3) *
   VAR_3;
}
