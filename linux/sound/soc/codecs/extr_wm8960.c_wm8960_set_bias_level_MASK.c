
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8960_priv {int (* set_bias_level ) (struct snd_soc_component*,int) ;} ;
struct snd_soc_component {int dummy; } ;
typedef enum snd_soc_bias_level { ____Placeholder_snd_soc_bias_level } snd_soc_bias_level ;


 struct wm8960_priv* FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (struct snd_soc_component*,int) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_component *VAR_0,
     enum snd_soc_bias_level VAR_1)
{
 struct wm8960_priv *VAR_2 = FUNC_0(VAR_0);

 return VAR_2->set_bias_level(VAR_0, VAR_1);
}
