
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct da7210_priv {scalar_t__ mclk_rate; int master; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_0 (struct snd_pcm_hw_params*) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 struct da7210_priv* FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_component*,int ) ;
 int FUNC_4 (struct snd_soc_component*,int ,scalar_t__,scalar_t__) ;
 int FUNC_5 (struct snd_soc_component*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_30,
       struct snd_pcm_hw_params *VAR_31,
       struct snd_soc_dai *VAR_32)
{
 struct snd_soc_component *VAR_33 = VAR_32->component;
 struct da7210_priv *VAR_34 = FUNC_2(VAR_33);
 u32 VAR_35;
 u32 VAR_36, VAR_37;


 FUNC_5(VAR_33, VAR_6,
       VAR_5 | VAR_4);


 FUNC_5(VAR_33, VAR_1, VAR_3 | VAR_2);

 VAR_35 = 0xFC & FUNC_3(VAR_33, VAR_0);

 switch (FUNC_1(VAR_31)) {
 case 16:
  VAR_35 |= VAR_7;
  break;
 case 20:
  VAR_35 |= VAR_8;
  break;
 case 24:
  VAR_35 |= VAR_9;
  break;
 case 32:
  VAR_35 |= VAR_10;
  break;
 default:
  return -VAR_29;
 }

 FUNC_5(VAR_33, VAR_0, VAR_35);

 switch (FUNC_0(VAR_31)) {
 case 8000:
  VAR_36 = VAR_23;
  VAR_37 = 3072000;
  break;
 case 11025:
  VAR_36 = VAR_16;
  VAR_37 = 2822400;
  break;
 case 12000:
  VAR_36 = VAR_17;
  VAR_37 = 3072000;
  break;
 case 16000:
  VAR_36 = VAR_18;
  VAR_37 = 3072000;
  break;
 case 22050:
  VAR_36 = VAR_19;
  VAR_37 = 2822400;
  break;
 case 32000:
  VAR_36 = VAR_20;
  VAR_37 = 3072000;
  break;
 case 44100:
  VAR_36 = VAR_21;
  VAR_37 = 2822400;
  break;
 case 48000:
  VAR_36 = VAR_22;
  VAR_37 = 3072000;
  break;
 case 88200:
  VAR_36 = VAR_24;
  VAR_37 = 2822400;
  break;
 case 96000:
  VAR_36 = VAR_25;
  VAR_37 = 3072000;
  break;
 default:
  return -VAR_29;
 }


 FUNC_4(VAR_33, VAR_28, VAR_27, 0);

 FUNC_4(VAR_33, VAR_13, VAR_26, VAR_36);

 if (VAR_34->mclk_rate && (VAR_34->mclk_rate != VAR_37)) {

  FUNC_4(VAR_33, VAR_15, VAR_14, 0);

  if (!VAR_34->master) {

   FUNC_4(VAR_33, VAR_13,
         (VAR_12 |
          VAR_11),
         (VAR_12 |
          VAR_11));
  }
 } else {

  FUNC_4(VAR_33, VAR_13, VAR_11,
             VAR_11);
  FUNC_4(VAR_33, VAR_15, VAR_14,
           VAR_14);
 }

 FUNC_4(VAR_33, VAR_28,
       VAR_27, VAR_27);

 return 0;
}
