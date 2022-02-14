
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wl1273_priv {unsigned int mode; int channels; struct wl1273_core* core; } ;
struct wl1273_core {int dummy; } ;
struct snd_soc_dai {int dev; int component; } ;
struct snd_pcm_substream {scalar_t__ stream; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct TYPE_2__ {unsigned int min; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_0 (int ,char*,int) ;
 TYPE_1__* FUNC_1 (struct snd_pcm_hw_params*,int ) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 unsigned int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (struct snd_pcm_hw_params*) ;
 int FUNC_5 (char*,...) ;
 struct wl1273_priv* FUNC_6 (int ) ;
 unsigned int FUNC_7 (struct wl1273_core*,int) ;
 unsigned int FUNC_8 (struct wl1273_core*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_9(struct snd_pcm_substream *VAR_7,
       struct snd_pcm_hw_params *VAR_8,
       struct snd_soc_dai *VAR_9)
{
 struct wl1273_priv *VAR_10 = FUNC_6(VAR_9->component);
 struct wl1273_core *VAR_11 = VAR_10->core;
 unsigned int VAR_12, VAR_13, VAR_14;

 if (FUNC_4(VAR_8) != 16) {
  FUNC_0(VAR_9->dev, "%d bits/sample not supported\n",
   FUNC_4(VAR_8));
  return -VAR_0;
 }

 VAR_12 = FUNC_3(VAR_8);
 VAR_13 = FUNC_1(VAR_8, VAR_1)->min;

 if (VAR_10->mode == VAR_4) {
  if (VAR_12 != 8000) {
   FUNC_5("Rate %d not supported.\n", FUNC_3(VAR_8));
   return -VAR_0;
  }

  if (FUNC_2(VAR_8) != 1) {
   FUNC_5("Only mono supported.\n");
   return -VAR_0;
  }

  return 0;
 }

 if (VAR_10->mode == VAR_6 &&
     VAR_7->stream == VAR_2) {
  FUNC_5("Only playback supported with TX.\n");
  return -VAR_0;
 }

 if (VAR_10->mode == VAR_5 &&
     VAR_7->stream == VAR_3) {
  FUNC_5("Only capture supported with RX.\n");
  return -VAR_0;
 }

 if (VAR_10->mode != VAR_5 &&
     VAR_10->mode != VAR_6) {
  FUNC_5("Unexpected mode: %d.\n", VAR_10->mode);
  return -VAR_0;
 }

 VAR_14 = FUNC_8(VAR_11, VAR_12, VAR_13);
 if (VAR_14)
  return VAR_14;

 VAR_10->channels = FUNC_2(VAR_8);
 VAR_14 = FUNC_7(VAR_11, VAR_10->channels);
 if (VAR_14)
  return VAR_14;

 return 0;
}
