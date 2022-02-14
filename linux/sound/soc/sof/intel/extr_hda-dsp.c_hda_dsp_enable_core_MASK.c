
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_sof_dev {int dev; } ;


 int FUNC_0 (int ,char*,unsigned int) ;
 scalar_t__ FUNC_1 (struct snd_sof_dev*,unsigned int) ;
 int FUNC_2 (struct snd_sof_dev*,unsigned int) ;
 int FUNC_3 (struct snd_sof_dev*,unsigned int) ;

int FUNC_4(struct snd_sof_dev *VAR_0, unsigned int VAR_1)
{
 int VAR_2;


 if (FUNC_1(VAR_0, VAR_1))
  return 0;


 VAR_2 = FUNC_2(VAR_0, VAR_1);
 if (VAR_2 < 0) {
  FUNC_0(VAR_0->dev, "error: dsp core power up failed: core_mask %x\n",
   VAR_1);
  return VAR_2;
 }

 return FUNC_3(VAR_0, VAR_1);
}
