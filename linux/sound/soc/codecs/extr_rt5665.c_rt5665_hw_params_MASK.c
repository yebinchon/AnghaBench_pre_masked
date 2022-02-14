
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {size_t id; int dev; struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct rt5665_priv {int* lrck; scalar_t__* master; int sysclk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;





 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 unsigned int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 unsigned int VAR_20 ;
 int VAR_21 ;
 unsigned int VAR_22 ;
 unsigned int VAR_23 ;
 int VAR_24 ;
 unsigned int VAR_25 ;
 int VAR_26 ;
 unsigned int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 unsigned int VAR_31 ;
 int FUNC_0 (int ,char*,int,int,size_t) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (struct snd_pcm_hw_params*) ;
 int FUNC_5 (struct snd_pcm_hw_params*) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (struct snd_soc_dai*,int,int,int,int) ;
 struct rt5665_priv* FUNC_8 (struct snd_soc_component*) ;
 int FUNC_9 (struct snd_soc_component*,int ,int ,int ,int) ;
 int FUNC_10 (struct snd_soc_component*,int ,int ,int,int ) ;
 int FUNC_11 (struct snd_soc_component*,unsigned int,int,int) ;
 int FUNC_12 (struct snd_pcm_hw_params*) ;

__attribute__((used)) static int FUNC_13(struct snd_pcm_substream *VAR_32,
 struct snd_pcm_hw_params *VAR_33, struct snd_soc_dai *VAR_34)
{
 struct snd_soc_component *VAR_35 = VAR_34->component;
 struct rt5665_priv *VAR_36 = FUNC_8(VAR_35);
 unsigned int VAR_37 = 0, VAR_38, VAR_39, VAR_40, VAR_41 = 0x0100;
 int VAR_42, VAR_43;

 VAR_36->lrck[VAR_34->id] = FUNC_4(VAR_33);
 VAR_42 = FUNC_6(VAR_36->sysclk, VAR_36->lrck[VAR_34->id]);
 if (VAR_42 < 0) {
  FUNC_2(VAR_35->dev, "Force using PLL");
  FUNC_9(VAR_35, 0, VAR_29,
   VAR_36->sysclk, VAR_36->lrck[VAR_34->id] * 512);
  FUNC_10(VAR_35, VAR_30, 0,
   VAR_36->lrck[VAR_34->id] * 512, 0);
  VAR_42 = 1;
 }
 VAR_43 = FUNC_12(VAR_33);
 if (VAR_43 < 0) {
  FUNC_1(VAR_35->dev, "Unsupported frame size: %d\n", VAR_43);
  return -VAR_0;
 }

 FUNC_0(VAR_34->dev, "lrck is %dHz and pre_div is %d for iis %d\n",
    VAR_36->lrck[VAR_34->id], VAR_42, VAR_34->id);

 switch (FUNC_5(VAR_33)) {
 case 16:
  VAR_41 = 0x0100;
  break;
 case 20:
  VAR_37 |= VAR_18;
  VAR_41 = 0x1300;
  break;
 case 24:
  VAR_37 |= VAR_19;
  VAR_41 = 0x2500;
  break;
 case 8:
  VAR_37 |= VAR_20;
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_34->id) {
 case 132:
 case 131:
  if (FUNC_3(VAR_33) > 2)
   FUNC_7(VAR_34, 0xf, 0xf,
    FUNC_3(VAR_33), FUNC_5(VAR_33));
  VAR_39 = VAR_5;
  VAR_40 = VAR_23;
  VAR_38 = VAR_42 << VAR_24;
  FUNC_11(VAR_35, VAR_11,
   VAR_21, VAR_37);
  break;
 case 130:
 case 129:
  VAR_39 = VAR_6;
  VAR_40 = VAR_25;
  VAR_38 = VAR_42 << VAR_26;
  FUNC_11(VAR_35, VAR_14,
   VAR_21, VAR_37);
  break;
 case 128:
  VAR_39 = VAR_6;
  VAR_40 = VAR_27;
  VAR_38 = VAR_42 << VAR_28;
  FUNC_11(VAR_35, VAR_17,
   VAR_21, VAR_37);
  break;
 default:
  FUNC_1(VAR_35->dev, "Invalid dai->id: %d\n", VAR_34->id);
  return -VAR_0;
 }

 FUNC_11(VAR_35, VAR_39, VAR_40, VAR_38);
 FUNC_11(VAR_35, VAR_31, 0x3700, VAR_41);

 switch (VAR_36->lrck[VAR_34->id]) {
 case 192000:
  FUNC_11(VAR_35, VAR_5,
   VAR_10 | VAR_4,
   VAR_8 | VAR_2);
  break;
 case 96000:
  FUNC_11(VAR_35, VAR_5,
   VAR_10 | VAR_4,
   VAR_9 | VAR_3);
  break;
 default:
  FUNC_11(VAR_35, VAR_5,
   VAR_10 | VAR_4,
   VAR_7 | VAR_1);
  break;
 }

 if (VAR_36->master[130] || VAR_36->master[129]) {
  FUNC_11(VAR_35, VAR_22,
   VAR_12, VAR_42 << VAR_13);
 }
 if (VAR_36->master[128]) {
  FUNC_11(VAR_35, VAR_22,
   VAR_15, VAR_42 << VAR_16);
 }

 return 0;
}
