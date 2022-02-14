
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_sof_dev {int hw_lock; int dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct snd_sof_dev*,int ,int ) ;
 int FUNC_2 (struct snd_sof_dev*,int ,int ,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

irqreturn_t FUNC_5(int VAR_7, void *VAR_8)
{
 struct snd_sof_dev *VAR_9 = VAR_8;
 int VAR_10 = VAR_5;
 u32 VAR_11;

 FUNC_3(&VAR_9->hw_lock);


 VAR_11 = FUNC_1(VAR_9, VAR_2, VAR_4);
 FUNC_0(VAR_9->dev, "irq handler: irq_status:0x%x\n", VAR_11);


 if (VAR_11 == 0xffffffff)
  goto out;


 if (VAR_11 & VAR_1) {

  FUNC_2(VAR_9, VAR_2,
       VAR_3,
       VAR_0, 0);
  VAR_10 = VAR_6;
 }

out:
 FUNC_4(&VAR_9->hw_lock);
 return VAR_10;
}
