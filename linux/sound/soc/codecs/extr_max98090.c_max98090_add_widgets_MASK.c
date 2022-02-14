
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_component {int dummy; } ;
struct max98090_priv {scalar_t__ devtype; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct snd_soc_component*,int ,int ) ;
 struct snd_soc_dapm_context* FUNC_2 (struct snd_soc_component*) ;
 struct max98090_priv* FUNC_3 (struct snd_soc_component*) ;
 int FUNC_4 (struct snd_soc_dapm_context*,int ,int ) ;
 int FUNC_5 (struct snd_soc_dapm_context*,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct snd_soc_component *VAR_7)
{
 struct max98090_priv *VAR_8 = FUNC_3(VAR_7);
 struct snd_soc_dapm_context *VAR_9 = FUNC_2(VAR_7);

 FUNC_1(VAR_7, VAR_3,
  FUNC_0(VAR_3));

 if (VAR_8->devtype == VAR_0) {
  FUNC_1(VAR_7, VAR_6,
   FUNC_0(VAR_6));
 }

 FUNC_5(VAR_9, VAR_2,
  FUNC_0(VAR_2));

 FUNC_4(VAR_9, VAR_1,
  FUNC_0(VAR_1));

 if (VAR_8->devtype == VAR_0) {
  FUNC_5(VAR_9, VAR_5,
   FUNC_0(VAR_5));

  FUNC_4(VAR_9, VAR_4,
   FUNC_0(VAR_4));
 }

 return 0;
}
