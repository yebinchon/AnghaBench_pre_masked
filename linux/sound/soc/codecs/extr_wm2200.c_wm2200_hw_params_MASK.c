
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm2200_priv {int sysclk; scalar_t__ symmetric_rates; } ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct snd_pcm_substream {scalar_t__ stream; } ;
struct snd_pcm_hw_params {int dummy; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
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
 int FUNC_1 (int ,char*,int,...) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (struct snd_pcm_hw_params*) ;
 struct wm2200_priv* FUNC_5 (struct snd_soc_component*) ;
 int FUNC_6 (struct snd_soc_component*,int ,int,int) ;
 int FUNC_7 (struct snd_pcm_hw_params*) ;
 int FUNC_8 (struct snd_pcm_hw_params*) ;
 int* VAR_18 ;
 int* VAR_19 ;
 int* VAR_20 ;

__attribute__((used)) static int FUNC_9(struct snd_pcm_substream *VAR_21,
       struct snd_pcm_hw_params *VAR_22,
       struct snd_soc_dai *VAR_23)
{
 struct snd_soc_component *VAR_24 = VAR_23->component;
 struct wm2200_priv *VAR_25 = FUNC_5(VAR_24);
 int VAR_26, VAR_27, VAR_28, VAR_29, VAR_30, VAR_31;
 int *VAR_32;


 VAR_29 = FUNC_4(VAR_22);
 if (VAR_29 < 0)
  return VAR_29;
 VAR_30 = FUNC_8(VAR_22);
 if (VAR_30 < 0)
  return VAR_30;

 FUNC_1(VAR_24->dev, "Word length %d bits, frame length %d bits\n",
  VAR_29, VAR_30);


 VAR_27 = FUNC_7(VAR_22);
 if (VAR_27 < 0)
  return VAR_27;

 if (!VAR_25->sysclk) {
  FUNC_2(VAR_24->dev, "SYSCLK has no rate set\n");
  return -VAR_0;
 }

 for (VAR_26 = 0; VAR_26 < FUNC_0(VAR_20); VAR_26++)
  if (VAR_20[VAR_26] == FUNC_3(VAR_22))
   break;
 if (VAR_26 == FUNC_0(VAR_20)) {
  FUNC_2(VAR_24->dev, "Unsupported sample rate: %dHz\n",
   FUNC_3(VAR_22));
  return -VAR_0;
 }
 VAR_31 = VAR_26;

 FUNC_1(VAR_24->dev, "Target BCLK is %dHz, using %dHz SYSCLK\n",
  VAR_27, VAR_25->sysclk);

 if (VAR_25->sysclk % 4000)
  VAR_32 = VAR_18;
 else
  VAR_32 = VAR_19;

 for (VAR_26 = 0; VAR_26 < VAR_16; VAR_26++)
  if (VAR_32[VAR_26] >= VAR_27 && (VAR_32[VAR_26] % VAR_27 == 0))
   break;
 if (VAR_26 == VAR_16) {
  FUNC_2(VAR_24->dev,
   "No valid BCLK for %dHz found from %dHz SYSCLK\n",
   VAR_27, VAR_25->sysclk);
  return -VAR_0;
 }

 VAR_27 = VAR_26;
 FUNC_1(VAR_24->dev, "Setting %dHz BCLK\n", VAR_32[VAR_27]);
 FUNC_6(VAR_24, VAR_10,
       VAR_9, VAR_27);

 VAR_28 = VAR_32[VAR_27] / FUNC_3(VAR_22);
 FUNC_1(VAR_24->dev, "Setting %dHz LRCLK\n", VAR_32[VAR_27] / VAR_28);
 if (VAR_21->stream == VAR_1 ||
     VAR_25->symmetric_rates)
  FUNC_6(VAR_24, VAR_12,
        VAR_2, VAR_28);
 else
  FUNC_6(VAR_24, VAR_11,
        VAR_5, VAR_28);

 VAR_26 = (VAR_29 << VAR_8) | VAR_29;
 if (VAR_21->stream == VAR_1)
  FUNC_6(VAR_24, VAR_14,
        VAR_4 |
        VAR_3, VAR_26);
 else
  FUNC_6(VAR_24, VAR_13,
        VAR_7 |
        VAR_6, VAR_26);

 FUNC_6(VAR_24, VAR_15,
       VAR_17, VAR_31);

 return 0;
}
