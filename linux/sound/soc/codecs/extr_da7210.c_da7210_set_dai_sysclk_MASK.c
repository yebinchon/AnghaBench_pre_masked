
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dev; struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct da7210_priv {unsigned int mclk_rate; } ;



 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 struct da7210_priv* FUNC_1 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_1,
     int VAR_2, unsigned int VAR_3, int VAR_4)
{
 struct snd_soc_component *VAR_5 = VAR_1->component;
 struct da7210_priv *VAR_6 = FUNC_1(VAR_5);

 switch (VAR_2) {
 case 128:
  switch (VAR_3) {
  case 12000000:
  case 13000000:
  case 13500000:
  case 14400000:
  case 19200000:
  case 19680000:
  case 19800000:
   VAR_6->mclk_rate = VAR_3;
   return 0;
  default:
   FUNC_0(VAR_1->dev, "Unsupported MCLK value %d\n",
    VAR_3);
   return -VAR_0;
  }
  break;
 default:
  FUNC_0(VAR_1->dev, "Unknown clock source %d\n", VAR_2);
  return -VAR_0;
 }
}
