
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ssp_priv {int dai_fmt; int sysclk; struct ssp_device* ssp; } ;
struct ssp_device {TYPE_1__* pdev; int type; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {scalar_t__ stream; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct snd_dmaengine_dai_dma_data {int dummy; } ;
struct pxa_ssp_clock_mode {int rate; int acds; int scdb; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;



 scalar_t__ VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int VAR_15 ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (struct ssp_device*) ;
 int FUNC_9 (struct snd_pcm_hw_params*) ;
 int FUNC_10 (struct snd_pcm_hw_params*) ;
 int FUNC_11 (struct snd_pcm_hw_params*) ;
 struct pxa_ssp_clock_mode* VAR_16 ;
 int FUNC_12 (struct ssp_priv*) ;
 int FUNC_13 (struct ssp_device*,int ) ;
 int FUNC_14 (struct ssp_device*,int,int,struct snd_dmaengine_dai_dma_data*) ;
 int FUNC_15 (struct ssp_priv*,int) ;
 int FUNC_16 (struct ssp_device*,int) ;
 int FUNC_17 (struct ssp_device*,int ,int) ;
 int FUNC_18 (int) ;
 struct snd_dmaengine_dai_dma_data* FUNC_19 (struct snd_soc_dai*,struct snd_pcm_substream*) ;
 struct ssp_priv* FUNC_20 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_21(struct snd_pcm_substream *VAR_17,
    struct snd_pcm_hw_params *VAR_18,
    struct snd_soc_dai *VAR_19)
{
 struct ssp_priv *VAR_20 = FUNC_20(VAR_19);
 struct ssp_device *VAR_21 = VAR_20->ssp;
 int VAR_22 = FUNC_9(VAR_18);
 u32 VAR_23, VAR_24;
 int VAR_25 = FUNC_18(FUNC_10(VAR_18));
 int VAR_26 = FUNC_13(VAR_21, VAR_15) & 0xf;
 struct snd_dmaengine_dai_dma_data *VAR_27;
 int VAR_28 = FUNC_11(VAR_18);
 int VAR_29 = VAR_28 * VAR_22 * (VAR_25 / 8);
 int VAR_30;

 VAR_27 = FUNC_19(VAR_19, VAR_17);





 FUNC_14(VAR_21,
  ((VAR_22 == 2) && (VAR_26 != 1)) || (VAR_25 == 32),
  VAR_17->stream == VAR_2, VAR_27);


 if (FUNC_13(VAR_21, VAR_6) & VAR_13)
  return 0;

 VAR_30 = FUNC_12(VAR_20);
 if (VAR_30 < 0)
  return VAR_30;


 VAR_23 = FUNC_13(VAR_21, VAR_6) & ~(VAR_8 | VAR_10);


 switch (FUNC_10(VAR_18)) {
 case 131:
  if (VAR_21->type == VAR_1)
   VAR_23 |= VAR_11;
  VAR_23 |= FUNC_1(16);
  break;
 case 130:
  VAR_23 |= (VAR_10 | FUNC_1(8));
  break;
 case 129:
  VAR_23 |= (VAR_10 | FUNC_1(16));
  break;
 }
 FUNC_17(VAR_21, VAR_6, VAR_23);

 if (VAR_23 & VAR_7) {
  VAR_30 = FUNC_15(VAR_20, VAR_29);







  if (VAR_30 < 0) {
   const struct pxa_ssp_clock_mode *VAR_31;
   int VAR_32, VAR_33;

   for (VAR_31 = VAR_16; VAR_31->rate; VAR_31++) {
    if (VAR_31->rate == VAR_28)
     break;
   }

   if (!VAR_31->rate)
    return -VAR_0;

   VAR_33 = VAR_31->acds;


   if (VAR_25 == 32)
    VAR_33--;

   VAR_30 = FUNC_15(VAR_20, VAR_29);
   if (VAR_30 < 0)
    return VAR_30;

   VAR_32 = FUNC_13(VAR_21, VAR_4);
   VAR_32 &= ~(FUNC_0(7) | VAR_5);
   VAR_32 |= FUNC_0(VAR_31->acds);
   VAR_32 |= VAR_31->scdb;
   FUNC_17(VAR_21, VAR_4, VAR_32);
  }
 } else if (VAR_23 & VAR_9) {





  FUNC_16(VAR_21, VAR_29 / VAR_28);
 }

 switch (VAR_20->dai_fmt & VAR_3) {
 case 128:
        VAR_24 = FUNC_13(VAR_21, VAR_14);

  if (((VAR_20->sysclk / VAR_29) == 64) && (VAR_25 == 16)) {
   if (VAR_21->type != VAR_1)
    return -VAR_0;

   VAR_24 |= FUNC_6(VAR_25 * 2);
   VAR_24 |= FUNC_5(VAR_25 * 4);
   VAR_24 |= FUNC_4(3);
   VAR_24 |= FUNC_2(3);
   VAR_24 |= FUNC_3(1);
  } else {






   VAR_24 |= FUNC_6(VAR_25 + 1);
   VAR_24 |= FUNC_5((VAR_25 + 1) * 2);
   VAR_24 |= FUNC_3(1);
  }

  FUNC_17(VAR_21, VAR_14, VAR_24);
  break;
 default:
  break;
 }




 if ((VAR_23 & VAR_12) && !VAR_26) {
  FUNC_7(&VAR_21->pdev->dev, "No TDM timeslot configured\n");
  return -VAR_0;
 }

 FUNC_8(VAR_21);

 return 0;
}
