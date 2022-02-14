
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_component {int dummy; } ;
struct aic31xx_priv {int codec_type; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct snd_soc_dapm_context* FUNC_1 (struct snd_soc_component*) ;
 struct aic31xx_priv* FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_dapm_context*,int ,int ) ;
 int FUNC_4 (struct snd_soc_dapm_context*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_component *VAR_10)
{
 struct snd_soc_dapm_context *VAR_11 = FUNC_1(VAR_10);
 struct aic31xx_priv *VAR_12 = FUNC_2(VAR_10);
 int VAR_13 = 0;

 if (VAR_12->codec_type & VAR_1) {
  VAR_13 = FUNC_4(
   VAR_11, VAR_9,
   FUNC_0(VAR_9));
  if (VAR_13)
   return VAR_13;

  VAR_13 = FUNC_3(VAR_11, VAR_8,
           FUNC_0(VAR_8));
  if (VAR_13)
   return VAR_13;
 } else {
  VAR_13 = FUNC_4(
   VAR_11, VAR_7,
   FUNC_0(VAR_7));
  if (VAR_13)
   return VAR_13;

  VAR_13 = FUNC_3(VAR_11, VAR_6,
           FUNC_0(VAR_6));
  if (VAR_13)
   return VAR_13;
 }

 if (VAR_12->codec_type & VAR_0) {
  VAR_13 = FUNC_4(
   VAR_11, VAR_5,
   FUNC_0(VAR_5));
  if (VAR_13)
   return VAR_13;

  VAR_13 = FUNC_3(VAR_11, VAR_4,
           FUNC_0(VAR_4));
  if (VAR_13)
   return VAR_13;
 } else {
  VAR_13 = FUNC_4(
   VAR_11, VAR_3,
   FUNC_0(VAR_3));
  if (VAR_13)
   return VAR_13;

  VAR_13 = FUNC_3(VAR_11, VAR_2,
           FUNC_0(VAR_2));
  if (VAR_13)
   return VAR_13;
 }

 return 0;
}
