
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_sof_dev {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,unsigned int,...) ;
 scalar_t__ FUNC_1 (struct snd_sof_dev*,unsigned int) ;
 int FUNC_2 (struct snd_sof_dev*,unsigned int) ;
 int FUNC_3 (struct snd_sof_dev*,unsigned int) ;

int FUNC_4(struct snd_sof_dev *VAR_1,
      unsigned int VAR_2)
{
 int VAR_3;


 VAR_3 = FUNC_3(VAR_1, VAR_2);
 if (VAR_3 < 0) {
  FUNC_0(VAR_1->dev, "error: dsp core reset failed: core_mask %x\n",
   VAR_2);
  return VAR_3;
 }


 VAR_3 = FUNC_2(VAR_1, VAR_2);
 if (VAR_3 < 0) {
  FUNC_0(VAR_1->dev, "error: dsp core power down fail mask %x: %d\n",
   VAR_2, VAR_3);
  return VAR_3;
 }


 if (FUNC_1(VAR_1, VAR_2)) {
  FUNC_0(VAR_1->dev, "error: dsp core disable fail mask %x: %d\n",
   VAR_2, VAR_3);
  VAR_3 = -VAR_0;
 }

 return VAR_3;
}
