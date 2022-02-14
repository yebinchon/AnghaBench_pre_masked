
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_component {int dummy; } ;
struct rt5663_priv {int codec_ver; int imp_table; struct snd_soc_component* component; } ;


 int FUNC_0 (int ) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct snd_soc_component*,int ,int ) ;
 struct snd_soc_dapm_context* FUNC_2 (struct snd_soc_component*) ;
 struct rt5663_priv* FUNC_3 (struct snd_soc_component*) ;
 int FUNC_4 (struct snd_soc_dapm_context*,int ,int ) ;
 int FUNC_5 (struct snd_soc_dapm_context*,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct snd_soc_component *VAR_7)
{
 struct snd_soc_dapm_context *VAR_8 = FUNC_2(VAR_7);
 struct rt5663_priv *VAR_9 = FUNC_3(VAR_7);

 VAR_9->component = VAR_7;

 switch (VAR_9->codec_ver) {
 case 128:
  FUNC_5(VAR_8,
   VAR_6,
   FUNC_0(VAR_6));
  FUNC_4(VAR_8,
   VAR_5,
   FUNC_0(VAR_5));
  FUNC_1(VAR_7, VAR_4,
   FUNC_0(VAR_4));
  break;
 case 129:
  FUNC_5(VAR_8,
   VAR_3,
   FUNC_0(VAR_3));
  FUNC_4(VAR_8,
   VAR_2,
   FUNC_0(VAR_2));
  FUNC_1(VAR_7, VAR_1,
   FUNC_0(VAR_1));

  if (!VAR_9->imp_table)
   FUNC_1(VAR_7, VAR_0,
    FUNC_0(VAR_0));
  break;
 }

 return 0;
}
