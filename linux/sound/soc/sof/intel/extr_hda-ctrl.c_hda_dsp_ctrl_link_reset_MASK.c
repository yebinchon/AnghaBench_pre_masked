
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_sof_dev {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,char*,int) ;
 unsigned long VAR_5 ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (struct snd_sof_dev*,int ,int ) ;
 int FUNC_3 (struct snd_sof_dev*,int ,int ,int,int) ;
 scalar_t__ FUNC_4 (unsigned long,unsigned long) ;
 int FUNC_5 (int,int) ;

int FUNC_6(struct snd_sof_dev *VAR_6, bool VAR_7)
{
 unsigned long VAR_8;
 u32 VAR_9 = 0;
 u32 VAR_10;


 VAR_10 = VAR_7 ? 0 : VAR_4;


 FUNC_3(VAR_6, VAR_2, VAR_3,
    VAR_4, VAR_10);


 VAR_8 = VAR_5 + FUNC_1(VAR_1);
 while (FUNC_4(VAR_5, VAR_8)) {
  VAR_9 = FUNC_2(VAR_6, VAR_2, VAR_3);
  if ((VAR_9 & VAR_4) == VAR_10)
   return 0;
  FUNC_5(500, 1000);
 }


 FUNC_0(VAR_6->dev, "error: failed to %s HDA controller gctl 0x%x\n",
  VAR_7 ? "reset" : "ready", VAR_9);
 return -VAR_0;
}
