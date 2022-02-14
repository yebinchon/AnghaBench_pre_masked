
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8995_priv {int* sysclk; unsigned int* mclk; } ;
struct snd_soc_dai {int id; int dev; struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;


 int VAR_0 ;





 int FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (int ,char*,int,...) ;
 int FUNC_2 (int ,char*,int) ;
 struct wm8995_priv* FUNC_3 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_dai *VAR_1,
     int VAR_2, unsigned int VAR_3, int VAR_4)
{
 struct snd_soc_component *VAR_5;
 struct wm8995_priv *VAR_6;

 VAR_5 = VAR_1->component;
 VAR_6 = FUNC_3(VAR_5);

 switch (VAR_1->id) {
 case 0:
 case 1:
  break;
 default:

  return -VAR_0;
 }

 switch (VAR_2) {
 case 130:
  VAR_6->sysclk[VAR_1->id] = 130;
  VAR_6->mclk[0] = VAR_3;
  FUNC_1(VAR_1->dev, "AIF%d using MCLK1 at %uHz\n",
   VAR_1->id + 1, VAR_3);
  break;
 case 129:
  VAR_6->sysclk[VAR_1->id] = 129;
  VAR_6->mclk[1] = VAR_3;
  FUNC_1(VAR_1->dev, "AIF%d using MCLK2 at %uHz\n",
   VAR_1->id + 1, VAR_3);
  break;
 case 132:
  VAR_6->sysclk[VAR_1->id] = 132;
  FUNC_1(VAR_1->dev, "AIF%d using FLL1\n", VAR_1->id + 1);
  break;
 case 131:
  VAR_6->sysclk[VAR_1->id] = 131;
  FUNC_1(VAR_1->dev, "AIF%d using FLL2\n", VAR_1->id + 1);
  break;
 case 128:
 default:
  FUNC_2(VAR_1->dev, "Unknown clock source %d\n", VAR_2);
  return -VAR_0;
 }

 FUNC_0(VAR_5);

 return 0;
}
