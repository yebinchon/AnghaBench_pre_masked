
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct rt1305_priv {scalar_t__ sysclk_src; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 struct rt1305_priv* FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (struct snd_soc_component*,int ,unsigned int*) ;
 struct snd_soc_component* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dapm_widget *VAR_3,
    struct snd_soc_dapm_widget *VAR_4)
{
 struct snd_soc_component *VAR_5 =
  FUNC_2(VAR_3->dapm);
 struct rt1305_priv *VAR_6 = FUNC_0(VAR_5);
 unsigned int VAR_7;

 FUNC_1(VAR_5, VAR_0, &VAR_7);

 if (VAR_6->sysclk_src == VAR_1 &&
  (VAR_7 & VAR_2))
  return 1;
 else
  return 0;
}
