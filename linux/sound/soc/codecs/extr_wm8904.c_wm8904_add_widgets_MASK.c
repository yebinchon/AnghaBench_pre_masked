
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8904_priv {int devtype; } ;
struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_component {int dummy; } ;


 int FUNC_0 (int ) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct snd_soc_component*,int ,int ) ;
 struct snd_soc_dapm_context* FUNC_2 (struct snd_soc_component*) ;
 struct wm8904_priv* FUNC_3 (struct snd_soc_component*) ;
 int FUNC_4 (struct snd_soc_dapm_context*,int ,int ) ;
 int FUNC_5 (struct snd_soc_dapm_context*,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_6(struct snd_soc_component *VAR_12)
{
 struct wm8904_priv *VAR_13 = FUNC_3(VAR_12);
 struct snd_soc_dapm_context *VAR_14 = FUNC_2(VAR_12);

 FUNC_5(VAR_14, VAR_5,
      FUNC_0(VAR_5));
 FUNC_4(VAR_14, VAR_1,
    FUNC_0(VAR_1));

 switch (VAR_13->devtype) {
 case 129:
  FUNC_1(VAR_12, VAR_4,
         FUNC_0(VAR_4));
  FUNC_1(VAR_12, VAR_7,
         FUNC_0(VAR_7));
  FUNC_1(VAR_12, VAR_10,
         FUNC_0(VAR_10));

  FUNC_5(VAR_14, VAR_3,
       FUNC_0(VAR_3));
  FUNC_5(VAR_14, VAR_6,
       FUNC_0(VAR_6));
  FUNC_5(VAR_14, VAR_8,
       FUNC_0(VAR_8));

  FUNC_4(VAR_14, VAR_0,
     FUNC_0(VAR_0));
  FUNC_4(VAR_14, VAR_2,
     FUNC_0(VAR_2));
  FUNC_4(VAR_14, VAR_9,
     FUNC_0(VAR_9));
  break;

 case 128:
  FUNC_1(VAR_12, VAR_7,
         FUNC_0(VAR_7));

  FUNC_5(VAR_14, VAR_6,
       FUNC_0(VAR_6));

  FUNC_4(VAR_14, VAR_2,
     FUNC_0(VAR_2));
  FUNC_4(VAR_14, VAR_11,
     FUNC_0(VAR_11));
  break;
 }

 return 0;
}
