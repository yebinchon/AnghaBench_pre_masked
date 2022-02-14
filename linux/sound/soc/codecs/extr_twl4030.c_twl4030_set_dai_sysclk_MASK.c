
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twl4030_priv {unsigned int sysclk; } ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,unsigned int,...) ;
 struct twl4030_priv* FUNC_1 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_1, int VAR_2,
      unsigned int VAR_3, int VAR_4)
{
 struct snd_soc_component *VAR_5 = VAR_1->component;
 struct twl4030_priv *VAR_6 = FUNC_1(VAR_5);

 switch (VAR_3) {
 case 19200000:
 case 26000000:
 case 38400000:
  break;
 default:
  FUNC_0(VAR_5->dev, "Unsupported HFCLKIN: %u\n", VAR_3);
  return -VAR_0;
 }

 if ((VAR_3 / 1000) != VAR_6->sysclk) {
  FUNC_0(VAR_5->dev,
   "Mismatch in HFCLKIN: %u (configured: %u)\n",
   VAR_3, VAR_6->sysclk * 1000);
  return -VAR_0;
 }

 return 0;
}
