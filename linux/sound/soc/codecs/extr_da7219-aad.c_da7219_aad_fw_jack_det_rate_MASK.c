
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;
typedef enum da7219_aad_jack_det_rate { ____Placeholder_da7219_aad_jack_det_rate } da7219_aad_jack_det_rate ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char const*,char*) ;

__attribute__((used)) static enum da7219_aad_jack_det_rate
 FUNC_2(struct snd_soc_component *VAR_4, const char *VAR_5)
{
 if (!FUNC_1(VAR_5, "32ms_64ms")) {
  return VAR_2;
 } else if (!FUNC_1(VAR_5, "64ms_128ms")) {
  return VAR_3;
 } else if (!FUNC_1(VAR_5, "128ms_256ms")) {
  return VAR_0;
 } else if (!FUNC_1(VAR_5, "256ms_512ms")) {
  return VAR_1;
 } else {
  FUNC_0(VAR_4->dev, "Invalid jack detect rate");
  return VAR_1;
 }
}
