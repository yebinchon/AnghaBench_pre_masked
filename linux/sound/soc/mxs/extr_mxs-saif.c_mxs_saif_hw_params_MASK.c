
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_soc_dai {int dev; } ;
struct snd_pcm_substream {scalar_t__ stream; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct mxs_saif {scalar_t__ base; int clk; int mclk; scalar_t__ mclk_in_use; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;



 scalar_t__ VAR_8 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,char*) ;
 struct mxs_saif* FUNC_8 (struct mxs_saif*) ;
 int FUNC_9 (struct mxs_saif*,int ,int ) ;
 int FUNC_10 (struct snd_pcm_hw_params*) ;
 int FUNC_11 (struct snd_pcm_hw_params*) ;
 struct mxs_saif* FUNC_12 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_13(struct snd_pcm_substream *VAR_9,
        struct snd_pcm_hw_params *VAR_10,
        struct snd_soc_dai *VAR_11)
{
 struct mxs_saif *VAR_12 = FUNC_12(VAR_11);
 struct mxs_saif *VAR_13;
 u32 VAR_14, VAR_15;
 int VAR_16;

 VAR_13 = FUNC_8(VAR_12);
 if (!VAR_13)
  return -VAR_5;


 if (!VAR_12->mclk && VAR_12->mclk_in_use) {
  FUNC_7(VAR_11->dev, "set mclk first\n");
  return -VAR_5;
 }

 VAR_15 = FUNC_1(VAR_12->base + VAR_7);
 if (!VAR_12->mclk_in_use && (VAR_15 & VAR_3)) {
  FUNC_7(VAR_11->dev, "error: busy\n");
  return -VAR_4;
 }






 VAR_16 = FUNC_9(VAR_12, VAR_12->mclk, FUNC_11(VAR_10));
 if (VAR_16) {
  FUNC_7(VAR_11->dev, "unable to get proper clk\n");
  return VAR_16;
 }

 if (VAR_12 != VAR_13) {







  FUNC_4(VAR_12->clk);
  VAR_16 = FUNC_6(VAR_12->clk, 24000000);
  FUNC_3(VAR_12->clk);
  if (VAR_16)
   return VAR_16;

  VAR_16 = FUNC_5(VAR_13->clk);
  if (VAR_16)
   return VAR_16;
 }

 VAR_14 = FUNC_1(VAR_12->base + VAR_6);

 VAR_14 &= ~VAR_2;
 VAR_14 &= ~VAR_0;
 switch (FUNC_10(VAR_10)) {
 case 130:
  VAR_14 |= FUNC_0(0);
  break;
 case 129:
  VAR_14 |= FUNC_0(4);
  VAR_14 |= VAR_0;
  break;
 case 128:
  VAR_14 |= FUNC_0(8);
  VAR_14 |= VAR_0;
  break;
 default:
  return -VAR_5;
 }


 if (VAR_9->stream == VAR_8) {

  VAR_14 &= ~VAR_1;
 } else {

  VAR_14 |= VAR_1;
 }

 FUNC_2(VAR_14, VAR_12->base + VAR_6);
 return 0;
}
