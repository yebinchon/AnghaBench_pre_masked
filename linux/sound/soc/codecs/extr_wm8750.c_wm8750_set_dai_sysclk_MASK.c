
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8750_priv {unsigned int sysclk; } ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;


 int VAR_0 ;
 struct wm8750_priv* FUNC_0 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_dai *VAR_1,
  int VAR_2, unsigned int VAR_3, int VAR_4)
{
 struct snd_soc_component *VAR_5 = VAR_1->component;
 struct wm8750_priv *VAR_6 = FUNC_0(VAR_5);

 switch (VAR_3) {
 case 11289600:
 case 12000000:
 case 12288000:
 case 16934400:
 case 18432000:
  VAR_6->sysclk = VAR_3;
  return 0;
 }
 return -VAR_0;
}
