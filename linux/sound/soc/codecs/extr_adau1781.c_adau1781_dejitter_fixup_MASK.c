
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct adau {int regmap; int master; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 struct adau* FUNC_1 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dapm_widget *VAR_1,
 struct snd_kcontrol *VAR_2, int VAR_3)
{
 struct snd_soc_component *VAR_4 = FUNC_2(VAR_1->dapm);
 struct adau *VAR_5 = FUNC_1(VAR_4);



 FUNC_0(VAR_5->regmap, VAR_0, 0);
 if (!VAR_5->master)
  FUNC_0(VAR_5->regmap, VAR_0, 5);

 return 0;
}
