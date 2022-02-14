
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_soc_pcm_runtime {int cpu_dai; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {scalar_t__ stream; struct snd_soc_pcm_runtime* private_data; } ;
struct regmap {int dummy; } ;
struct fsl_spdif_priv {struct regmap* regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_3 ;






 int FUNC_2 (struct regmap*,int ,int ,int ) ;
 struct fsl_spdif_priv* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_4,
    int VAR_5, struct snd_soc_dai *VAR_6)
{
 struct snd_soc_pcm_runtime *VAR_7 = VAR_4->private_data;
 struct fsl_spdif_priv *VAR_8 = FUNC_3(VAR_7->cpu_dai);
 struct regmap *VAR_9 = VAR_8->regmap;
 bool VAR_10 = VAR_4->stream == VAR_3;
 u32 VAR_11 = FUNC_1(VAR_10);
 u32 VAR_12 = FUNC_0(VAR_10);

 switch (VAR_5) {
 case 130:
 case 131:
 case 132:
  FUNC_2(VAR_9, VAR_2, VAR_11, VAR_11);
  FUNC_2(VAR_9, VAR_1, VAR_12, VAR_12);
  break;
 case 129:
 case 128:
 case 133:
  FUNC_2(VAR_9, VAR_1, VAR_12, 0);
  FUNC_2(VAR_9, VAR_2, VAR_11, 0);
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
