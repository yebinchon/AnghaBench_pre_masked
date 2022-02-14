
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8904_priv {int sysclk_src; unsigned int mclk_rate; } ;
struct snd_soc_dai {int dev; struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;


 int VAR_0 ;


 int FUNC_0 (int ,char*,int,unsigned int) ;
 struct wm8904_priv* FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_1, int VAR_2,
        unsigned int VAR_3, int VAR_4)
{
 struct snd_soc_component *VAR_5 = VAR_1->component;
 struct wm8904_priv *VAR_6 = FUNC_1(VAR_5);

 switch (VAR_2) {
 case 128:
  VAR_6->sysclk_src = VAR_2;
  VAR_6->mclk_rate = VAR_3;
  break;

 case 129:
  VAR_6->sysclk_src = VAR_2;
  break;

 default:
  return -VAR_0;
 }

 FUNC_0(VAR_1->dev, "Clock source is %d at %uHz\n", VAR_2, VAR_3);

 FUNC_2(VAR_5);

 return 0;
}
