
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8753_priv {scalar_t__ dai_func; } ;
struct snd_soc_component {int dummy; } ;


 struct wm8753_priv* FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (struct snd_soc_component*,unsigned int) ;
 int FUNC_2 (struct snd_soc_component*,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_component *VAR_0,
  unsigned int VAR_1)
{
 struct wm8753_priv *VAR_2 = FUNC_0(VAR_0);
 int VAR_3 = 0;

 if (VAR_2->dai_func != 0)
  return 0;

 VAR_3 = FUNC_1(VAR_0, VAR_1);
 if (VAR_3)
  return VAR_3;
 VAR_3 = FUNC_2(VAR_0, VAR_1);
 if (VAR_3)
  return VAR_3;

 return 0;
}
