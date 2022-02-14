
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8741_priv {unsigned int sysclk; int * sysclk_constraints; } ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*,unsigned int) ;
 struct wm8741_priv* FUNC_1 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_9,
  int VAR_10, unsigned int VAR_11, int VAR_12)
{
 struct snd_soc_component *VAR_13 = VAR_9->component;
 struct wm8741_priv *VAR_14 = FUNC_1(VAR_13);

 FUNC_0(VAR_13->dev, "wm8741_set_dai_sysclk info: freq=%dHz\n", VAR_11);

 switch (VAR_11) {
 case 0:
  VAR_14->sysclk_constraints = ((void*)0);
  break;
 case 11289600:
  VAR_14->sysclk_constraints = &VAR_1;
  break;
 case 12288000:
  VAR_14->sysclk_constraints = &VAR_2;
  break;
 case 16384000:
  VAR_14->sysclk_constraints = &VAR_3;
  break;
 case 16934400:
  VAR_14->sysclk_constraints = &VAR_4;
  break;
 case 18432000:
  VAR_14->sysclk_constraints = &VAR_5;
  break;
 case 22579200:
 case 33868800:
  VAR_14->sysclk_constraints = &VAR_6;
  break;
 case 24576000:
  VAR_14->sysclk_constraints = &VAR_7;
  break;
 case 36864000:
  VAR_14->sysclk_constraints = &VAR_8;
  break;
 default:
  return -VAR_0;
 }

 VAR_14->sysclk = VAR_11;
 return 0;
}
