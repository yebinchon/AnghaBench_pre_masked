
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tscs42xx {int sysclk_src_id; int sysclk; } ;
struct snd_soc_component {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct snd_soc_component*,unsigned long) ;
 struct tscs42xx* FUNC_3 (struct snd_soc_component*) ;
 int FUNC_4 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_component *VAR_6)
{
 struct tscs42xx *VAR_7 = FUNC_3(VAR_6);
 unsigned long VAR_8;
 int VAR_9;

 switch (VAR_7->sysclk_src_id) {
 case 128:
 case 130:
  VAR_9 = FUNC_4(VAR_6, VAR_5,
    VAR_2 |
    VAR_4);
  if (VAR_9 < 0) {
   FUNC_1(VAR_6->dev,
    "Failed to set pll reference input (%d)\n",
    VAR_9);
   return VAR_9;
  }
  break;
 case 129:
  VAR_9 = FUNC_4(VAR_6, VAR_5,
    VAR_1 |
    VAR_3);
  if (VAR_9 < 0) {
   FUNC_1(VAR_6->dev,
    "Failed to set PLL reference (%d)\n", VAR_9);
   return VAR_9;
  }
  break;
 default:
  FUNC_1(VAR_6->dev, "pll src is unsupported\n");
  return -VAR_0;
 }

 VAR_8 = FUNC_0(VAR_7->sysclk);
 VAR_9 = FUNC_2(VAR_6, VAR_8);
 if (VAR_9 < 0) {
  FUNC_1(VAR_6->dev,
   "Failed to setup PLL input freq (%d)\n", VAR_9);
  return VAR_9;
 }

 return 0;
}
