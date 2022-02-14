
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wm8994_priv {TYPE_2__* wm8994; int jackdet; } ;
struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_component {int dummy; } ;
struct TYPE_3__ {scalar_t__ jd_ext_cap; } ;
struct TYPE_4__ {TYPE_1__ pdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct snd_soc_dapm_context* FUNC_0 (struct snd_soc_component*) ;
 struct wm8994_priv* FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (struct snd_soc_component*,int ,int ,int ) ;
 int FUNC_3 (struct snd_soc_dapm_context*,char*) ;
 int FUNC_4 (struct snd_soc_component*,int ) ;

__attribute__((used)) static void FUNC_5(struct snd_soc_component *VAR_3)
{
 struct snd_soc_dapm_context *VAR_4 = FUNC_0(VAR_3);
 struct wm8994_priv *VAR_5 = FUNC_1(VAR_3);

 if (!VAR_5->jackdet)
  return;

 FUNC_2(VAR_3, VAR_2, VAR_1, 0);

 FUNC_4(VAR_3, VAR_0);

 if (VAR_5->wm8994->pdata.jd_ext_cap)
  FUNC_3(VAR_4, "MICBIAS2");
}
