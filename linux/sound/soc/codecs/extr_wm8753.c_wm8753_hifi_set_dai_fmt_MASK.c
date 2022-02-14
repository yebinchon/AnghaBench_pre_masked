
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8753_priv {unsigned int hifi_fmt; } ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;


 struct wm8753_priv* FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (struct snd_soc_component*,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_0,
  unsigned int VAR_1)
{
 struct snd_soc_component *VAR_2 = VAR_0->component;
 struct wm8753_priv *VAR_3 = FUNC_0(VAR_2);

 VAR_3->hifi_fmt = VAR_1;

 return FUNC_1(VAR_2, VAR_1);
}
