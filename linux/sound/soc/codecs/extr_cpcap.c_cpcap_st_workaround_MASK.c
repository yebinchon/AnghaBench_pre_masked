
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct cpcap_audio {scalar_t__ vendor; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 struct cpcap_audio* FUNC_2 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_dapm_widget *VAR_8,
          struct snd_kcontrol *VAR_9, int VAR_10)
{
 struct snd_soc_component *VAR_11 = FUNC_3(VAR_8->dapm);
 struct cpcap_audio *VAR_12 = FUNC_2(VAR_11);
 int VAR_13 = 0;


 if (VAR_12->vendor != VAR_2)
  return 0;

 switch (VAR_10) {
 case 128:
  VAR_13 = FUNC_1(VAR_12->regmap, VAR_1,
       VAR_7);
  if (VAR_13)
   return VAR_13;
  VAR_13 = FUNC_1(VAR_12->regmap, VAR_0,
       VAR_5);
  break;
 case 129:
  FUNC_0(VAR_3);

  VAR_13 = FUNC_1(VAR_12->regmap, VAR_0,
       VAR_4);
  if (VAR_13)
   return VAR_13;
  VAR_13 = FUNC_1(VAR_12->regmap, VAR_1,
       VAR_6);
  break;
 default:
  break;
 }

 return VAR_13;
}
