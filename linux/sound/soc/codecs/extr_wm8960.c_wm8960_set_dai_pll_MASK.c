
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8960_priv {unsigned int freq_in; } ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;


 int VAR_0 ;
 struct wm8960_priv* FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (struct snd_soc_component*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_1, int VAR_2,
  int VAR_3, unsigned int VAR_4, unsigned int VAR_5)
{
 struct snd_soc_component *VAR_6 = VAR_1->component;
 struct wm8960_priv *VAR_7 = FUNC_0(VAR_6);

 VAR_7->freq_in = VAR_4;

 if (VAR_2 == VAR_0)
  return 0;

 return FUNC_1(VAR_6, VAR_4, VAR_5);
}
