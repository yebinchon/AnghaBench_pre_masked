
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8962_pdata {scalar_t__ spk_mono; } ;
struct wm8962_priv {struct wm8962_pdata pdata; } ;
struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_component {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct snd_soc_component*,int ,int ) ;
 struct snd_soc_dapm_context* FUNC_2 (struct snd_soc_component*) ;
 struct wm8962_priv* FUNC_3 (struct snd_soc_component*) ;
 int FUNC_4 (struct snd_soc_dapm_context*,int ,int ) ;
 int FUNC_5 (struct snd_soc_dapm_context*,char*) ;
 int FUNC_6 (struct snd_soc_dapm_context*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_7(struct snd_soc_component *VAR_9)
{
 struct wm8962_priv *VAR_10 = FUNC_3(VAR_9);
 struct wm8962_pdata *VAR_11 = &VAR_10->pdata;
 struct snd_soc_dapm_context *VAR_12 = FUNC_2(VAR_9);

 FUNC_1(VAR_9, VAR_4,
        FUNC_0(VAR_4));
 if (VAR_11->spk_mono)
  FUNC_1(VAR_9, VAR_5,
         FUNC_0(VAR_5));
 else
  FUNC_1(VAR_9, VAR_7,
         FUNC_0(VAR_7));


 FUNC_6(VAR_12, VAR_2,
      FUNC_0(VAR_2));
 if (VAR_11->spk_mono)
  FUNC_6(VAR_12, VAR_0,
       FUNC_0(VAR_0));
 else
  FUNC_6(VAR_12, VAR_1,
       FUNC_0(VAR_1));

 FUNC_4(VAR_12, VAR_3,
    FUNC_0(VAR_3));
 if (VAR_11->spk_mono)
  FUNC_4(VAR_12, VAR_6,
     FUNC_0(VAR_6));
 else
  FUNC_4(VAR_12, VAR_8,
     FUNC_0(VAR_8));


 FUNC_5(VAR_12, "Beep");

 return 0;
}
