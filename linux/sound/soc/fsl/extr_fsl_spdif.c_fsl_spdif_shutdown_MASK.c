
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct snd_soc_pcm_runtime {int cpu_dai; } ;
struct snd_soc_dai {int active; } ;
struct snd_pcm_substream {scalar_t__ stream; struct snd_soc_pcm_runtime* private_data; } ;
struct regmap {int dummy; } ;
struct fsl_spdif_priv {int coreclk; int spbaclk; int rxclk; int * txclk; struct regmap* regmap; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 scalar_t__ VAR_13 ;
 size_t VAR_14 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct regmap*,int ,size_t,size_t) ;
 struct fsl_spdif_priv* FUNC_3 (int ) ;
 int FUNC_4 (struct fsl_spdif_priv*) ;

__attribute__((used)) static void FUNC_5(struct snd_pcm_substream *VAR_15,
    struct snd_soc_dai *VAR_16)
{
 struct snd_soc_pcm_runtime *VAR_17 = VAR_15->private_data;
 struct fsl_spdif_priv *VAR_18 = FUNC_3(VAR_17->cpu_dai);
 struct regmap *VAR_19 = VAR_18->regmap;
 u32 VAR_20, VAR_21, VAR_22;

 if (VAR_15->stream == VAR_13) {
  VAR_20 = 0;
  VAR_21 = VAR_8 | VAR_9 |
   VAR_11 | VAR_12 |
   VAR_10;
  for (VAR_22 = 0; VAR_22 < VAR_14; VAR_22++)
   FUNC_1(VAR_18->txclk[VAR_22]);
 } else {
  VAR_20 = VAR_6 | VAR_4;
  VAR_21 = VAR_5 | VAR_2|
   VAR_3 | VAR_7;
  FUNC_1(VAR_18->rxclk);
 }
 FUNC_2(VAR_19, VAR_0, VAR_21, VAR_20);


 if (!VAR_16->active) {
  FUNC_4(VAR_18);
  FUNC_2(VAR_19, VAR_0,
    VAR_1, VAR_1);
  if (!FUNC_0(VAR_18->spbaclk))
   FUNC_1(VAR_18->spbaclk);
  FUNC_1(VAR_18->coreclk);
 }
}
