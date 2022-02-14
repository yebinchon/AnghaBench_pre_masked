
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;
struct cs43130_private {unsigned int mclk; int pll_bypass; } ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int,int,unsigned int,int) ;
 int FUNC_1 (int ,char*,...) ;
 struct cs43130_private* FUNC_2 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_component *VAR_2,
        int VAR_3, int VAR_4, unsigned int VAR_5,
        int VAR_6)
{
 struct cs43130_private *VAR_7 = FUNC_2(VAR_2);

 FUNC_0(VAR_2->dev, "clk_id = %d, source = %d, freq = %d, dir = %d\n",
  VAR_3, VAR_4, VAR_5, VAR_6);

 switch (VAR_5) {
 case 129:
 case 128:
  VAR_7->mclk = VAR_5;
  break;
 default:
  FUNC_1(VAR_2->dev, "Invalid MCLK INT freq: %u\n", VAR_5);
  return -VAR_1;
 }

 if (VAR_4 == VAR_0) {
  VAR_7->pll_bypass = 1;
 } else {
  FUNC_1(VAR_2->dev, "Invalid MCLK source\n");
  return -VAR_1;
 }

 return 0;
}
