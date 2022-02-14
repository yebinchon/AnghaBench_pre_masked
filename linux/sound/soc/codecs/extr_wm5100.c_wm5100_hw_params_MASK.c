
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wm5100_priv {int* aif_async; int sysclk; int asyncclk; scalar_t__* aif_symmetric; } ;
struct snd_soc_dai {size_t id; TYPE_1__* driver; struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct snd_pcm_substream {scalar_t__ stream; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct TYPE_2__ {int base; } ;


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
 int FUNC_1 (int ,char*,int,...) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (struct snd_pcm_hw_params*) ;
 struct wm5100_priv* FUNC_5 (struct snd_soc_component*) ;
 int FUNC_6 (struct snd_soc_component*,int,int,int) ;
 int FUNC_7 (struct snd_pcm_hw_params*) ;
 int FUNC_8 (struct snd_pcm_hw_params*) ;
 int FUNC_9 (struct snd_soc_component*,int) ;
 int* VAR_14 ;
 int* VAR_15 ;
 int* VAR_16 ;

__attribute__((used)) static int FUNC_10(struct snd_pcm_substream *VAR_17,
       struct snd_pcm_hw_params *VAR_18,
       struct snd_soc_dai *VAR_19)
{
 struct snd_soc_component *VAR_20 = VAR_19->component;
 struct wm5100_priv *VAR_21 = FUNC_5(VAR_20);
 bool VAR_22 = VAR_21->aif_async[VAR_19->id];
 int VAR_23, VAR_24, VAR_25, VAR_26, VAR_27, VAR_28, VAR_29, VAR_30;
 int *VAR_31;

 VAR_24 = VAR_19->driver->base;


 VAR_28 = FUNC_4(VAR_18);
 if (VAR_28 < 0)
  return VAR_28;
 VAR_29 = FUNC_8(VAR_18);
 if (VAR_29 < 0)
  return VAR_29;

 FUNC_1(VAR_20->dev, "Word length %d bits, frame length %d bits\n",
  VAR_28, VAR_29);


 VAR_25 = FUNC_7(VAR_18);
 if (VAR_25 < 0)
  return VAR_25;


 if (!VAR_22) {
  VAR_26 = VAR_21->sysclk;
  VAR_30 = FUNC_9(VAR_20, FUNC_3(VAR_18));
  if (VAR_30 < 0)
   return VAR_30;
 } else {

  VAR_26 = VAR_21->asyncclk;
  VAR_30 = 3;

  for (VAR_23 = 0; VAR_23 < FUNC_0(VAR_16); VAR_23++)
   if (FUNC_3(VAR_18) == VAR_16[VAR_23])
    break;
  if (VAR_23 == FUNC_0(VAR_16)) {
   FUNC_2(VAR_20->dev, "Invalid rate %dHzn",
    FUNC_3(VAR_18));
   return -VAR_0;
  }


  FUNC_6(VAR_20, VAR_12,
        VAR_11, VAR_23);
 }

 if (!VAR_26) {
  FUNC_2(VAR_20->dev, "%s has no rate set\n",
   VAR_22 ? "ASYNCCLK" : "SYSCLK");
  return -VAR_0;
 }

 FUNC_1(VAR_20->dev, "Target BCLK is %dHz, using %dHz %s\n",
  VAR_25, VAR_26, VAR_22 ? "ASYNCCLK" : "SYSCLK");

 if (VAR_26 % 4000)
  VAR_31 = VAR_14;
 else
  VAR_31 = VAR_15;

 for (VAR_23 = 0; VAR_23 < VAR_13; VAR_23++)
  if (VAR_31[VAR_23] >= VAR_25 && (VAR_31[VAR_23] % VAR_25 == 0))
   break;
 if (VAR_23 == VAR_13) {
  FUNC_2(VAR_20->dev,
   "No valid BCLK for %dHz found from %dHz %s\n",
   VAR_25, VAR_26, VAR_22 ? "ASYNCCLK" : "SYSCLK");
  return -VAR_0;
 }

 VAR_25 = VAR_23;
 FUNC_1(VAR_20->dev, "Setting %dHz BCLK\n", VAR_31[VAR_25]);
 FUNC_6(VAR_20, VAR_24 + 1, VAR_9, VAR_25);

 VAR_27 = VAR_31[VAR_25] / FUNC_3(VAR_18);
 FUNC_1(VAR_20->dev, "Setting %dHz LRCLK\n", VAR_31[VAR_25] / VAR_27);
 if (VAR_17->stream == VAR_1 ||
     VAR_21->aif_symmetric[VAR_19->id])
  FUNC_6(VAR_20, VAR_24 + 7,
        VAR_2, VAR_27);
 else
  FUNC_6(VAR_20, VAR_24 + 6,
        VAR_5, VAR_27);

 VAR_23 = (VAR_28 << VAR_8) | VAR_29;
 if (VAR_17->stream == VAR_1)
  FUNC_6(VAR_20, VAR_24 + 9,
        VAR_4 |
        VAR_3, VAR_23);
 else
  FUNC_6(VAR_20, VAR_24 + 8,
        VAR_7 |
        VAR_6, VAR_23);

 FUNC_6(VAR_20, VAR_24 + 4, VAR_10, VAR_30);

 return 0;
}
