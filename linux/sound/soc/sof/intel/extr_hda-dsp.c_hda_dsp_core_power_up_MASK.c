
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct snd_sof_dev {int dev; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,char*,...) ;
 unsigned int FUNC_3 (struct snd_sof_dev*,int ,int ) ;
 int FUNC_4 (struct snd_sof_dev*,int ,int ,unsigned int,int,int ,int ) ;
 int FUNC_5 (struct snd_sof_dev*,int ,int ,int ,int ) ;

int FUNC_6(struct snd_sof_dev *VAR_5, unsigned int VAR_6)
{
 unsigned int VAR_7;
 u32 VAR_8;
 int VAR_9;


 FUNC_5(VAR_5, VAR_1, VAR_2,
    FUNC_1(VAR_6),
    FUNC_1(VAR_6));


 VAR_7 = FUNC_0(VAR_6);
 VAR_9 = FUNC_4(VAR_5, VAR_1,
         VAR_2, VAR_8,
         (VAR_8 & VAR_7) == VAR_7,
         VAR_3,
         VAR_4);
 if (VAR_9 < 0)
  FUNC_2(VAR_5->dev, "error: timeout on core powerup\n");


 VAR_8 = FUNC_3(VAR_5, VAR_1,
      VAR_2);
 if ((VAR_8 & FUNC_0(VAR_6)) !=
  FUNC_0(VAR_6)) {
  FUNC_2(VAR_5->dev,
   "error: power up core failed core_mask %xadspcs 0x%x\n",
   VAR_6, VAR_8);
  VAR_9 = -VAR_0;
 }

 return VAR_9;
}
