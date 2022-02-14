
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_dapm_widget *VAR_0,
       struct snd_kcontrol *VAR_1, int VAR_2)
{
 struct snd_soc_component *VAR_3 =
  FUNC_3(VAR_0->dapm);
 int VAR_4;

 if (FUNC_0(VAR_2))
  VAR_4 = FUNC_2(VAR_3);
 else
  VAR_4 = FUNC_1(VAR_3);

 return VAR_4;
}
