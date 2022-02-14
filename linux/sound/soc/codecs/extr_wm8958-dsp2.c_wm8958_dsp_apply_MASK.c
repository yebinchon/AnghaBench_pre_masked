
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8994_priv {int dsp_active; scalar_t__* mbc_ena; scalar_t__* hpf2_ena; scalar_t__* hpf1_ena; scalar_t__* vss_ena; scalar_t__* enh_eq_ena; } ;
struct snd_soc_component {int dev; } ;


 int FUNC_0 (int,char*,int) ;
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
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_1 (int ,char*,...) ;
 struct wm8994_priv* FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_component*,int ) ;
 int FUNC_4 (struct snd_soc_component*,int ,int,int) ;
 int FUNC_5 (struct snd_soc_component*,int ,int ) ;
 int FUNC_6 (struct snd_soc_component*,int) ;
 int FUNC_7 (struct snd_soc_component*,int) ;
 int FUNC_8 (struct snd_soc_component*,int) ;

__attribute__((used)) static void FUNC_9(struct snd_soc_component *VAR_21, int VAR_22, int VAR_23)
{
 struct wm8994_priv *VAR_24 = FUNC_2(VAR_21);
 int VAR_25 = FUNC_3(VAR_21, VAR_20);
 int VAR_26, VAR_27, VAR_28;

 switch (VAR_22) {
 case 0:
  VAR_25 &= (VAR_10 | VAR_11);
  VAR_28 = 0;
  break;
 case 1:
  VAR_25 &= (VAR_12 | VAR_13);
  VAR_28 = 0;
  break;
 case 2:
  VAR_25 &= (VAR_16 | VAR_17);
  VAR_28 = 1;
  break;
 default:
  FUNC_0(1, "Invalid path %d\n", VAR_22);
  return;
 }


 VAR_26 = VAR_24->mbc_ena[VAR_22] || VAR_24->vss_ena[VAR_22] ||
  VAR_24->hpf1_ena[VAR_22] || VAR_24->hpf2_ena[VAR_22] ||
  VAR_24->enh_eq_ena[VAR_22];
 if (!VAR_25)
  VAR_26 = 0;

 VAR_27 = FUNC_3(VAR_21, VAR_6);

 FUNC_1(VAR_21->dev, "DSP path %d %d startup: %d, power: %x, DSP: %x\n",
  VAR_22, VAR_24->dsp_active, VAR_23, VAR_25, VAR_27);

 if (VAR_23 && VAR_26) {

  if (VAR_27 & VAR_4)
   return;


  if (!(FUNC_3(VAR_21, VAR_14)
        & VAR_9) &&
      !(FUNC_3(VAR_21, VAR_18)
        & VAR_15))
   return;


  FUNC_4(VAR_21, VAR_19,
        VAR_1 | VAR_0,
        VAR_28 << VAR_2 |
        VAR_0);

  if (VAR_24->enh_eq_ena[VAR_22])
   FUNC_6(VAR_21, VAR_22);
  else if (VAR_24->vss_ena[VAR_22] || VAR_24->hpf1_ena[VAR_22] ||
      VAR_24->hpf2_ena[VAR_22])
   FUNC_8(VAR_21, VAR_22);
  else if (VAR_24->mbc_ena[VAR_22])
   FUNC_7(VAR_21, VAR_22);

  VAR_24->dsp_active = VAR_22;

  FUNC_1(VAR_21->dev, "DSP running in path %d\n", VAR_22);
 }

 if (!VAR_23 && VAR_24->dsp_active == VAR_22) {

  if (!(VAR_27 & VAR_4))
   return;

  FUNC_4(VAR_21, VAR_3,
        VAR_8, 0);
  FUNC_5(VAR_21, VAR_5,
         VAR_7);
  FUNC_4(VAR_21, VAR_6,
        VAR_4, 0);
  FUNC_4(VAR_21, VAR_19,
        VAR_0, 0);

  VAR_24->dsp_active = -1;

  FUNC_1(VAR_21->dev, "DSP stopped\n");
 }
}
