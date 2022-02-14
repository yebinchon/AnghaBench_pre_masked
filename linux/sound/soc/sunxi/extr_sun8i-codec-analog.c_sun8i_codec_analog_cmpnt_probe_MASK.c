
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun8i_codec_analog_quirks {scalar_t__ has_mic2; scalar_t__ has_mbias; scalar_t__ has_lineout; scalar_t__ has_linein; scalar_t__ has_hmic; scalar_t__ has_headphone; } ;
struct snd_soc_component {struct device* dev; } ;
struct device {int dummy; } ;


 struct sun8i_codec_analog_quirks* FUNC_0 (struct device*) ;
 int FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_component*) ;
 int FUNC_4 (struct snd_soc_component*) ;
 int FUNC_5 (struct snd_soc_component*) ;
 int FUNC_6 (struct snd_soc_component*) ;
 int FUNC_7 (struct snd_soc_component*,struct sun8i_codec_analog_quirks const*) ;

__attribute__((used)) static int FUNC_8(struct snd_soc_component *VAR_0)
{
 struct device *VAR_1 = VAR_0->dev;
 const struct sun8i_codec_analog_quirks *VAR_2;
 int VAR_3;






 VAR_2 = FUNC_0(VAR_1);


 VAR_3 = FUNC_7(VAR_0, VAR_2);
 if (VAR_3)
  return VAR_3;

 if (VAR_2->has_headphone) {
  VAR_3 = FUNC_1(VAR_0);
  if (VAR_3)
   return VAR_3;
 }

 if (VAR_2->has_hmic) {
  VAR_3 = FUNC_2(VAR_0);
  if (VAR_3)
   return VAR_3;
 }

 if (VAR_2->has_linein) {
  VAR_3 = FUNC_3(VAR_0);
  if (VAR_3)
   return VAR_3;
 }

 if (VAR_2->has_lineout) {
  VAR_3 = FUNC_4(VAR_0);
  if (VAR_3)
   return VAR_3;
 }

 if (VAR_2->has_mbias) {
  VAR_3 = FUNC_5(VAR_0);
  if (VAR_3)
   return VAR_3;
 }

 if (VAR_2->has_mic2) {
  VAR_3 = FUNC_6(VAR_0);
  if (VAR_3)
   return VAR_3;
 }

 return 0;
}
