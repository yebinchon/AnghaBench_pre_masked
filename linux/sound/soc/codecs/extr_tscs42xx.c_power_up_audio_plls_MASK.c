
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tscs42xx {int pll_lock; int samplerate; } ;
struct snd_soc_component {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct snd_soc_component*) ;
 int FUNC_4 (int ) ;
 struct tscs42xx* FUNC_5 (struct snd_soc_component*) ;
 int FUNC_6 (struct snd_soc_component*,int ,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_7(struct snd_soc_component *VAR_7)
{
 struct tscs42xx *VAR_8 = FUNC_5(VAR_7);
 int VAR_9;
 int VAR_10;
 unsigned int VAR_11;
 unsigned int VAR_12;

 VAR_9 = FUNC_4(VAR_8->samplerate);
 switch (VAR_9) {
 case 122880000:
  VAR_11 = VAR_2;
  VAR_12 = VAR_4;
  break;
 case 112896000:
  VAR_11 = VAR_3;
  VAR_12 = VAR_5;
  break;
 default:
  VAR_10 = -VAR_0;
  FUNC_0(VAR_7->dev,
    "Unrecognized PLL output freq (%d)\n", VAR_10);
  return VAR_10;
 }

 FUNC_1(&VAR_8->pll_lock);

 VAR_10 = FUNC_6(VAR_7, VAR_6, VAR_11, VAR_12);
 if (VAR_10 < 0) {
  FUNC_0(VAR_7->dev, "Failed to turn PLL on (%d)\n", VAR_10);
  goto exit;
 }

 if (!FUNC_3(VAR_7)) {
  FUNC_0(VAR_7->dev, "Failed to lock plls\n");
  VAR_10 = -VAR_1;
  goto exit;
 }

 VAR_10 = 0;
exit:
 FUNC_2(&VAR_8->pll_lock);

 return VAR_10;
}
