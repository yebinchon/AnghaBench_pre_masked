
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_soc_component {int dev; } ;
typedef enum da7213_dmic_clk_rate { ____Placeholder_da7213_dmic_clk_rate } da7213_dmic_clk_rate ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static enum da7213_dmic_clk_rate
 FUNC_1(struct snd_soc_component *VAR_2, u32 VAR_3)
{
 switch (VAR_3) {
 case 1500000:
  return VAR_0;
 case 3000000:
  return VAR_1;
 default:
  FUNC_0(VAR_2->dev, "Invalid DMIC clock rate\n");
  return VAR_0;
 }
}
