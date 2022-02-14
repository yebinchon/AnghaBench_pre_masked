
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_soc_pcm_runtime {int cpu_dai; } ;
struct snd_soc_dai {int active; } ;
struct snd_pcm_substream {scalar_t__ stream; struct snd_soc_pcm_runtime* private_data; } ;
struct regmap {int dummy; } ;
struct platform_device {int dev; } ;
struct fsl_spdif_priv {int coreclk; int spbaclk; int * txclk; int rxclk; struct regmap* regmap; struct platform_device* pdev; } ;


 int FUNC_0 (int ) ;
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
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (struct regmap*,int ,int,int) ;
 struct fsl_spdif_priv* FUNC_5 (int ) ;
 int FUNC_6 (struct fsl_spdif_priv*) ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_substream *VAR_21,
        struct snd_soc_dai *VAR_22)
{
 struct snd_soc_pcm_runtime *VAR_23 = VAR_21->private_data;
 struct fsl_spdif_priv *VAR_24 = FUNC_5(VAR_23->cpu_dai);
 struct platform_device *VAR_25 = VAR_24->pdev;
 struct regmap *VAR_26 = VAR_24->regmap;
 u32 VAR_27, VAR_28;
 int VAR_29;
 int VAR_30;


 if (!VAR_22->active) {
  VAR_30 = FUNC_2(VAR_24->coreclk);
  if (VAR_30) {
   FUNC_3(&VAR_25->dev, "failed to enable core clock\n");
   return VAR_30;
  }

  if (!FUNC_0(VAR_24->spbaclk)) {
   VAR_30 = FUNC_2(VAR_24->spbaclk);
   if (VAR_30) {
    FUNC_3(&VAR_25->dev, "failed to enable spba clock\n");
    goto err_spbaclk;
   }
  }

  VAR_30 = FUNC_6(VAR_24);
  if (VAR_30) {
   FUNC_3(&VAR_25->dev, "failed to soft reset\n");
   goto err;
  }


  FUNC_4(VAR_26, VAR_1, 0xffffff, 0);
 }

 if (VAR_21->stream == VAR_19) {
  VAR_27 = VAR_9 | VAR_12 |
   VAR_16 | VAR_17 |
   VAR_13;
  VAR_28 = VAR_10 | VAR_11 |
   VAR_15 | VAR_18 |
   VAR_14;
  for (VAR_29 = 0; VAR_29 < VAR_20; VAR_29++) {
   VAR_30 = FUNC_2(VAR_24->txclk[VAR_29]);
   if (VAR_30)
    goto disable_txclk;
  }
 } else {
  VAR_27 = VAR_6 | VAR_3;
  VAR_28 = VAR_7 | VAR_4|
   VAR_5 | VAR_8;
  VAR_30 = FUNC_2(VAR_24->rxclk);
  if (VAR_30)
   goto err;
 }
 FUNC_4(VAR_26, VAR_0, VAR_28, VAR_27);


 FUNC_4(VAR_26, VAR_0, VAR_2, 0);

 return 0;

disable_txclk:
 for (VAR_29--; VAR_29 >= 0; VAR_29--)
  FUNC_1(VAR_24->txclk[VAR_29]);
err:
 if (!FUNC_0(VAR_24->spbaclk))
  FUNC_1(VAR_24->spbaclk);
err_spbaclk:
 FUNC_1(VAR_24->coreclk);

 return VAR_30;
}
