
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_soc_component {int dev; } ;
typedef enum da7219_aad_btn_cfg { ____Placeholder_da7219_aad_btn_cfg } da7219_aad_btn_cfg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static enum da7219_aad_btn_cfg
 FUNC_1(struct snd_soc_component *VAR_7, u32 VAR_8)
{
 switch (VAR_8) {
 case 2:
  return VAR_3;
 case 5:
  return VAR_6;
 case 10:
  return VAR_1;
 case 50:
  return VAR_5;
 case 100:
  return VAR_0;
 case 200:
  return VAR_2;
 case 500:
  return VAR_4;
 default:
  FUNC_0(VAR_7->dev, "Invalid button config");
  return VAR_1;
 }
}
