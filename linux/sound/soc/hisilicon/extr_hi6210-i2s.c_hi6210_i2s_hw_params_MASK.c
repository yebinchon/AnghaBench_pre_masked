
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_soc_dai {int dev; } ;
struct snd_pcm_substream {scalar_t__ stream; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct snd_dmaengine_dai_dma_data {int addr_width; int maxburst; scalar_t__ addr; } ;
struct hi6210_i2s {int bits; int rate; int channels; int channel_length; int format; int master; scalar_t__ base_phys; } ;


 int FUNC_0 (int) ;
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
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 scalar_t__ VAR_56 ;
 scalar_t__ VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;
 int VAR_63 ;
 int VAR_64 ;
 int VAR_65 ;
 int VAR_66 ;




 scalar_t__ VAR_67 ;


 int VAR_68 ;


 int VAR_69 ;

 int FUNC_1 (int,char*) ;
 int FUNC_2 (int ,char*,...) ;
 struct hi6210_i2s* FUNC_3 (int ) ;
 int FUNC_4 (struct hi6210_i2s*,int ) ;
 int FUNC_5 (struct hi6210_i2s*,int ,int) ;
 int FUNC_6 (struct snd_pcm_hw_params*) ;
 int FUNC_7 (struct snd_pcm_hw_params*) ;
 int FUNC_8 (struct snd_pcm_hw_params*) ;
 struct snd_dmaengine_dai_dma_data* FUNC_9 (struct snd_soc_dai*,struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_10(struct snd_pcm_substream *VAR_70,
       struct snd_pcm_hw_params *VAR_71,
       struct snd_soc_dai *VAR_72)
{
 struct hi6210_i2s *VAR_73 = FUNC_3(VAR_72->dev);
 u32 VAR_74 = 0, VAR_75 = 0, VAR_76 = 0, VAR_77 = 0;
 u32 VAR_78;
 struct snd_dmaengine_dai_dma_data *VAR_79;

 switch (FUNC_7(VAR_71)) {
 case 134:
  VAR_76 = VAR_36;

 case 136:
  VAR_74 = VAR_1;
  break;
 case 133:
  VAR_76 = VAR_36;

 case 135:
  VAR_74 = 137;
  break;
 default:
  FUNC_2(VAR_72->dev, "Bad format\n");
  return -VAR_0;
 }


 switch (FUNC_8(VAR_71)) {
 case 8000:
  VAR_75 = VAR_33;
  break;
 case 16000:
  VAR_75 = VAR_29;
  break;
 case 32000:
  VAR_75 = VAR_31;
  break;
 case 48000:
  VAR_75 = VAR_32;
  break;
 case 96000:
  VAR_75 = VAR_34;
  break;
 case 192000:
  VAR_75 = VAR_30;
  break;
 default:
  FUNC_2(VAR_72->dev, "Bad rate: %d\n", FUNC_8(VAR_71));
  return -VAR_0;
 }

 if (!(FUNC_6(VAR_71))) {
  FUNC_2(VAR_72->dev, "Bad channels\n");
  return -VAR_0;
 }

 VAR_79 = FUNC_9(VAR_72, VAR_70);

 switch (VAR_74) {
 case 137:
  VAR_73->bits = 32;
  VAR_79->addr_width = 3;
  break;
 default:
  VAR_73->bits = 16;
  VAR_79->addr_width = 2;
  break;
 }
 VAR_73->rate = FUNC_8(VAR_71);
 VAR_73->channels = FUNC_6(VAR_71);
 VAR_73->channel_length = VAR_73->channels * VAR_73->bits;

 VAR_78 = FUNC_4(VAR_73, VAR_58);
 VAR_78 &= ~((VAR_63 <<
   VAR_64) |
  (VAR_65 <<
   VAR_66) |
  (VAR_59 <<
   VAR_60) |
  (VAR_61 <<
   VAR_62));
 VAR_78 |= ((16 << VAR_64) |
  (30 << VAR_66) |
  (16 << VAR_60) |
  (30 << VAR_62));
 FUNC_5(VAR_73, VAR_58, VAR_78);


 VAR_78 = FUNC_4(VAR_73, VAR_45);
 VAR_78 |= (FUNC_0(19) | FUNC_0(18) | FUNC_0(17) |
  VAR_46 |
  VAR_47 |
  VAR_48 |
  VAR_50 |
  VAR_49);
 FUNC_5(VAR_73, VAR_45, VAR_78);


 VAR_78 = FUNC_4(VAR_73, VAR_5);
 VAR_78 &= ~(VAR_13 |
   VAR_11 |
   VAR_10 |
   VAR_9 |
   VAR_7 |
   VAR_6);
 VAR_78 |= (VAR_12 |
  VAR_8);
 FUNC_5(VAR_73, VAR_5, VAR_78);


 VAR_78 = FUNC_4(VAR_73, VAR_14);
 VAR_78 &= ~(VAR_16 |
   VAR_15);
 FUNC_5(VAR_73, VAR_14, VAR_78);

 VAR_78 = FUNC_4(VAR_73, VAR_51);
 VAR_78 &= ~(VAR_52 |
   VAR_53 |
   VAR_54 |
   VAR_55);
 FUNC_5(VAR_73, VAR_51, VAR_78);


 switch (VAR_73->format & VAR_69) {
 case 132:
  VAR_73->master = 0;
  VAR_78 = FUNC_4(VAR_73, VAR_35);
  VAR_78 |= VAR_44;
  FUNC_5(VAR_73, VAR_35, VAR_78);
  break;
 case 131:
  VAR_73->master = 1;
  VAR_78 = FUNC_4(VAR_73, VAR_35);
  VAR_78 &= ~VAR_44;
  FUNC_5(VAR_73, VAR_35, VAR_78);
  break;
 default:
  FUNC_1(1, "Invalid i2s->fmt MASTER_MASK. This shouldn't happen\n");
  return -VAR_0;
 }

 switch (VAR_73->format & VAR_68) {
 case 130:
  VAR_77 = VAR_17;
  break;
 case 129:
  VAR_77 = VAR_18;
  break;
 case 128:
  VAR_77 = VAR_19;
  break;
 default:
  FUNC_1(1, "Invalid i2s->fmt FORMAT_MASK. This shouldn't happen\n");
  return -VAR_0;
 }

 VAR_78 = FUNC_4(VAR_73, VAR_35);
 VAR_78 &= ~(VAR_42 <<
   VAR_43);
 VAR_78 |= VAR_77 << VAR_43;
 FUNC_5(VAR_73, VAR_35, VAR_78);


 VAR_78 = FUNC_4(VAR_73, VAR_2);
 VAR_78 &= ~(VAR_4 |
   VAR_3);
 FUNC_5(VAR_73, VAR_2, VAR_78);

 VAR_79->maxburst = 2;

 if (VAR_70->stream == VAR_67)
  VAR_79->addr = VAR_73->base_phys + VAR_57;
 else
  VAR_79->addr = VAR_73->base_phys + VAR_56;

 switch (VAR_73->channels) {
 case 1:
  VAR_78 = FUNC_4(VAR_73, VAR_35);
  VAR_78 |= VAR_41;
  FUNC_5(VAR_73, VAR_35, VAR_78);
  break;
 default:
  VAR_78 = FUNC_4(VAR_73, VAR_35);
  VAR_78 &= ~VAR_41;
  FUNC_5(VAR_73, VAR_35, VAR_78);
  break;
 }


 VAR_78 = FUNC_4(VAR_73, VAR_35);
 VAR_78 &= ~VAR_36;
 VAR_78 &= ~(VAR_37 <<
   VAR_38);
 VAR_78 &= ~(VAR_39 <<
   VAR_40);
 VAR_78 |= VAR_76;
 VAR_78 |= (VAR_74 << VAR_38);
 FUNC_5(VAR_73, VAR_35, VAR_78);


 if (!VAR_73->master)
  return 0;


 VAR_78 = FUNC_4(VAR_73, VAR_20);
 VAR_78 &= ~(VAR_23 << VAR_24);
 VAR_78 &= ~(VAR_21 << VAR_22);
 VAR_78 &= ~(VAR_27 <<
     VAR_28);
 VAR_78 &= ~(VAR_25 <<
     VAR_26);
 VAR_78 |= (VAR_75 << VAR_24);
 VAR_78 |= (VAR_75 << VAR_22);
 VAR_78 |= (VAR_75 << VAR_28);
 VAR_78 |= (VAR_75 << VAR_26);
 FUNC_5(VAR_73, VAR_20, VAR_78);

 return 0;
}
