
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_component {int dummy; } ;
struct aic3x_priv {int model; } ;






 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct snd_soc_dapm_context* FUNC_1 (struct snd_soc_component*) ;
 struct aic3x_priv* FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_dapm_context*,int ,int ) ;
 int FUNC_4 (struct snd_soc_dapm_context*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_component *VAR_8)
{
 struct aic3x_priv *VAR_9 = FUNC_2(VAR_8);
 struct snd_soc_dapm_context *VAR_10 = FUNC_1(VAR_8);

 switch (VAR_9->model) {
 case 128:
 case 129:
  FUNC_4(VAR_10, VAR_3,
       FUNC_0(VAR_3));
  FUNC_3(VAR_10, VAR_5,
     FUNC_0(VAR_5));
  FUNC_4(VAR_10, VAR_2,
   FUNC_0(VAR_2));
  FUNC_3(VAR_10, VAR_7,
     FUNC_0(VAR_7));
  break;
 case 131:
  FUNC_4(VAR_10, VAR_3,
       FUNC_0(VAR_3));
  FUNC_3(VAR_10, VAR_5,
     FUNC_0(VAR_5));
  FUNC_4(VAR_10, VAR_0,
   FUNC_0(VAR_0));
  FUNC_3(VAR_10, VAR_4,
     FUNC_0(VAR_4));
  break;
 case 130:
  FUNC_4(VAR_10, VAR_1,
    FUNC_0(VAR_1));
  FUNC_3(VAR_10, VAR_6,
    FUNC_0(VAR_6));
  break;
 }

 return 0;
}
