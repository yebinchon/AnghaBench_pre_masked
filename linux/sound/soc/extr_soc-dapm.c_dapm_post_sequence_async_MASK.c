
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_context {scalar_t__ bias_level; scalar_t__ target_bias_level; scalar_t__ dev; } ;
typedef int async_cookie_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__,char*,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct snd_soc_dapm_context*,scalar_t__) ;

__attribute__((used)) static void FUNC_3(void *VAR_4, async_cookie_t VAR_5)
{
 struct snd_soc_dapm_context *VAR_6 = VAR_4;
 int VAR_7;


 if (VAR_6->bias_level == VAR_2 &&
     (VAR_6->target_bias_level == VAR_3 ||
      VAR_6->target_bias_level == VAR_0)) {
  VAR_7 = FUNC_2(VAR_6, VAR_3);
  if (VAR_7 != 0)
   FUNC_0(VAR_6->dev, "ASoC: Failed to apply standby bias: %d\n",
    VAR_7);
 }


 if (VAR_6->bias_level == VAR_3 &&
     VAR_6->target_bias_level == VAR_0) {
  VAR_7 = FUNC_2(VAR_6, VAR_0);
  if (VAR_7 != 0)
   FUNC_0(VAR_6->dev, "ASoC: Failed to turn off bias: %d\n",
    VAR_7);

  if (VAR_6->dev)
   FUNC_1(VAR_6->dev);
 }


 if (VAR_6->bias_level == VAR_2 &&
     VAR_6->target_bias_level == VAR_1) {
  VAR_7 = FUNC_2(VAR_6, VAR_1);
  if (VAR_7 != 0)
   FUNC_0(VAR_6->dev, "ASoC: Failed to apply active bias: %d\n",
    VAR_7);
 }
}
