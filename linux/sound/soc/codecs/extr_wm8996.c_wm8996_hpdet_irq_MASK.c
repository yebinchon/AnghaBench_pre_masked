
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8996_priv {int detecting; int jack; scalar_t__ jack_mic; } ;
struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_component {int dev; } ;


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
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*) ;
 struct snd_soc_dapm_context* FUNC_2 (struct snd_soc_component*) ;
 struct wm8996_priv* FUNC_3 (struct snd_soc_component*) ;
 int FUNC_4 (struct snd_soc_component*,int ) ;
 int FUNC_5 (struct snd_soc_component*,int ,int,int) ;
 int FUNC_6 (struct snd_soc_dapm_context*,char*) ;
 int FUNC_7 (struct snd_soc_dapm_context*) ;
 int FUNC_8 (int ,int,int) ;

__attribute__((used)) static void FUNC_9(struct snd_soc_component *VAR_16)
{
 struct snd_soc_dapm_context *VAR_17 = FUNC_2(VAR_16);
 struct wm8996_priv *VAR_18 = FUNC_3(VAR_16);
 int VAR_19, VAR_20, VAR_21;




 VAR_21 = VAR_0;

 VAR_20 = FUNC_4(VAR_16, VAR_6);
 if (VAR_20 < 0) {
  FUNC_1(VAR_16->dev, "Failed to read HPDET status\n");
  goto out;
 }

 if (!(VAR_20 & VAR_10)) {
  FUNC_1(VAR_16->dev, "Got HPDET IRQ but HPDET is busy\n");
  goto out;
 }

 VAR_19 = VAR_20 & VAR_11;

 FUNC_0(VAR_16->dev, "HPDET measured %d ohms\n", VAR_19);




 if (VAR_19 >= 126)
  VAR_21 = VAR_2;
 else
  VAR_21 = VAR_0;

out:
 if (VAR_18->jack_mic)
  VAR_21 |= VAR_3;

 FUNC_8(VAR_18->jack, VAR_21,
       VAR_2 | VAR_1);

 VAR_18->detecting = 0;


 if (!(FUNC_4(VAR_16, VAR_15) &
       (VAR_7 | VAR_9)))
  FUNC_5(VAR_16, VAR_5,
        VAR_8 |
        VAR_9, 0);


 FUNC_5(VAR_16, VAR_4,
       VAR_12, 0);
 FUNC_5(VAR_16, VAR_14, VAR_13,
       VAR_13);

 FUNC_6(VAR_17, "Bandgap");
 FUNC_7(VAR_17);
}
