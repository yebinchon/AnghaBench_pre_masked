
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_sof_dev {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,unsigned int) ;
 int FUNC_2 (int ,char*,unsigned int) ;
 int FUNC_3 (struct snd_sof_dev*,unsigned int) ;
 int FUNC_4 (struct snd_sof_dev*,unsigned int) ;
 int FUNC_5 (struct snd_sof_dev*,unsigned int) ;
 int FUNC_6 (struct snd_sof_dev*,int ,int ,int ,int ) ;

int FUNC_7(struct snd_sof_dev *VAR_3, unsigned int VAR_4)
{
 int VAR_5;


 VAR_5 = FUNC_4(VAR_3, VAR_4);
 if (VAR_5 < 0)
  return VAR_5;


 FUNC_1(VAR_3->dev, "unstall/run core: core_mask = %x\n", VAR_4);
 FUNC_6(VAR_3, VAR_1,
      VAR_2,
      FUNC_0(VAR_4),
      0);


 if (!FUNC_3(VAR_3, VAR_4)) {
  FUNC_5(VAR_3, VAR_4);
  FUNC_2(VAR_3->dev, "error: DSP start core failed: core_mask %x\n",
   VAR_4);
  VAR_5 = -VAR_0;
 }

 return VAR_5;
}
