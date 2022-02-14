
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int dapm; } ;
struct snd_soc_component {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int FUNC_0 (struct snd_soc_component*,int ) ;
 struct snd_soc_component* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dapm_widget *VAR_3,
 struct snd_soc_dapm_widget *VAR_4)
{
 unsigned int VAR_5;
 struct snd_soc_component *VAR_6 = FUNC_1(VAR_3->dapm);

 VAR_5 = FUNC_0(VAR_6, VAR_0);
 VAR_5 &= VAR_1;
 if (VAR_5 == VAR_2)
  return 1;
 else
  return 0;
}
