
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct img_i2s_in {int max_i2s_chan; int active_channels; } ;
typedef int snd_pcm_format_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;



 int FUNC_0 (struct img_i2s_in*,int) ;
 int FUNC_1 (struct img_i2s_in*,int) ;
 unsigned int FUNC_2 (struct img_i2s_in*,int,int ) ;
 int FUNC_3 (struct img_i2s_in*,int,unsigned int,int ) ;
 int FUNC_4 (struct img_i2s_in*,unsigned int,unsigned int,unsigned int*,unsigned int*) ;
 int FUNC_5 (struct img_i2s_in*) ;
 unsigned int FUNC_6 (struct img_i2s_in*,int ) ;
 int FUNC_7 (struct img_i2s_in*,unsigned int,int ) ;
 unsigned int FUNC_8 (struct snd_pcm_hw_params*) ;
 int FUNC_9 (struct snd_pcm_hw_params*) ;
 unsigned int FUNC_10 (struct snd_pcm_hw_params*) ;
 struct img_i2s_in* FUNC_11 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_12(struct snd_pcm_substream *VAR_12,
 struct snd_pcm_hw_params *VAR_13, struct snd_soc_dai *VAR_14)
{
 struct img_i2s_in *VAR_15 = FUNC_11(VAR_14);
 unsigned int VAR_16, VAR_17, VAR_18, VAR_19;
 unsigned int VAR_20, VAR_21;
 int VAR_22, VAR_23 = 0;
 u32 VAR_24, VAR_25, VAR_26;
 u32 VAR_27 = 0, VAR_28 = 0;
 snd_pcm_format_t VAR_29;

 VAR_16 = FUNC_10(VAR_13);
 VAR_29 = FUNC_9(VAR_13);
 VAR_17 = FUNC_8(VAR_13);
 VAR_18 = VAR_17 / 2;

 switch (VAR_29) {
 case 128:
  VAR_19 = 64;
  VAR_28 |= VAR_7;
  VAR_28 |= VAR_5;
  VAR_28 |= VAR_6;
  break;
 case 129:
  VAR_19 = 64;
  VAR_28 |= VAR_7;
  VAR_28 |= VAR_5;
  break;
 case 130:
  VAR_19 = 32;
  VAR_27 |= VAR_9;
  VAR_28 |= VAR_2;
  break;
 default:
  return -VAR_0;
 }

 if ((VAR_17 < 2) ||
     (VAR_17 > (VAR_15->max_i2s_chan * 2)) ||
     (VAR_17 % 2))
  return -VAR_0;

 VAR_27 |= ((VAR_18 - 1) << VAR_11);

 VAR_23 = FUNC_4(VAR_15, VAR_16, VAR_19,
   &VAR_20, &VAR_21);
 if (VAR_23 < 0)
  return VAR_23;

 if (VAR_20)
  VAR_28 |= VAR_3;

 if (VAR_21)
  VAR_28 |= VAR_4;

 VAR_25 = VAR_9 |
         VAR_10;

 VAR_26 = VAR_2 |
       VAR_3 |
       VAR_4 |
       VAR_7 |
       VAR_5 |
       VAR_6;

 VAR_24 = FUNC_6(VAR_15, VAR_8);
 VAR_24 = (VAR_24 & ~VAR_25) | VAR_27;
 FUNC_7(VAR_15, VAR_24, VAR_8);

 for (VAR_22 = 0; VAR_22 < VAR_15->active_channels; VAR_22++)
  FUNC_0(VAR_15, VAR_22);

 for (VAR_22 = 0; VAR_22 < VAR_15->max_i2s_chan; VAR_22++) {
  VAR_24 = FUNC_2(VAR_15, VAR_22, VAR_1);
  VAR_24 = (VAR_24 & ~VAR_26) | VAR_28;
  FUNC_3(VAR_15, VAR_22, VAR_24, VAR_1);
 }

 VAR_15->active_channels = VAR_18;

 FUNC_5(VAR_15);

 for (VAR_22 = 0; VAR_22 < VAR_15->active_channels; VAR_22++)
  FUNC_1(VAR_15, VAR_22);

 return 0;
}
