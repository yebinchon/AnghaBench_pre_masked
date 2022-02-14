
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8955_priv {unsigned int mclk_rate; } ;
struct snd_soc_dai {int dev; struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int,unsigned int) ;
 struct wm8955_priv* FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (struct snd_soc_component*,int ,int,int) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_3, int VAR_4,
        unsigned int VAR_5, int VAR_6)
{
 struct snd_soc_component *VAR_7 = VAR_3->component;
 struct wm8955_priv *VAR_8 = FUNC_1(VAR_7);
 int VAR_9;

 switch (VAR_4) {
 case 128:
  if (VAR_5 > 15000000) {
   VAR_8->mclk_rate = VAR_5 /= 2;
   VAR_9 = VAR_1;
  } else {
   VAR_8->mclk_rate = VAR_5;
   VAR_9 = 0;
  }

  FUNC_2(VAR_7, VAR_2,
        VAR_1, VAR_9);
  break;

 default:
  return -VAR_0;
 }

 FUNC_0(VAR_3->dev, "Clock source is %d at %uHz\n", VAR_4, VAR_5);

 return 0;
}
