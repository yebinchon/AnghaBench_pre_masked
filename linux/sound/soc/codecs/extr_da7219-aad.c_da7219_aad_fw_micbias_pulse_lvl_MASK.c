
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_soc_component {int dev; } ;
typedef enum da7219_aad_micbias_pulse_lvl { ____Placeholder_da7219_aad_micbias_pulse_lvl } da7219_aad_micbias_pulse_lvl ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static enum da7219_aad_micbias_pulse_lvl
 FUNC_1(struct snd_soc_component *VAR_3, u32 VAR_4)
{
 switch (VAR_4) {
 case 2800:
  return VAR_0;
 case 2900:
  return VAR_1;
 default:
  FUNC_0(VAR_3->dev, "Invalid micbias pulse level");
  return VAR_2;
 }
}
