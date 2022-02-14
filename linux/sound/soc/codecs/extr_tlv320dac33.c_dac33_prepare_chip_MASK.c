
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct tlv320dac33_priv {int fifo_mode; int burst_bclkdiv; int mutex; int uthr; int alarm_threshold; int keep_bclk; int chip_power; int refclk; } ;
struct snd_soc_component {int dev; } ;
struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct TYPE_2__ {int rate; int format; } ;


 unsigned int FUNC_0 (int,int ) ;
 unsigned int FUNC_1 (int,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
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
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 unsigned int VAR_25 ;
 int VAR_26 ;
 int FUNC_5 (int) ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_6 (int) ;
 int VAR_31 ;
 unsigned int FUNC_7 (int ) ;
 int VAR_32 ;
 int FUNC_8 (int ) ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;


 int FUNC_9 (struct snd_soc_component*) ;
 void* FUNC_10 (struct snd_soc_component*,int ) ;
 int FUNC_11 (struct snd_soc_component*,int) ;
 int FUNC_12 (struct snd_soc_component*,int ,int) ;
 int FUNC_13 (struct snd_soc_component*,int ,unsigned int) ;
 int FUNC_14 (int ,char*,int) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 struct tlv320dac33_priv* FUNC_17 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_18(struct snd_pcm_substream *VAR_38,
         struct snd_soc_component *VAR_39)
{
 struct tlv320dac33_priv *VAR_40 = FUNC_17(VAR_39);
 unsigned int VAR_41, VAR_42, VAR_43, VAR_44;
 u8 VAR_45, VAR_46, VAR_47;

 switch (VAR_38->runtime->rate) {
 case 44100:
 case 48000:
  VAR_41 = FUNC_0(VAR_38->runtime->rate, VAR_40->refclk);
  VAR_42 = FUNC_1(VAR_38->runtime->rate,
      VAR_40->refclk);
  break;
 default:
  FUNC_14(VAR_39->dev, "unsupported rate %d\n",
   VAR_38->runtime->rate);
  return -VAR_37;
 }


 VAR_45 = FUNC_10(VAR_39, VAR_27);
 VAR_45 &= ~(VAR_24 | VAR_36);

 VAR_47 = FUNC_10(VAR_39, VAR_10);
 VAR_47 &= ~VAR_9;

 VAR_47 &= ~VAR_33;
 switch (VAR_38->runtime->format) {
 case 129:
  VAR_45 |= (VAR_22 | VAR_34);
  VAR_47 |= VAR_33;
  break;
 case 128:
  VAR_45 |= (VAR_23 | VAR_35);
  break;
 default:
  FUNC_14(VAR_39->dev, "unsupported format %d\n",
   VAR_38->runtime->format);
  return -VAR_37;
 }

 FUNC_15(&VAR_40->mutex);

 if (!VAR_40->chip_power) {




  FUNC_16(&VAR_40->mutex);
  return 0;
 }

 FUNC_11(VAR_39, 0);
 FUNC_11(VAR_39, 1);

 VAR_44 = FUNC_10(VAR_39, VAR_16);
 FUNC_12(VAR_39, VAR_16, VAR_44);


 FUNC_13(VAR_39, VAR_19, VAR_41);


 FUNC_12(VAR_39, VAR_4, 96);


 FUNC_12(VAR_39, VAR_17, FUNC_3(2) |
       FUNC_2(1));


 FUNC_12(VAR_39, VAR_18, FUNC_5(4));

 VAR_43 = FUNC_10(VAR_39, VAR_26);
 VAR_43 |= VAR_25 | VAR_6 | VAR_5;
 FUNC_12(VAR_39, VAR_26, VAR_43);

 FUNC_9(VAR_39);

 if (VAR_40->fifo_mode) {


  FUNC_12(VAR_39, VAR_0, FUNC_6(1));
  FUNC_12(VAR_39, VAR_1, 1);


  FUNC_13(VAR_39, VAR_31, VAR_42);


  FUNC_12(VAR_39, VAR_15, VAR_14);
 } else {


  FUNC_12(VAR_39, VAR_0, VAR_30);
  FUNC_12(VAR_39, VAR_1, 0);
 }


 switch (VAR_40->fifo_mode) {
 case 131:
  FUNC_12(VAR_39, VAR_12,
       FUNC_4(VAR_13));
  break;
 case 130:
  FUNC_12(VAR_39, VAR_11,
   FUNC_8(VAR_13));
  break;
 default:

  break;
 }

 VAR_46 = FUNC_10(VAR_39, VAR_28);

 switch (VAR_40->fifo_mode) {
 case 131:






  VAR_47 &= ~VAR_8;
  VAR_47 &= ~VAR_7;
  if (VAR_40->keep_bclk)
   VAR_46 |= VAR_3;
  else
   VAR_46 &= ~VAR_3;
  break;
 case 130:






  VAR_47 &= ~VAR_8;
  VAR_47 |= VAR_7;
  if (VAR_40->keep_bclk)
   VAR_46 |= VAR_3;
  else
   VAR_46 &= ~VAR_3;
  break;
 default:





  VAR_47 |= VAR_8;
  VAR_46 |= VAR_3;
  break;
 }

 FUNC_12(VAR_39, VAR_10, VAR_47);
 FUNC_12(VAR_39, VAR_27, VAR_45);
 FUNC_12(VAR_39, VAR_28, VAR_46);
 if (VAR_40->fifo_mode)
  FUNC_12(VAR_39, VAR_29,
       VAR_40->burst_bclkdiv);
 else
  if (VAR_38->runtime->format == 129)
   FUNC_12(VAR_39, VAR_29, 32);
  else
   FUNC_12(VAR_39, VAR_29, 16);

 switch (VAR_40->fifo_mode) {
 case 131:
  FUNC_13(VAR_39, VAR_2,
         FUNC_7(VAR_40->alarm_threshold));
  break;
 case 130:




  FUNC_13(VAR_39, VAR_32, FUNC_7(VAR_40->uthr));
  FUNC_13(VAR_39, VAR_20,
         FUNC_7(VAR_21));
  break;
 default:
  break;
 }

 FUNC_16(&VAR_40->mutex);

 return 0;
}
