
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct adau {int regmap; } ;
typedef enum adau17x1_micbias_voltage { ____Placeholder_adau17x1_micbias_voltage } adau17x1_micbias_voltage ;


 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 struct adau* FUNC_1 (struct snd_soc_component*) ;

int FUNC_2(struct snd_soc_component *VAR_2,
 enum adau17x1_micbias_voltage VAR_3)
{
 struct adau *VAR_4 = FUNC_1(VAR_2);

 switch (VAR_3) {
 case 128:
 case 129:
  break;
 default:
  return -VAR_1;
 }

 return FUNC_0(VAR_4->regmap, VAR_0, VAR_3 << 2);
}
