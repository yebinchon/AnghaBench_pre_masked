
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_component {int dummy; } ;
struct cs42l51_private {scalar_t__ mclk_handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 struct snd_soc_dapm_context* FUNC_2 (struct snd_soc_component*) ;
 struct cs42l51_private* FUNC_3 (struct snd_soc_component*) ;
 int FUNC_4 (struct snd_soc_component*,int ,int) ;
 int FUNC_5 (struct snd_soc_dapm_context*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct snd_soc_component *VAR_3)
{
 int VAR_4, VAR_5;
 struct snd_soc_dapm_context *VAR_6;
 struct cs42l51_private *VAR_7;

 VAR_7 = FUNC_3(VAR_3);
 VAR_6 = FUNC_2(VAR_3);

 if (VAR_7->mclk_handle)
  FUNC_5(VAR_6, VAR_2, 1);
 VAR_5 = FUNC_1(1)
  | VAR_1 | FUNC_0(0);
 VAR_4 = FUNC_4(VAR_3, VAR_0, VAR_5);
 if (VAR_4 < 0)
  return VAR_4;

 return 0;
}
