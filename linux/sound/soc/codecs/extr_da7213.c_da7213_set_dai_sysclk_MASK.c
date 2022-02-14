
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dev; struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct da7213_priv {int clk_src; unsigned int mclk_rate; scalar_t__ mclk; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (scalar_t__,unsigned int) ;
 int FUNC_1 (scalar_t__,unsigned int) ;
 int FUNC_2 (int ,char*,unsigned int) ;
 struct da7213_priv* FUNC_3 (struct snd_soc_component*) ;
 int FUNC_4 (struct snd_soc_component*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_dai *VAR_3,
     int VAR_4, unsigned int VAR_5, int VAR_6)
{
 struct snd_soc_component *VAR_7 = VAR_3->component;
 struct da7213_priv *VAR_8 = FUNC_3(VAR_7);
 int VAR_9 = 0;

 if ((VAR_8->clk_src == VAR_4) && (VAR_8->mclk_rate == VAR_5))
  return 0;

 if (((VAR_5 < 5000000) && (VAR_5 != 32768)) || (VAR_5 > 54000000)) {
  FUNC_2(VAR_3->dev, "Unsupported MCLK value %d\n",
   VAR_5);
  return -VAR_2;
 }

 switch (VAR_4) {
 case 129:
  FUNC_4(VAR_7, VAR_0,
        VAR_1, 0);
  break;
 case 128:
  FUNC_4(VAR_7, VAR_0,
        VAR_1,
        VAR_1);
  break;
 default:
  FUNC_2(VAR_3->dev, "Unknown clock source %d\n", VAR_4);
  return -VAR_2;
 }

 VAR_8->clk_src = VAR_4;

 if (VAR_8->mclk) {
  VAR_5 = FUNC_0(VAR_8->mclk, VAR_5);
  VAR_9 = FUNC_1(VAR_8->mclk, VAR_5);
  if (VAR_9) {
   FUNC_2(VAR_3->dev, "Failed to set clock rate %d\n",
    VAR_5);
   return VAR_9;
  }
 }

 VAR_8->mclk_rate = VAR_5;

 return 0;
}
