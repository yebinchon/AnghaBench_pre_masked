
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun8i_codec_analog_quirks {int has_linein; int has_mic2; } ;
struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_component {struct device* dev; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct device*,char*,int) ;
 struct snd_soc_dapm_context* FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_dapm_context*,int ,int ) ;
 int FUNC_4 (struct snd_soc_dapm_context*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_5(struct snd_soc_component *VAR_3,
     const struct sun8i_codec_analog_quirks *VAR_4)
{
 struct snd_soc_dapm_context *VAR_5 = FUNC_2(VAR_3);
 struct device *VAR_6 = VAR_3->dev;
 int VAR_7;

 if (!VAR_4->has_mic2 && !VAR_4->has_linein) {






  VAR_7 = FUNC_4(VAR_5,
      VAR_2,
      FUNC_0(VAR_2));
  if (VAR_7) {
   FUNC_1(VAR_6, "Failed to add V3s Mixer DAPM widgets: %d\n", VAR_7);
   return VAR_7;
  }
 } else {

  VAR_7 = FUNC_4(VAR_5,
      VAR_1,
      FUNC_0(VAR_1));
  if (VAR_7) {
   FUNC_1(VAR_6, "Failed to add Mixer DAPM widgets: %d\n", VAR_7);
   return VAR_7;
  }
 }

 VAR_7 = FUNC_3(VAR_5, VAR_0,
          FUNC_0(VAR_0));
 if (VAR_7) {
  FUNC_1(VAR_6, "Failed to add Mixer DAPM routes: %d\n", VAR_7);
  return VAR_7;
 }

 return 0;
}
