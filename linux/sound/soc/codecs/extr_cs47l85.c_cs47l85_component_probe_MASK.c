
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_component {int dummy; } ;
struct madera {int dapm_ptr_lock; int dapm; int regmap; } ;
struct TYPE_2__ {int * adsp; struct madera* madera; } ;
struct cs47l85 {TYPE_1__ core; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (struct snd_soc_component*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct snd_soc_component*,int ,int) ;
 int FUNC_5 (struct snd_soc_component*,char*) ;
 int FUNC_6 (struct snd_soc_component*) ;
 struct cs47l85* FUNC_7 (struct snd_soc_component*) ;
 int FUNC_8 (struct snd_soc_component*,int ) ;
 int FUNC_9 (int *,struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_10(struct snd_soc_component *VAR_3)
{
 struct cs47l85 *VAR_4 = FUNC_7(VAR_3);
 struct madera *VAR_5 = VAR_4->core.madera;
 int VAR_6, VAR_7;

 FUNC_8(VAR_3, VAR_5->regmap);

 FUNC_2(&VAR_5->dapm_ptr_lock);
 VAR_5->dapm = FUNC_6(VAR_3);
 FUNC_3(&VAR_5->dapm_ptr_lock);

 VAR_7 = FUNC_0(VAR_3);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_1(VAR_3, VAR_0);
 if (VAR_7)
  return VAR_7;

 FUNC_5(VAR_3, "HAPTICS");

 VAR_7 = FUNC_4(VAR_3,
          VAR_2,
          VAR_1);
 if (VAR_7)
  return VAR_7;

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
  FUNC_9(&VAR_4->core.adsp[VAR_6], VAR_3);

 return 0;
}
