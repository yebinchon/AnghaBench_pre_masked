
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct skl_module_iface {TYPE_5__* outputs; TYPE_3__* inputs; } ;
struct skl_module_cfg {TYPE_1__* module; } ;
struct skl_dev {int dev; } ;
struct TYPE_9__ {int ch_cfg; int valid_bit_depth; int s_freq; int channels; } ;
struct TYPE_10__ {TYPE_4__ fmt; } ;
struct TYPE_7__ {int valid_bit_depth; int ch_cfg; int s_freq; int channels; } ;
struct TYPE_8__ {TYPE_2__ fmt; } ;
struct TYPE_6__ {struct skl_module_iface* formats; } ;


 int FUNC_0 (int ,char*,...) ;

__attribute__((used)) static void FUNC_1(struct skl_dev *VAR_0, struct skl_module_cfg *VAR_1)
{
 struct skl_module_iface *VAR_2 = &VAR_1->module->formats[0];

 FUNC_0(VAR_0->dev, "Dumping config\n");
 FUNC_0(VAR_0->dev, "Input Format:\n");
 FUNC_0(VAR_0->dev, "channels = %d\n", VAR_2->inputs[0].fmt.channels);
 FUNC_0(VAR_0->dev, "s_freq = %d\n", VAR_2->inputs[0].fmt.s_freq);
 FUNC_0(VAR_0->dev, "ch_cfg = %d\n", VAR_2->inputs[0].fmt.ch_cfg);
 FUNC_0(VAR_0->dev, "valid bit depth = %d\n",
    VAR_2->inputs[0].fmt.valid_bit_depth);
 FUNC_0(VAR_0->dev, "Output Format:\n");
 FUNC_0(VAR_0->dev, "channels = %d\n", VAR_2->outputs[0].fmt.channels);
 FUNC_0(VAR_0->dev, "s_freq = %d\n", VAR_2->outputs[0].fmt.s_freq);
 FUNC_0(VAR_0->dev, "valid bit depth = %d\n",
    VAR_2->outputs[0].fmt.valid_bit_depth);
 FUNC_0(VAR_0->dev, "ch_cfg = %d\n", VAR_2->outputs[0].fmt.ch_cfg);
}
