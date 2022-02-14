
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_soc_component {int dev; } ;
typedef enum da7213_micbias_voltage { ____Placeholder_da7213_micbias_voltage } da7213_micbias_voltage ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static enum da7213_micbias_voltage
 FUNC_1(struct snd_soc_component *VAR_4, u32 VAR_5)
{
 switch (VAR_5) {
 case 1600:
  return VAR_0;
 case 2200:
  return VAR_1;
 case 2500:
  return VAR_2;
 case 3000:
  return VAR_3;
 default:
  FUNC_0(VAR_4->dev, "Invalid micbias level\n");
  return VAR_1;
 }
}
