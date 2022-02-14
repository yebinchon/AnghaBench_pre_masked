
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wm8996_priv {int dcs_pending; int hpout_pending; int hpout_ena; } ;
struct snd_soc_component {int dev; } ;
typedef enum snd_soc_dapm_type { ____Placeholder_snd_soc_dapm_type } snd_soc_dapm_type ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (int ,char*,int,...) ;
 struct wm8996_priv* FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (struct snd_soc_component*,int ,int,int) ;
 int FUNC_3 (struct snd_soc_component*,int) ;

__attribute__((used)) static void FUNC_4(struct snd_soc_component *VAR_19,
    enum snd_soc_dapm_type VAR_20, int VAR_21)
{
 struct wm8996_priv *VAR_22 = FUNC_1(VAR_19);
 u16 VAR_23, VAR_24;


 if (VAR_22->dcs_pending) {
  FUNC_0(VAR_19->dev, "Starting DC servo for %x\n",
   VAR_22->dcs_pending);


  FUNC_3(VAR_19, VAR_22->dcs_pending
             << VAR_6);

  VAR_22->dcs_pending = 0;
 }

 if (VAR_22->hpout_pending != VAR_22->hpout_ena) {
  FUNC_0(VAR_19->dev, "Applying RMV_SHORTs %x->%x\n",
   VAR_22->hpout_ena, VAR_22->hpout_pending);

  VAR_23 = 0;
  VAR_24 = 0;
  if (VAR_22->hpout_pending & VAR_0) {
   VAR_23 |= VAR_9 | VAR_8;
   VAR_24 |= VAR_9 | VAR_8;
  } else {
   VAR_24 |= VAR_9 |
    VAR_8 |
    VAR_7;
  }

  if (VAR_22->hpout_pending & VAR_1) {
   VAR_23 |= VAR_12 | VAR_11;
   VAR_24 |= VAR_12 | VAR_11;
  } else {
   VAR_24 |= VAR_12 |
    VAR_11 |
    VAR_10;
  }

  FUNC_2(VAR_19, VAR_4, VAR_24, VAR_23);

  VAR_23 = 0;
  VAR_24 = 0;
  if (VAR_22->hpout_pending & VAR_2) {
   VAR_23 |= VAR_15 | VAR_14;
   VAR_24 |= VAR_15 | VAR_14;
  } else {
   VAR_24 |= VAR_15 |
    VAR_14 |
    VAR_13;
  }

  if (VAR_22->hpout_pending & VAR_3) {
   VAR_23 |= VAR_18 | VAR_17;
   VAR_24 |= VAR_18 | VAR_17;
  } else {
   VAR_24 |= VAR_18 |
    VAR_17 |
    VAR_16;
  }

  FUNC_2(VAR_19, VAR_5, VAR_24, VAR_23);

  VAR_22->hpout_ena = VAR_22->hpout_pending;
 }
}
