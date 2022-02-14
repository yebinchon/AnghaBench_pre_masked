
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int id; struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct rt1011_priv {int lrck; int bclk; int sysclk; } ;


 int VAR_0 ;

 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 unsigned int VAR_20 ;
 unsigned int VAR_21 ;
 unsigned int VAR_22 ;
 unsigned int VAR_23 ;
 unsigned int VAR_24 ;
 unsigned int VAR_25 ;
 unsigned int VAR_26 ;
 unsigned int VAR_27 ;
 unsigned int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_0 (int ,char*,int,int,int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (struct snd_pcm_hw_params*) ;
 int FUNC_5 (int ,int) ;
 struct rt1011_priv* FUNC_6 (struct snd_soc_component*) ;
 int FUNC_7 (struct snd_soc_component*,int ,unsigned int,unsigned int) ;
 int FUNC_8 (struct snd_soc_dai*,int ,int ,int,int) ;
 int FUNC_9 (struct snd_soc_dai*,int ,int,int ) ;
 int FUNC_10 (struct snd_pcm_hw_params*) ;

__attribute__((used)) static int FUNC_11(struct snd_pcm_substream *VAR_33,
 struct snd_pcm_hw_params *VAR_34, struct snd_soc_dai *VAR_35)
{
 struct snd_soc_component *VAR_36 = VAR_35->component;
 struct rt1011_priv *VAR_37 = FUNC_6(VAR_36);
 unsigned int VAR_38 = 0, VAR_39 = 0, VAR_40, VAR_41;
 int VAR_42, VAR_43, VAR_44;

 VAR_37->lrck = FUNC_3(VAR_34);
 VAR_42 = FUNC_5(VAR_37->sysclk, VAR_37->lrck);
 if (VAR_42 < 0) {
  FUNC_2(VAR_36->dev, "Force using PLL ");
  FUNC_8(VAR_35, 0, VAR_29,
   VAR_37->lrck * 64, VAR_37->lrck * 256);
  FUNC_9(VAR_35, VAR_4,
   VAR_37->lrck * 256, VAR_32);
  VAR_42 = 0;
 }
 VAR_44 = FUNC_10(VAR_34);
 if (VAR_44 < 0) {
  FUNC_1(VAR_36->dev, "Unsupported frame size: %d\n",
   VAR_44);
  return -VAR_0;
 }

 VAR_43 = VAR_44 > 32;
 VAR_37->bclk = VAR_37->lrck * (32 << VAR_43);

 FUNC_0(VAR_36->dev, "bclk_ms is %d and pre_div is %d for iis %d\n",
    VAR_43, VAR_42, VAR_35->id);

 FUNC_0(VAR_36->dev, "lrck is %dHz and pre_div is %d for iis %d\n",
    VAR_37->lrck, VAR_42, VAR_35->id);

 switch (FUNC_4(VAR_34)) {
 case 16:
  VAR_38 |= VAR_23;
  VAR_38 |= VAR_17;
  VAR_39 |= VAR_11;
  VAR_39 |= VAR_5;
  break;
 case 20:
  VAR_38 |= VAR_24;
  VAR_38 |= VAR_18;
  VAR_39 |= VAR_12;
  VAR_39 |= VAR_6;
  break;
 case 24:
  VAR_38 |= VAR_25;
  VAR_38 |= VAR_19;
  VAR_39 |= VAR_13;
  VAR_39 |= VAR_7;
  break;
 case 32:
  VAR_38 |= VAR_26;
  VAR_38 |= VAR_20;
  VAR_39 |= VAR_14;
  VAR_39 |= VAR_8;
  break;
 case 8:
  VAR_38 |= VAR_27;
  VAR_38 |= VAR_21;
  VAR_39 |= VAR_15;
  VAR_39 |= VAR_9;
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_35->id) {
 case 128:
  VAR_41 = VAR_2;
  VAR_40 = VAR_42 << VAR_3;
  FUNC_7(VAR_36, VAR_31,
   VAR_28 | VAR_22,
   VAR_38);
  FUNC_7(VAR_36, VAR_30,
   VAR_16 |
   VAR_10,
   VAR_39);
  break;
 default:
  FUNC_1(VAR_36->dev, "Invalid dai->id: %d\n", VAR_35->id);
  return -VAR_0;
 }

 FUNC_7(VAR_36,
  VAR_1, VAR_41, VAR_40);

 return 0;
}
