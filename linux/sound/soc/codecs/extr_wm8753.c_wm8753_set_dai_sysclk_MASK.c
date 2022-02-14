
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8753_priv {unsigned int sysclk; unsigned int pcmclk; } ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct wm8753_priv* FUNC_0 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_dai *VAR_3,
  int VAR_4, unsigned int VAR_5, int VAR_6)
{
 struct snd_soc_component *VAR_7 = VAR_3->component;
 struct wm8753_priv *VAR_8 = FUNC_0(VAR_7);

 switch (VAR_5) {
 case 11289600:
 case 12000000:
 case 12288000:
 case 16934400:
 case 18432000:
  if (VAR_4 == VAR_1) {
   VAR_8->sysclk = VAR_5;
   return 0;
  } else if (VAR_4 == VAR_2) {
   VAR_8->pcmclk = VAR_5;
   return 0;
  }
  break;
 }
 return -VAR_0;
}
