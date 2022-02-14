
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_soc_component {int dev; } ;
typedef enum da7219_aad_jack_ins_deb { ____Placeholder_da7219_aad_jack_ins_deb } da7219_aad_jack_ins_deb ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static enum da7219_aad_jack_ins_deb
 FUNC_1(struct snd_soc_component *VAR_8, u32 VAR_9)
{
 switch (VAR_9) {
 case 5:
  return VAR_7;
 case 10:
  return VAR_1;
 case 20:
  return VAR_4;
 case 50:
  return VAR_6;
 case 100:
  return VAR_0;
 case 200:
  return VAR_3;
 case 500:
  return VAR_5;
 case 1000:
  return VAR_2;
 default:
  FUNC_0(VAR_8->dev, "Invalid jack insert debounce");
  return VAR_4;
 }
}
