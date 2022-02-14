
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct nau8810 {int regmap; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,unsigned int*) ;
 struct nau8810* FUNC_1 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dapm_widget *VAR_2,
    struct snd_soc_dapm_widget *VAR_3)
{
 struct snd_soc_component *VAR_4 = FUNC_2(VAR_2->dapm);
 struct nau8810 *VAR_5 = FUNC_1(VAR_4);
 unsigned int VAR_6;

 FUNC_0(VAR_5->regmap, VAR_1, &VAR_6);
 return (VAR_6 & VAR_0);
}
