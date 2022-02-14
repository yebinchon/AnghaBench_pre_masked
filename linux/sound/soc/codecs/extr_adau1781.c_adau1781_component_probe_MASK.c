
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_component {int dev; } ;
struct adau1781_platform_data {scalar_t__ use_dmic; int right_input_differential; int left_input_differential; } ;
struct adau {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct adau*,int ,int ) ;
 int FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_component*) ;
 struct adau1781_platform_data* FUNC_4 (int ) ;
 struct snd_soc_dapm_context* FUNC_5 (struct snd_soc_component*) ;
 struct adau* FUNC_6 (struct snd_soc_component*) ;
 int FUNC_7 (struct snd_soc_dapm_context*,int ,int ) ;
 int FUNC_8 (struct snd_soc_dapm_context*,int ,int ) ;

__attribute__((used)) static int FUNC_9(struct snd_soc_component *VAR_5)
{
 struct snd_soc_dapm_context *VAR_6 = FUNC_5(VAR_5);
 struct adau1781_platform_data *VAR_7 = FUNC_4(VAR_5->dev);
 struct adau *VAR_8 = FUNC_6(VAR_5);
 int VAR_9;

 VAR_9 = FUNC_3(VAR_5);
 if (VAR_9)
  return VAR_9;

 if (VAR_7) {
  VAR_9 = FUNC_1(VAR_8, VAR_0,
   VAR_7->left_input_differential);
  if (VAR_9)
   return VAR_9;
  VAR_9 = FUNC_1(VAR_8, VAR_1,
   VAR_7->right_input_differential);
  if (VAR_9)
   return VAR_9;
 }

 if (VAR_7 && VAR_7->use_dmic) {
  VAR_9 = FUNC_8(VAR_6,
   VAR_4,
   FUNC_0(VAR_4));
  if (VAR_9)
   return VAR_9;
  VAR_9 = FUNC_7(VAR_6, VAR_3,
   FUNC_0(VAR_3));
  if (VAR_9)
   return VAR_9;
 } else {
  VAR_9 = FUNC_7(VAR_6, VAR_2,
   FUNC_0(VAR_2));
  if (VAR_9)
   return VAR_9;
 }

 VAR_9 = FUNC_2(VAR_5);
 if (VAR_9 < 0)
  return VAR_9;

 return 0;
}
