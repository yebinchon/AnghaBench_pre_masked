
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;
struct cs43130_private {unsigned int mclk; unsigned int mclk_int; int pll_bypass; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int ,char*,unsigned int) ;
 struct cs43130_private* FUNC_3 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_component *VAR_1, int VAR_2, int VAR_3,
      unsigned int VAR_4, unsigned int VAR_5)
{
 int VAR_6 = 0;
 struct cs43130_private *VAR_7 = FUNC_3(VAR_1);

 switch (VAR_4) {
 case 9600000:
 case 11289600:
 case 12000000:
 case 12288000:
 case 13000000:
 case 19200000:
 case 22579200:
 case 24000000:
 case 24576000:
 case 26000000:
  VAR_7->mclk = VAR_4;
  break;
 default:
  FUNC_2(VAR_1->dev,
   "unsupported pll input reference clock:%d\n", VAR_4);
  return -VAR_0;
 }

 switch (VAR_5) {
 case 22579200:
  VAR_7->mclk_int = VAR_5;
  break;
 case 24576000:
  VAR_7->mclk_int = VAR_5;
  break;
 default:
  FUNC_2(VAR_1->dev,
   "unsupported pll output ref clock: %u\n", VAR_5);
  return -VAR_0;
 }

 VAR_6 = FUNC_0(VAR_1);
 FUNC_1(VAR_1->dev, "cs43130->pll_bypass = %d", VAR_7->pll_bypass);
 return VAR_6;
}
