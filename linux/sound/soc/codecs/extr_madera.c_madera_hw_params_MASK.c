
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_soc_dai {int id; TYPE_1__* driver; struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct madera_priv {int* tdm_width; int* tdm_slots; struct madera* madera; } ;
struct TYPE_5__ {unsigned int* max_channels_clocked; } ;
struct TYPE_6__ {TYPE_2__ codec; } ;
struct madera {int regmap; TYPE_3__ pdata; } ;
struct TYPE_4__ {int base; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 unsigned int VAR_16 ;
 int* VAR_17 ;
 int* VAR_18 ;
 int FUNC_1 (struct snd_soc_component*,int,int,int,int) ;
 int FUNC_2 (struct snd_soc_dai*,char*,...) ;
 int FUNC_3 (struct snd_soc_dai*,char*,unsigned int) ;
 int FUNC_4 (struct snd_pcm_substream*,struct snd_pcm_hw_params*,struct snd_soc_dai*) ;
 unsigned int FUNC_5 (struct snd_pcm_hw_params*) ;
 int FUNC_6 (struct snd_pcm_hw_params*) ;
 unsigned int FUNC_7 (struct snd_pcm_hw_params*) ;
 int FUNC_8 (int ,scalar_t__,unsigned int*) ;
 int FUNC_9 (int ,scalar_t__,int,unsigned int) ;
 int FUNC_10 (int ) ;
 struct madera_priv* FUNC_11 (struct snd_soc_component*) ;
 int FUNC_12 (struct snd_soc_component*,scalar_t__,unsigned int*) ;
 int FUNC_13 (struct snd_pcm_hw_params*) ;

__attribute__((used)) static int FUNC_14(struct snd_pcm_substream *VAR_19,
       struct snd_pcm_hw_params *VAR_20,
       struct snd_soc_dai *VAR_21)
{
 struct snd_soc_component *VAR_22 = VAR_21->component;
 struct madera_priv *VAR_23 = FUNC_11(VAR_22);
 struct madera *VAR_24 = VAR_23->madera;
 int VAR_25 = VAR_21->driver->base;
 const int *VAR_26;
 int VAR_27, VAR_28;
 unsigned int VAR_29;
 unsigned int VAR_30 = FUNC_5(VAR_20);
 unsigned int VAR_31 = FUNC_7(VAR_20);
 unsigned int VAR_32 =
   VAR_24->pdata.codec.max_channels_clocked[VAR_21->id - 1];
 int VAR_33 = VAR_23->tdm_width[VAR_21->id - 1];
 int VAR_34 = VAR_23->tdm_slots[VAR_21->id - 1];
 int VAR_35, VAR_36, VAR_37, VAR_38, VAR_39, VAR_40;
 int VAR_41;
 unsigned int VAR_42 = 0, VAR_43 = 0;

 if (VAR_31 % 4000) {
  VAR_26 = &VAR_17[0];
  VAR_40 = FUNC_0(VAR_17);
 } else {
  VAR_26 = &VAR_18[0];
  VAR_40 = FUNC_0(VAR_18);
 }

 VAR_37 = FUNC_10(FUNC_6(VAR_20));

 if (VAR_34) {
  FUNC_2(VAR_21, "Configuring for %d %d bit TDM slots\n",
          VAR_34, VAR_33);
  VAR_39 = VAR_34 * VAR_33 * VAR_31;
  VAR_30 = VAR_34;
 } else {
  VAR_39 = FUNC_13(VAR_20);
  VAR_33 = VAR_37;
 }

 if (VAR_32 && VAR_32 < VAR_30) {
  FUNC_2(VAR_21, "Limiting to %d channels\n", VAR_32);
  VAR_39 /= VAR_30;
  VAR_39 *= VAR_32;
 }


 VAR_28 = FUNC_12(VAR_22, VAR_25 + VAR_10, &VAR_29);
 if (VAR_28)
  return VAR_28;

 VAR_29 &= VAR_8;
 if ((VAR_30 & 1) && VAR_29 == VAR_16) {
  FUNC_2(VAR_21, "Forcing stereo mode\n");
  VAR_39 /= VAR_30;
  VAR_39 *= VAR_30 + 1;
 }

 for (VAR_27 = 0; VAR_27 < VAR_40; VAR_27++) {
  if (VAR_26[VAR_27] >= VAR_39 && VAR_26[VAR_27] % VAR_31 == 0) {
   VAR_35 = VAR_27;
   break;
  }
 }

 if (VAR_27 == VAR_40) {
  FUNC_3(VAR_21, "Unsupported sample rate %dHz\n", VAR_31);
  return -VAR_0;
 }

 VAR_36 = VAR_26[VAR_35] / VAR_31;

 FUNC_2(VAR_21, "BCLK %dHz LRCLK %dHz\n",
         VAR_26[VAR_35], VAR_26[VAR_35] / VAR_36);

 VAR_38 = VAR_37 << VAR_6 | VAR_33;

 VAR_41 = FUNC_1(VAR_22, VAR_25, VAR_35, VAR_36, VAR_38);
 if (VAR_41 < 0)
  return VAR_41;

 if (VAR_41) {

  FUNC_8(VAR_24->regmap, VAR_25 + VAR_15,
       &VAR_42);
  FUNC_8(VAR_24->regmap, VAR_25 + VAR_14,
       &VAR_43);

  FUNC_9(VAR_24->regmap,
       VAR_25 + VAR_15, 0xff, 0x0);
  FUNC_9(VAR_24->regmap,
       VAR_25 + VAR_14, 0xff, 0x0);
 }

 VAR_28 = FUNC_4(VAR_19, VAR_20, VAR_21);
 if (VAR_28 != 0)
  goto restore_aif;

 if (VAR_41) {
  FUNC_9(VAR_24->regmap,
       VAR_25 + VAR_9,
       VAR_7, VAR_35);
  FUNC_9(VAR_24->regmap,
       VAR_25 + VAR_13,
       VAR_1, VAR_36);
  FUNC_9(VAR_24->regmap,
       VAR_25 + VAR_11,
       VAR_5 |
       VAR_4, VAR_38);
  FUNC_9(VAR_24->regmap,
       VAR_25 + VAR_12,
       VAR_3 |
       VAR_2, VAR_38);
 }

restore_aif:
 if (VAR_41) {

  FUNC_9(VAR_24->regmap,
       VAR_25 + VAR_15,
       0xff, VAR_42);
  FUNC_9(VAR_24->regmap,
       VAR_25 + VAR_14,
       0xff, VAR_43);
 }

 return VAR_28;
}
