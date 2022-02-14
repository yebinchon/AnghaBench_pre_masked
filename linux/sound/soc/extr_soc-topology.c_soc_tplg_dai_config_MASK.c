
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct soc_tplg {TYPE_1__* comp; int dev; } ;
struct snd_soc_tplg_stream_caps {int dummy; } ;
struct snd_soc_tplg_dai {scalar_t__ flags; scalar_t__ flag_mask; struct snd_soc_tplg_stream_caps* caps; scalar_t__ capture; scalar_t__ playback; int dai_name; scalar_t__ dai_id; } ;
struct snd_soc_pcm_stream {int dummy; } ;
struct snd_soc_dai_link_component {int dai_name; } ;
struct snd_soc_dai_driver {struct snd_soc_pcm_stream capture; struct snd_soc_pcm_stream playback; } ;
struct snd_soc_dai {scalar_t__ id; struct snd_soc_dai_driver* driver; } ;
typedef int dai_component ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct snd_soc_dai_link_component*,int ,int) ;
 int FUNC_3 (struct snd_soc_dai_driver*,scalar_t__,scalar_t__) ;
 int FUNC_4 (struct snd_soc_pcm_stream*,struct snd_soc_tplg_stream_caps*) ;
 struct snd_soc_dai* FUNC_5 (struct snd_soc_dai_link_component*) ;
 int FUNC_6 (struct soc_tplg*,struct snd_soc_dai_driver*,int *,struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_7(struct soc_tplg *VAR_3,
          struct snd_soc_tplg_dai *VAR_4)
{
 struct snd_soc_dai_link_component VAR_5;
 struct snd_soc_dai *VAR_6;
 struct snd_soc_dai_driver *VAR_7;
 struct snd_soc_pcm_stream *VAR_8;
 struct snd_soc_tplg_stream_caps *VAR_9;
 int VAR_10;

 FUNC_2(&VAR_5, 0, sizeof(VAR_5));

 VAR_5.dai_name = VAR_4->dai_name;
 VAR_6 = FUNC_5(&VAR_5);
 if (!VAR_6) {
  FUNC_0(VAR_3->dev, "ASoC: physical DAI %s not registered\n",
   VAR_4->dai_name);
  return -VAR_0;
 }

 if (FUNC_1(VAR_4->dai_id) != VAR_6->id) {
  FUNC_0(VAR_3->dev, "ASoC: physical DAI %s id mismatch\n",
   VAR_4->dai_name);
  return -VAR_0;
 }

 VAR_7 = VAR_6->driver;
 if (!VAR_7)
  return -VAR_0;

 if (VAR_4->playback) {
  VAR_8 = &VAR_7->playback;
  VAR_9 = &VAR_4->caps[VAR_2];
  FUNC_4(VAR_8, VAR_9);
 }

 if (VAR_4->capture) {
  VAR_8 = &VAR_7->capture;
  VAR_9 = &VAR_4->caps[VAR_1];
  FUNC_4(VAR_8, VAR_9);
 }

 if (VAR_4->flag_mask)
  FUNC_3(VAR_7,
         FUNC_1(VAR_4->flag_mask),
         FUNC_1(VAR_4->flags));


 VAR_10 = FUNC_6(VAR_3, VAR_7, ((void*)0), VAR_6);
 if (VAR_10 < 0) {
  FUNC_0(VAR_3->comp->dev, "ASoC: DAI loading failed\n");
  return VAR_10;
 }

 return 0;
}
