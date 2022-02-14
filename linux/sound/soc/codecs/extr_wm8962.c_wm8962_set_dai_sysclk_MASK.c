
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8962_priv {int sysclk; unsigned int sysclk_rate; } ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 struct wm8962_priv* FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (struct snd_soc_component*,int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_4, int VAR_5,
     unsigned int VAR_6, int VAR_7)
{
 struct snd_soc_component *VAR_8 = VAR_4->component;
 struct wm8962_priv *VAR_9 = FUNC_0(VAR_8);
 int VAR_10;

 switch (VAR_5) {
 case 128:
  VAR_9->sysclk = 128;
  VAR_10 = 0;
  break;
 case 129:
  VAR_9->sysclk = 129;
  VAR_10 = 1 << VAR_3;
  break;
 default:
  return -VAR_0;
 }

 FUNC_1(VAR_8, VAR_1, VAR_2,
       VAR_10);

 VAR_9->sysclk_rate = VAR_6;

 return 0;
}
