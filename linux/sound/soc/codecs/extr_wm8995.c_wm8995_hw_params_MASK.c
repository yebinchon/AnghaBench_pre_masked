
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8995_priv {int* aifclk; } ;
struct snd_soc_dai {int id; int dev; struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct snd_pcm_substream {int stream; } ;
struct snd_pcm_hw_params {int dummy; } ;


 int FUNC_0 (int*) ;
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
 int FUNC_1 (int) ;
 int* VAR_20 ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ,char*,int) ;
 int* VAR_21 ;
 int FUNC_4 (struct snd_pcm_hw_params*) ;
 int FUNC_5 (struct snd_pcm_hw_params*) ;
 struct wm8995_priv* FUNC_6 (struct snd_soc_component*) ;
 int FUNC_7 (struct snd_soc_component*,int,int,int) ;
 int FUNC_8 (struct snd_pcm_hw_params*) ;
 int* VAR_22 ;

__attribute__((used)) static int FUNC_9(struct snd_pcm_substream *VAR_23,
       struct snd_pcm_hw_params *VAR_24,
       struct snd_soc_dai *VAR_25)
{
 struct snd_soc_component *VAR_26;
 struct wm8995_priv *VAR_27;
 int VAR_28;
 int VAR_29;
 int VAR_30;
 int VAR_31;
 int VAR_32;
 int VAR_33;
 int VAR_34, VAR_35;
 int VAR_36, VAR_37, VAR_38, VAR_39, VAR_40;

 VAR_26 = VAR_25->component;
 VAR_27 = FUNC_6(VAR_26);

 switch (VAR_25->id) {
 case 0:
  VAR_28 = VAR_9;
  VAR_29 = VAR_6;
  VAR_31 = VAR_10;
  if (VAR_23->stream == VAR_1 ) {

   VAR_30 = VAR_4;
  } else {
   VAR_30 = VAR_2;
   FUNC_2(VAR_26->dev, "AIF1 using split LRCLK\n");
  }
  break;
 case 1:
  VAR_28 = VAR_18;
  VAR_29 = VAR_17;
  VAR_31 = VAR_19;
  if (VAR_23->stream == VAR_1 ) {

   VAR_30 = VAR_16;
  } else {
   VAR_30 = VAR_15;
   FUNC_2(VAR_26->dev, "AIF2 using split LRCLK\n");
  }
  break;
 default:
  return -VAR_0;
 }

 VAR_32 = FUNC_8(VAR_24);
 if (VAR_32 < 0)
  return VAR_32;

 VAR_33 = 0;
 switch (FUNC_5(VAR_24)) {
 case 16:
  break;
 case 20:
  VAR_33 |= (0x1 << VAR_14);
  break;
 case 24:
  VAR_33 |= (0x2 << VAR_14);
  break;
 case 32:
  VAR_33 |= (0x3 << VAR_14);
  break;
 default:
  FUNC_3(VAR_25->dev, "Unsupported word length %u\n",
   FUNC_5(VAR_24));
  return -VAR_0;
 }


 for (VAR_36 = 0; VAR_36 < FUNC_0(VAR_22); ++VAR_36)
  if (VAR_22[VAR_36] == FUNC_4(VAR_24))
   break;
 if (VAR_36 == FUNC_0(VAR_22)) {
  FUNC_3(VAR_25->dev, "Sample rate %d is not supported\n",
   FUNC_4(VAR_24));
  return -VAR_0;
 }
 VAR_37 = VAR_36 << VAR_12;

 FUNC_2(VAR_25->dev, "Sample rate is %dHz\n", VAR_22[VAR_36]);
 FUNC_2(VAR_25->dev, "AIF%dCLK is %dHz, target BCLK %dHz\n",
  VAR_25->id + 1, VAR_27->aifclk[VAR_25->id], VAR_32);


 VAR_38 = 1;
 VAR_39 = FUNC_1((VAR_21[1] * FUNC_4(VAR_24))
         - VAR_27->aifclk[VAR_25->id]);
 for (VAR_36 = 2; VAR_36 < FUNC_0(VAR_21); VAR_36++) {
  VAR_40 = FUNC_1((VAR_21[VAR_36] * FUNC_4(VAR_24))
         - VAR_27->aifclk[VAR_25->id]);
  if (VAR_40 >= VAR_39)
   continue;
  VAR_38 = VAR_36;
  VAR_39 = VAR_40;
 }
 VAR_37 |= VAR_38;

 FUNC_2(VAR_25->dev, "Selected AIF%dCLK/fs = %d\n",
  VAR_25->id + 1, VAR_21[VAR_38]);







 VAR_38 = 0;
 VAR_35 = 0;
 for (VAR_36 = 0; VAR_36 < FUNC_0(VAR_20); VAR_36++) {
  VAR_40 = (VAR_27->aifclk[VAR_25->id] * 10 / VAR_20[VAR_36]) - VAR_32;
  if (VAR_40 < 0)
   break;
  VAR_38 = VAR_36;
 }
 VAR_35 |= VAR_38 << VAR_8;

 VAR_32 = VAR_27->aifclk[VAR_25->id] * 10 / VAR_20[VAR_38];
 FUNC_2(VAR_25->dev, "Using BCLK_DIV %d for actual BCLK %dHz\n",
  VAR_20[VAR_38], VAR_32);

 VAR_34 = VAR_32 / FUNC_4(VAR_24);
 FUNC_2(VAR_25->dev, "Using LRCLK rate %d for actual LRCLK %dHz\n",
  VAR_34, VAR_32 / VAR_34);

 FUNC_7(VAR_26, VAR_28,
       VAR_13, VAR_33);
 FUNC_7(VAR_26, VAR_29,
       VAR_7, VAR_35);
 FUNC_7(VAR_26, VAR_30,
       VAR_5, VAR_34);
 FUNC_7(VAR_26, VAR_31,
       VAR_11 |
       VAR_3, VAR_37);
 return 0;
}
