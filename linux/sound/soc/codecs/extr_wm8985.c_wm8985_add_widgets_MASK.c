
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8985_priv {int dev_type; } ;
struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_component {int dummy; } ;


 int FUNC_0 (int ) ;


 int FUNC_1 (struct snd_soc_component*,int ,int ) ;
 struct snd_soc_dapm_context* FUNC_2 (struct snd_soc_component*) ;
 struct wm8985_priv* FUNC_3 (struct snd_soc_component*) ;
 int FUNC_4 (struct snd_soc_dapm_context*,int ,int ) ;
 int FUNC_5 (struct snd_soc_dapm_context*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_6(struct snd_soc_component *VAR_4)
{
 struct wm8985_priv *VAR_5 = FUNC_3(VAR_4);
 struct snd_soc_dapm_context *VAR_6 = FUNC_2(VAR_4);

 switch (VAR_5->dev_type) {
 case 129:
  FUNC_5(VAR_6, VAR_0,
       FUNC_0(VAR_0));
  break;

 case 128:
  FUNC_1(VAR_4, VAR_3,
   FUNC_0(VAR_3));

  FUNC_5(VAR_6, VAR_2,
   FUNC_0(VAR_2));
  FUNC_4(VAR_6, VAR_1,
   FUNC_0(VAR_1));
  break;
 }

 return 0;
}
