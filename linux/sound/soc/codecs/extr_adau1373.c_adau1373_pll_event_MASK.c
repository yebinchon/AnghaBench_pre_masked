
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {char* name; int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct adau1373 {int regmap; } ;


 int FUNC_0 (unsigned int) ;
 unsigned int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ,unsigned int,unsigned int) ;
 struct adau1373* FUNC_4 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct snd_soc_dapm_widget *VAR_1,
 struct snd_kcontrol *VAR_2, int VAR_3)
{
 struct snd_soc_component *VAR_4 = FUNC_5(VAR_1->dapm);
 struct adau1373 *VAR_5 = FUNC_4(VAR_4);
 unsigned int VAR_6 = VAR_1->name[3] - '1';
 unsigned int VAR_7;

 if (FUNC_1(VAR_3))
  VAR_7 = VAR_0;
 else
  VAR_7 = 0;

 FUNC_3(VAR_5->regmap, FUNC_0(VAR_6),
  VAR_0, VAR_7);

 if (FUNC_1(VAR_3))
  FUNC_2(5);

 return 0;
}
