
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int channels_min; int channels_max; char* stream_name; void* formats; int rates; } ;
struct TYPE_5__ {int channels_min; int channels_max; char const* stream_name; void* formats; int rates; } ;
struct snd_soc_dai_driver {int symmetric_rates; int id; char const* name; TYPE_4__ capture; TYPE_1__ playback; int * ops; int resume; int suspend; int remove; int probe; } ;
struct samsung_i2s_priv {struct snd_soc_dai_driver* dai_drv; TYPE_3__* pdev; TYPE_2__* dai; } ;
struct samsung_i2s_dai_data {int pcm_rates; } ;
struct i2s_dai {int dummy; } ;
struct TYPE_7__ {int dev; } ;
struct TYPE_6__ {TYPE_3__* pdev; struct snd_soc_dai_driver* drv; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int *,int,int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_1(struct samsung_i2s_priv *VAR_9,
     const struct samsung_i2s_dai_data *VAR_10,
     int VAR_11)
{
 static const char *VAR_12[] = { "samsung-i2s", "samsung-i2s-sec" };
 static const char *VAR_13[] = { "Primary Playback",
           "Secondary Playback" };
 struct snd_soc_dai_driver *VAR_14;
 struct i2s_dai *VAR_15;
 int VAR_16;

 VAR_9->dai = FUNC_0(&VAR_9->pdev->dev, VAR_11,
         sizeof(*VAR_15), VAR_1);
 if (!VAR_9->dai)
  return -VAR_0;

 VAR_9->dai_drv = FUNC_0(&VAR_9->pdev->dev, VAR_11,
         sizeof(*VAR_14), VAR_1);
 if (!VAR_9->dai_drv)
  return -VAR_0;

 for (VAR_16 = 0; VAR_16 < VAR_11; VAR_16++) {
  VAR_14 = &VAR_9->dai_drv[VAR_16];

  VAR_14->probe = VAR_7;
  VAR_14->remove = VAR_8;
  VAR_14->suspend = VAR_5;
  VAR_14->resume = VAR_4;

  VAR_14->symmetric_rates = 1;
  VAR_14->ops = &VAR_6;

  VAR_14->playback.channels_min = 1;
  VAR_14->playback.channels_max = 2;
  VAR_14->playback.rates = VAR_10->pcm_rates;
  VAR_14->playback.formats = VAR_2;
  VAR_14->playback.stream_name = VAR_13[VAR_16];

  VAR_14->id = VAR_16 + 1;
  VAR_14->name = VAR_12[VAR_16];

  VAR_9->dai[VAR_16].drv = &VAR_9->dai_drv[VAR_16];
  VAR_9->dai[VAR_16].pdev = VAR_9->pdev;
 }


 VAR_14 = &VAR_9->dai_drv[VAR_3 - 1];

 VAR_14->capture.channels_min = 1;
 VAR_14->capture.channels_max = 2;
 VAR_14->capture.rates = VAR_10->pcm_rates;
 VAR_14->capture.formats = VAR_2;
 VAR_14->capture.stream_name = "Primary Capture";

 return 0;
}
