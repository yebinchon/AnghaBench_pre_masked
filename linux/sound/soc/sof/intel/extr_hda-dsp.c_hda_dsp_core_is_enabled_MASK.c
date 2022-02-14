
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_sof_dev {int dev; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int ,char*,int,unsigned int) ;
 int FUNC_5 (struct snd_sof_dev*,int ,int ) ;

bool FUNC_6(struct snd_sof_dev *VAR_2,
        unsigned int VAR_3)
{
 int VAR_4;
 bool VAR_5;

 VAR_4 = FUNC_5(VAR_2, VAR_0, VAR_1);

 VAR_5 = ((VAR_4 & FUNC_0(VAR_3)) &&
   (VAR_4 & FUNC_3(VAR_3)) &&
   !(VAR_4 & FUNC_1(VAR_3)) &&
   !(VAR_4 & FUNC_2(VAR_3)));

 FUNC_4(VAR_2->dev, "DSP core(s) enabled? %d : core_mask %x\n",
  VAR_5, VAR_3);

 return VAR_5;
}
