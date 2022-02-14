
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_soc_component {int dev; } ;
typedef enum da7218_micbias_voltage { ____Placeholder_da7218_micbias_voltage } da7218_micbias_voltage ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static enum da7218_micbias_voltage
 FUNC_1(struct snd_soc_component *VAR_9, u32 VAR_10)
{
 switch (VAR_10) {
 case 1200:
  return VAR_0;
 case 1600:
  return VAR_1;
 case 1800:
  return VAR_2;
 case 2000:
  return VAR_3;
 case 2200:
  return VAR_4;
 case 2400:
  return VAR_5;
 case 2600:
  return VAR_6;
 case 2800:
  return VAR_7;
 case 3000:
  return VAR_8;
 default:
  FUNC_0(VAR_9->dev, "Invalid micbias level");
  return VAR_1;
 }
}
