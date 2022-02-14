
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_dai {int id; TYPE_1__* driver; struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct arizona_priv {struct arizona* arizona; } ;
struct TYPE_4__ {int* max_channels_clocked; } ;
struct arizona {int* tdm_width; int* tdm_slots; int regmap; TYPE_2__ pdata; } ;
struct TYPE_3__ {int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (int*) ;
 int VAR_18 ;
 int* VAR_19 ;
 int* VAR_20 ;
 int FUNC_1 (struct snd_soc_component*,int,int,int,int) ;
 int FUNC_2 (struct snd_soc_dai*,char*,...) ;
 int FUNC_3 (struct snd_soc_dai*,char*,int const) ;
 int FUNC_4 (struct snd_pcm_substream*,struct snd_pcm_hw_params*,struct snd_soc_dai*) ;
 int FUNC_5 (struct snd_pcm_hw_params*) ;
 int const FUNC_6 (struct snd_pcm_hw_params*) ;
 int FUNC_7 (struct snd_pcm_hw_params*) ;
 int FUNC_8 (int ,scalar_t__,int,unsigned int) ;
 int FUNC_9 (int ,scalar_t__,int,unsigned int) ;
 struct arizona_priv* FUNC_10 (struct snd_soc_component*) ;
 void* FUNC_11 (struct snd_soc_component*,scalar_t__) ;
 int FUNC_12 (struct snd_pcm_hw_params*) ;

__attribute__((used)) static int FUNC_13(struct snd_pcm_substream *VAR_21,
        struct snd_pcm_hw_params *VAR_22,
        struct snd_soc_dai *VAR_23)
{
 struct snd_soc_component *VAR_24 = VAR_23->component;
 struct arizona_priv *VAR_25 = FUNC_10(VAR_24);
 struct arizona *VAR_26 = VAR_25->arizona;
 int VAR_27 = VAR_23->driver->base;
 const int *VAR_28;
 int VAR_29, VAR_30, VAR_31;
 int VAR_32 = FUNC_5(VAR_22);
 int VAR_33 = VAR_26->pdata.max_channels_clocked[VAR_23->id - 1];
 int VAR_34 = VAR_26->tdm_width[VAR_23->id - 1];
 int VAR_35 = VAR_26->tdm_slots[VAR_23->id - 1];
 int VAR_36, VAR_37, VAR_38, VAR_39, VAR_40;
 bool VAR_41;
 unsigned int VAR_42, VAR_43;

 if (FUNC_6(VAR_22) % 4000)
  VAR_28 = &VAR_19[0];
 else
  VAR_28 = &VAR_20[0];

 VAR_38 = FUNC_7(VAR_22);

 if (VAR_35) {
  FUNC_2(VAR_23, "Configuring for %d %d bit TDM slots\n",
    VAR_35, VAR_34);
  VAR_40 = VAR_35 * VAR_34 * FUNC_6(VAR_22);
  VAR_32 = VAR_35;
 } else {
  VAR_40 = FUNC_12(VAR_22);
  VAR_34 = VAR_38;
 }

 if (VAR_33 && VAR_33 < VAR_32) {
  FUNC_2(VAR_23, "Limiting to %d channels\n", VAR_33);
  VAR_40 /= VAR_32;
  VAR_40 *= VAR_33;
 }


 VAR_31 = FUNC_11(VAR_24, VAR_27 + VAR_10);
 VAR_31 &= VAR_8;
 if ((VAR_32 & 1) && (VAR_31 == VAR_17)) {
  FUNC_2(VAR_23, "Forcing stereo mode\n");
  VAR_40 /= VAR_32;
  VAR_40 *= VAR_32 + 1;
 }

 for (VAR_29 = 0; VAR_29 < FUNC_0(VAR_19); VAR_29++) {
  if (VAR_28[VAR_29] >= VAR_40 &&
      VAR_28[VAR_29] % FUNC_6(VAR_22) == 0) {
   VAR_36 = VAR_29;
   break;
  }
 }
 if (VAR_29 == FUNC_0(VAR_19)) {
  FUNC_3(VAR_23, "Unsupported sample rate %dHz\n",
    FUNC_6(VAR_22));
  return -VAR_18;
 }

 VAR_37 = VAR_28[VAR_36] / FUNC_6(VAR_22);

 FUNC_2(VAR_23, "BCLK %dHz LRCLK %dHz\n",
   VAR_28[VAR_36], VAR_28[VAR_36] / VAR_37);

 VAR_39 = VAR_38 << VAR_6 | VAR_34;

 VAR_41 = FUNC_1(VAR_24, VAR_27, VAR_36, VAR_37, VAR_39);

 if (VAR_41) {

  VAR_42 = FUNC_11(VAR_24,
         VAR_27 + VAR_16);
  VAR_43 = FUNC_11(VAR_24,
         VAR_27 + VAR_14);

  FUNC_9(VAR_26->regmap,
      VAR_27 + VAR_16,
      0xff, 0x0);
  FUNC_8(VAR_26->regmap,
       VAR_27 + VAR_14, 0xff, 0x0);
 }

 VAR_30 = FUNC_4(VAR_21, VAR_22, VAR_23);
 if (VAR_30 != 0)
  goto restore_aif;

 if (VAR_41) {
  FUNC_9(VAR_26->regmap,
      VAR_27 + VAR_9,
      VAR_7, VAR_36);
  FUNC_9(VAR_26->regmap,
      VAR_27 + VAR_15,
      VAR_3, VAR_37);
  FUNC_9(VAR_26->regmap,
      VAR_27 + VAR_13,
      VAR_0, VAR_37);
  FUNC_9(VAR_26->regmap,
      VAR_27 + VAR_11,
      VAR_5 |
      VAR_4, VAR_39);
  FUNC_8(VAR_26->regmap,
       VAR_27 + VAR_12,
       VAR_2 |
       VAR_1, VAR_39);
 }

restore_aif:
 if (VAR_41) {

  FUNC_9(VAR_26->regmap,
      VAR_27 + VAR_16,
      0xff, VAR_42);
  FUNC_8(VAR_26->regmap,
       VAR_27 + VAR_14,
       0xff, VAR_43);
 }
 return VAR_30;
}
