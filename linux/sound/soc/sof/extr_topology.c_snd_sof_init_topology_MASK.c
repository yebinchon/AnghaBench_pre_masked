
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_sof_dev {struct snd_soc_tplg_ops* tplg_ops; } ;
struct snd_soc_tplg_ops {int dummy; } ;



int FUNC_0(struct snd_sof_dev *VAR_0,
     struct snd_soc_tplg_ops *VAR_1)
{

 VAR_0->tplg_ops = VAR_1;
 return 0;
}
