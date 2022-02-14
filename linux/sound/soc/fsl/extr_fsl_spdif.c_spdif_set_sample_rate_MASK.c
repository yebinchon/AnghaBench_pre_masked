
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef size_t u32 ;
typedef int u16 ;
struct spdif_mixer_control {int dummy; } ;
struct snd_soc_pcm_runtime {int cpu_dai; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;
struct regmap {int dummy; } ;
struct platform_device {int dev; } ;
struct fsl_spdif_priv {scalar_t__* txclk_src; scalar_t__* txclk_df; int* sysclk_df; int * txrate; int * txclk; struct platform_device* pdev; struct regmap* regmap; struct spdif_mixer_control fsl_spdif_control; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t FUNC_0 (int) ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t FUNC_1 (scalar_t__) ;
 size_t VAR_16 ;
 scalar_t__ VAR_17 ;
 size_t VAR_18 ;
 scalar_t__ VAR_19 ;
 size_t FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int *,char*,int,...) ;
 int FUNC_6 (int *,char*,...) ;
 int FUNC_7 (struct regmap*,int ,size_t,size_t) ;
 struct fsl_spdif_priv* FUNC_8 (int ) ;
 int FUNC_9 (struct spdif_mixer_control*,int ,unsigned long) ;

__attribute__((used)) static int FUNC_10(struct snd_pcm_substream *VAR_20,
    int VAR_21)
{
 struct snd_soc_pcm_runtime *VAR_22 = VAR_20->private_data;
 struct fsl_spdif_priv *VAR_23 = FUNC_8(VAR_22->cpu_dai);
 struct spdif_mixer_control *VAR_24 = &VAR_23->fsl_spdif_control;
 struct regmap *VAR_25 = VAR_23->regmap;
 struct platform_device *VAR_26 = VAR_23->pdev;
 unsigned long VAR_27 = 0;
 u32 VAR_28, VAR_29, VAR_30;
 u16 VAR_31;
 u8 VAR_32, VAR_33;
 int VAR_34;

 switch (VAR_21) {
 case 32000:
  VAR_30 = VAR_9;
  VAR_27 = VAR_3;
  break;
 case 44100:
  VAR_30 = VAR_10;
  VAR_27 = VAR_4;
  break;
 case 48000:
  VAR_30 = VAR_11;
  VAR_27 = VAR_5;
  break;
 case 96000:
  VAR_30 = VAR_12;
  VAR_27 = VAR_6;
  break;
 case 192000:
  VAR_30 = VAR_8;
  VAR_27 = VAR_2;
  break;
 default:
  FUNC_6(&VAR_26->dev, "unsupported sample rate %d\n", VAR_21);
  return -VAR_0;
 }

 VAR_32 = VAR_23->txclk_src[VAR_30];
 if (VAR_32 >= VAR_19) {
  FUNC_6(&VAR_26->dev, "tx clock source is out of range\n");
  return -VAR_0;
 }

 VAR_33 = VAR_23->txclk_df[VAR_30];
 if (VAR_33 == 0) {
  FUNC_6(&VAR_26->dev, "the txclk_df can't be zero\n");
  return -VAR_0;
 }

 VAR_31 = VAR_23->sysclk_df[VAR_30];


 if (VAR_32 != VAR_17)
  goto clk_set_bypass;


 VAR_34 = FUNC_4(VAR_23->txclk[VAR_30],
      64 * VAR_21 * VAR_33);
 if (VAR_34) {
  FUNC_6(&VAR_26->dev, "failed to set tx clock rate\n");
  return VAR_34;
 }

clk_set_bypass:
 FUNC_5(&VAR_26->dev, "expected clock rate = %d\n",
   (64 * VAR_21 * VAR_33 * VAR_31));
 FUNC_5(&VAR_26->dev, "actual clock rate = %ld\n",
   FUNC_3(VAR_23->txclk[VAR_30]));


 FUNC_9(VAR_24, VAR_1, VAR_27);


 VAR_28 = VAR_14 | FUNC_2(VAR_32) |
       FUNC_1(VAR_33) | FUNC_0(VAR_31);
 VAR_29 = VAR_15 | VAR_18 |
        VAR_16 | VAR_13;
 FUNC_7(VAR_25, VAR_7, VAR_29, VAR_28);

 FUNC_5(&VAR_26->dev, "set sample rate to %dHz for %dHz playback\n",
   VAR_23->txrate[VAR_30], VAR_21);

 return 0;
}
