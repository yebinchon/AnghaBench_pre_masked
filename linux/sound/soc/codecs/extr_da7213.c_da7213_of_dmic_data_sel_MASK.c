
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;
typedef enum da7213_dmic_data_sel { ____Placeholder_da7213_dmic_data_sel } da7213_dmic_data_sel ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char const*,char*) ;

__attribute__((used)) static enum da7213_dmic_data_sel
 FUNC_2(struct snd_soc_component *VAR_2, const char *VAR_3)
{
 if (!FUNC_1(VAR_3, "lrise_rfall")) {
  return VAR_1;
 } else if (!FUNC_1(VAR_3, "lfall_rrise")) {
  return VAR_0;
 } else {
  FUNC_0(VAR_2->dev, "Invalid DMIC data select type\n");
  return VAR_1;
 }
}
