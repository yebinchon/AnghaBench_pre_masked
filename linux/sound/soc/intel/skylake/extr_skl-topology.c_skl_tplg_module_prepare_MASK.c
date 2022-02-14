
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int dummy; } ;
struct skl_pipe {int p_params; } ;
struct skl_module_cfg {int dev_type; } ;
struct skl_dev {int dev; } ;




 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct skl_dev *VAR_0, struct skl_pipe *VAR_1,
  struct snd_soc_dapm_widget *VAR_2, struct skl_module_cfg *VAR_3)
{
 switch (VAR_3->dev_type) {
 case 129:
  return FUNC_0(VAR_0->dev, VAR_1->p_params);

 case 128:
  return FUNC_1(VAR_0->dev, VAR_1->p_params);
 }

 return 0;
}
