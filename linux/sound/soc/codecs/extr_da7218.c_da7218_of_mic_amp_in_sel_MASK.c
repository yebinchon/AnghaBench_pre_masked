
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;
typedef enum da7218_mic_amp_in_sel { ____Placeholder_da7218_mic_amp_in_sel } da7218_mic_amp_in_sel ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char const*,char*) ;

__attribute__((used)) static enum da7218_mic_amp_in_sel
 FUNC_2(struct snd_soc_component *VAR_3, const char *VAR_4)
{
 if (!FUNC_1(VAR_4, "diff")) {
  return VAR_0;
 } else if (!FUNC_1(VAR_4, "se_p")) {
  return VAR_2;
 } else if (!FUNC_1(VAR_4, "se_n")) {
  return VAR_1;
 } else {
  FUNC_0(VAR_3->dev, "Invalid mic input type selection");
  return VAR_0;
 }
}
