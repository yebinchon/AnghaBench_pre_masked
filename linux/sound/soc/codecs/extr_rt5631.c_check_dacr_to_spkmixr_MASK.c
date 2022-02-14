
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int dapm; } ;
struct snd_soc_component {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (struct snd_soc_component*,int ) ;
 struct snd_soc_component* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dapm_widget *VAR_2,
    struct snd_soc_dapm_widget *VAR_3)
{
 struct snd_soc_component *VAR_4 = FUNC_1(VAR_2->dapm);
 unsigned int VAR_5;

 VAR_5 = FUNC_0(VAR_4, VAR_1);
 return !(VAR_5 & VAR_0);
}
