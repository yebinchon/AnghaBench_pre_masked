
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {scalar_t__ stream; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct kirkwood_dma_data {int ctl_play; int ctl_rec; scalar_t__ io; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
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



 scalar_t__ VAR_24 ;
 int FUNC_0 (struct snd_soc_dai*,struct kirkwood_dma_data*,int ) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 unsigned long FUNC_4 (scalar_t__) ;
 struct kirkwood_dma_data* FUNC_5 (struct snd_soc_dai*) ;
 int FUNC_6 (unsigned long,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_substream *VAR_25,
     struct snd_pcm_hw_params *VAR_26,
     struct snd_soc_dai *VAR_27)
{
 struct kirkwood_dma_data *VAR_28 = FUNC_5(VAR_27);
 uint32_t VAR_29, VAR_30;
 unsigned int VAR_31;
 unsigned long VAR_32;

 if (VAR_25->stream == VAR_24) {
  VAR_31 = VAR_5;
 } else {
  VAR_31 = VAR_6;
 }

 FUNC_0(VAR_27, VAR_28, FUNC_3(VAR_26));

 VAR_32 = FUNC_4(VAR_28->io+VAR_31);
 VAR_32 &= ~VAR_4;





 switch (FUNC_2(VAR_26)) {
 case 130:
  VAR_32 |= VAR_1;
  VAR_29 = VAR_12 |
      VAR_8 |
      VAR_16;
  VAR_30 = VAR_19 |
     VAR_18 |
     VAR_23;
  break;
 case 129:
  VAR_32 |= VAR_2;
  VAR_29 = VAR_13 |
      VAR_8 |
      VAR_16;
  VAR_30 = VAR_20 |
     VAR_18 |
     VAR_23;
  break;
 case 128:
  VAR_32 |= VAR_3;
  VAR_29 = VAR_14 |
      VAR_8;
  VAR_30 = VAR_21 |
     VAR_18;
  break;
 default:
  return -VAR_0;
 }

 if (VAR_25->stream == VAR_24) {
  if (FUNC_1(VAR_26) == 1)
   VAR_29 |= VAR_9;
  else
   VAR_29 |= VAR_11;

  VAR_28->ctl_play &= ~(VAR_10 |
        VAR_7 |
        VAR_15);
  VAR_28->ctl_play |= VAR_29;
 } else {
  VAR_28->ctl_rec &= ~(VAR_17 |
       VAR_22);
  VAR_28->ctl_rec |= VAR_30;
 }

 FUNC_6(VAR_32, VAR_28->io+VAR_31);

 return 0;
}
