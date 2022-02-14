
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct snd_pcm_substream {scalar_t__ stream; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct cs42xx8_priv {int* rate; int sysclk; int regmap; scalar_t__ slave_mode; int tx_channels; } ;
struct TYPE_3__ {int* ratio; int min_mclk; int max_mclk; int mfreq; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_1__* VAR_8 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct snd_pcm_hw_params*) ;
 void* FUNC_5 (struct snd_pcm_hw_params*) ;
 int FUNC_6 (int ,int ,int,int) ;
 struct cs42xx8_priv* FUNC_7 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_8(struct snd_pcm_substream *VAR_9,
        struct snd_pcm_hw_params *VAR_10,
        struct snd_soc_dai *VAR_11)
{
 struct snd_soc_component *VAR_12 = VAR_11->component;
 struct cs42xx8_priv *VAR_13 = FUNC_7(VAR_12);
 bool VAR_14 = VAR_9->stream == VAR_7;
 u32 VAR_15[2];
 u32 VAR_16[2];
 u32 VAR_17[2];
 u32 VAR_18, VAR_19, VAR_20;
 bool VAR_21, VAR_22;

 if (VAR_14)
  VAR_13->tx_channels = FUNC_4(VAR_10);

 VAR_16[VAR_14] = FUNC_5(VAR_10);
 VAR_16[!VAR_14] = VAR_13->rate[!VAR_14];

 VAR_15[VAR_14] = VAR_16[VAR_14] > 0 ? VAR_13->sysclk / VAR_16[VAR_14] : 0;
 VAR_15[!VAR_14] = VAR_16[!VAR_14] > 0 ? VAR_13->sysclk / VAR_16[!VAR_14] : 0;


 for (VAR_18 = 0; VAR_18 < 2; VAR_18++) {
  if (VAR_13->slave_mode) {
   VAR_17[VAR_18] = VAR_0;
  } else {
   if (VAR_16[VAR_18] < 50000) {
    VAR_17[VAR_18] = VAR_3;
   } else if (VAR_16[VAR_18] > 50000 && VAR_16[VAR_18] < 100000) {
    VAR_17[VAR_18] = VAR_1;
   } else if (VAR_16[VAR_18] > 100000 && VAR_16[VAR_18] < 200000) {
    VAR_17[VAR_18] = VAR_2;
   } else {
    FUNC_3(VAR_12->dev,
     "unsupported sample rate\n");
    return -VAR_6;
   }
  }
 }

 for (VAR_18 = 0; VAR_18 < FUNC_0(VAR_8); VAR_18++) {

  VAR_21 = ((VAR_17[VAR_14] == VAR_0) ?
   (VAR_8[VAR_18].ratio[0] == VAR_15[VAR_14] ||
   VAR_8[VAR_18].ratio[1] == VAR_15[VAR_14] ||
   VAR_8[VAR_18].ratio[2] == VAR_15[VAR_14]) :
   (VAR_8[VAR_18].ratio[VAR_17[VAR_14]] == VAR_15[VAR_14])) &&
   VAR_13->sysclk >= VAR_8[VAR_18].min_mclk &&
   VAR_13->sysclk <= VAR_8[VAR_18].max_mclk;

  if (!VAR_15[VAR_14])
   VAR_21 = 1;


  VAR_22 = ((VAR_17[!VAR_14] == VAR_0) ?
   (VAR_8[VAR_18].ratio[0] == VAR_15[!VAR_14] ||
   VAR_8[VAR_18].ratio[1] == VAR_15[!VAR_14] ||
   VAR_8[VAR_18].ratio[2] == VAR_15[!VAR_14]) :
   (VAR_8[VAR_18].ratio[VAR_17[!VAR_14]] == VAR_15[!VAR_14]));

  if (!VAR_15[!VAR_14])
   VAR_22 = 1;





  if (VAR_21 && VAR_22)
   break;
 }

 if (VAR_18 == FUNC_0(VAR_8)) {
  FUNC_3(VAR_12->dev, "unsupported sysclk ratio\n");
  return -VAR_6;
 }

 VAR_13->rate[VAR_14] = FUNC_5(VAR_10);

 VAR_20 = VAR_5;
 VAR_19 = VAR_8[VAR_18].mfreq;

 FUNC_6(VAR_13->regmap, VAR_4,
      FUNC_2(VAR_14) | VAR_20,
      FUNC_1(VAR_14, VAR_17[VAR_14]) | VAR_19);

 return 0;
}
