
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wcd9335_codec {int hph_mode; int clsh_ctrl; } ;
struct snd_soc_dapm_widget {int dapm; } ;
struct snd_soc_component {int dev; } ;
struct snd_kcontrol {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,char*,int) ;
 struct wcd9335_codec* FUNC_1 (int ) ;
 int FUNC_2 (struct snd_soc_component*,int ) ;
 struct snd_soc_component* FUNC_3 (int ) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (struct snd_soc_component*,int,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_8(struct snd_soc_dapm_widget *VAR_10,
          struct snd_kcontrol *VAR_11,
          int VAR_12)
{
 struct snd_soc_component *VAR_13 = FUNC_3(VAR_10->dapm);
 struct wcd9335_codec *VAR_14 = FUNC_1(VAR_13->dev);
 int VAR_15 = VAR_14->hph_mode;
 u8 VAR_16;

 switch (VAR_12) {
 case 128:


  VAR_16 = FUNC_2(VAR_13,
    VAR_4) &
    VAR_5;
  if (((VAR_15 == VAR_0) || (VAR_15 == VAR_1) ||
       (VAR_15 == VAR_2)) && (VAR_16 != 0x01)) {
   FUNC_0(VAR_13->dev, "DEM Input not set correctly, hph_mode: %d\n",
    VAR_15);
   return -VAR_3;
  }

  FUNC_7(VAR_14->clsh_ctrl,
        VAR_7,
        VAR_9,
        ((VAR_15 == VAR_1) ?
          VAR_0 : VAR_15));

  FUNC_5(VAR_13, VAR_12, VAR_15);

  break;
 case 129:

  FUNC_4(1000, 1100);

  if (!(FUNC_6(VAR_14->clsh_ctrl) &
     VAR_8))
   FUNC_5(VAR_13, VAR_12, VAR_15);

  FUNC_7(VAR_14->clsh_ctrl, VAR_6,
        VAR_9, ((VAR_15 == VAR_1) ?
      VAR_0 : VAR_15));
  break;
 };

 return 0;
}
