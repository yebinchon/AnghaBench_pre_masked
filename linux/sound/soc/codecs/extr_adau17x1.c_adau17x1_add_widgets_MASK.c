
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_component {int dev; } ;
struct adau {int sigmadsp; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct adau*) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,struct snd_soc_component*) ;
 int FUNC_4 (struct snd_soc_component*,int ,int ) ;
 struct snd_soc_dapm_context* FUNC_5 (struct snd_soc_component*) ;
 struct adau* FUNC_6 (struct snd_soc_component*) ;
 int FUNC_7 (struct snd_soc_dapm_context*,int ,int ) ;

int FUNC_8(struct snd_soc_component *VAR_3)
{
 struct snd_soc_dapm_context *VAR_4 = FUNC_5(VAR_3);
 struct adau *VAR_5 = FUNC_6(VAR_3);
 int VAR_6;

 VAR_6 = FUNC_4(VAR_3, VAR_0,
  FUNC_0(VAR_0));
 if (VAR_6)
  return VAR_6;
 VAR_6 = FUNC_7(VAR_4, VAR_1,
  FUNC_0(VAR_1));
 if (VAR_6)
  return VAR_6;

 if (FUNC_1(VAR_5)) {
  VAR_6 = FUNC_7(VAR_4, VAR_2,
   FUNC_0(VAR_2));
  if (VAR_6)
   return VAR_6;

  if (!VAR_5->sigmadsp)
   return 0;

  VAR_6 = FUNC_3(VAR_5->sigmadsp, VAR_3);
  if (VAR_6) {
   FUNC_2(VAR_3->dev, "Failed to attach firmware: %d\n",
    VAR_6);
   return VAR_6;
  }
 }

 return 0;
}
