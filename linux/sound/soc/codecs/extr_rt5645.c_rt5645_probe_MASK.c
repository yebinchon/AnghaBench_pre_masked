
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_component {int dev; TYPE_1__* card; } ;
struct TYPE_4__ {scalar_t__ long_name; scalar_t__ jd_mode; } ;
struct rt5645_priv {int codec_type; int v_id; int eq_param; TYPE_2__ pdata; struct snd_soc_component* component; } ;
struct rt5645_eq_param_s {int dummy; } ;
struct TYPE_3__ {scalar_t__ long_name; } ;


 int FUNC_0 (int ) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct snd_soc_component*,int ) ;
 struct snd_soc_dapm_context* FUNC_3 (struct snd_soc_component*) ;
 struct rt5645_priv* FUNC_4 (struct snd_soc_component*) ;
 int FUNC_5 (struct snd_soc_dapm_context*,int ,int ) ;
 int FUNC_6 (struct snd_soc_dapm_context*,char*) ;
 int FUNC_7 (struct snd_soc_dapm_context*,int ,int ) ;
 int FUNC_8 (struct snd_soc_dapm_context*) ;

__attribute__((used)) static int FUNC_9(struct snd_soc_component *VAR_9)
{
 struct snd_soc_dapm_context *VAR_10 = FUNC_3(VAR_9);
 struct rt5645_priv *VAR_11 = FUNC_4(VAR_9);

 VAR_11->component = VAR_9;

 switch (VAR_11->codec_type) {
 case 129:
  FUNC_7(VAR_10,
   VAR_6,
   FUNC_0(VAR_6));
  FUNC_5(VAR_10,
   VAR_5,
   FUNC_0(VAR_5));
  if (VAR_11->v_id < 3) {
   FUNC_5(VAR_10,
    VAR_4,
    FUNC_0(VAR_4));
  }
  break;
 case 128:
  FUNC_7(VAR_10,
   VAR_8,
   FUNC_0(VAR_8));
  FUNC_5(VAR_10,
   VAR_7,
   FUNC_0(VAR_7));
  break;
 }

 FUNC_2(VAR_9, VAR_3);


 if (VAR_11->pdata.jd_mode) {
  FUNC_6(VAR_10, "JD Power");
  FUNC_6(VAR_10, "LDO2");
  FUNC_8(VAR_10);
 }

 if (VAR_11->pdata.long_name)
  VAR_9->card->long_name = VAR_11->pdata.long_name;

 VAR_11->eq_param = FUNC_1(VAR_9->dev,
  VAR_2, sizeof(struct rt5645_eq_param_s),
  VAR_1);

 if (!VAR_11->eq_param)
  return -VAR_0;

 return 0;
}
