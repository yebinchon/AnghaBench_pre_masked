
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct soc_tplg {TYPE_2__* comp; int ops; int index; } ;
struct snd_soc_tplg_stream_caps {int dummy; } ;
struct snd_soc_tplg_pcm {scalar_t__ compress; struct snd_soc_tplg_stream_caps* caps; scalar_t__ capture; scalar_t__ playback; int dai_id; int dai_name; } ;
struct snd_soc_pcm_stream {struct snd_soc_dai_driver* stream_name; } ;
struct TYPE_3__ {int list; int type; int ops; int index; } ;
struct snd_soc_dai_driver {TYPE_1__ dobj; struct snd_soc_dai_driver* name; struct snd_soc_pcm_stream capture; struct snd_soc_pcm_stream playback; int compress_new; int id; } ;
struct TYPE_4__ {int dobj_list; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct snd_soc_dai_driver*) ;
 struct snd_soc_dai_driver* FUNC_2 (int ,int ) ;
 struct snd_soc_dai_driver* FUNC_3 (int,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (struct snd_soc_pcm_stream*,struct snd_soc_tplg_stream_caps*) ;
 int VAR_5 ;
 int FUNC_7 (TYPE_2__*,struct snd_soc_dai_driver*) ;
 int FUNC_8 (struct soc_tplg*,struct snd_soc_dai_driver*,struct snd_soc_tplg_pcm*,int *) ;
 scalar_t__ FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct soc_tplg *VAR_6,
 struct snd_soc_tplg_pcm *VAR_7)
{
 struct snd_soc_dai_driver *VAR_8;
 struct snd_soc_pcm_stream *VAR_9;
 struct snd_soc_tplg_stream_caps *VAR_10;
 int VAR_11;

 VAR_8 = FUNC_3(sizeof(struct snd_soc_dai_driver), VAR_1);
 if (VAR_8 == ((void*)0))
  return -VAR_0;

 if (FUNC_9(VAR_7->dai_name))
  VAR_8->name = FUNC_2(VAR_7->dai_name, VAR_1);
 VAR_8->id = FUNC_4(VAR_7->dai_id);

 if (VAR_7->playback) {
  VAR_9 = &VAR_8->playback;
  VAR_10 = &VAR_7->caps[VAR_4];
  FUNC_6(VAR_9, VAR_10);
 }

 if (VAR_7->capture) {
  VAR_9 = &VAR_8->capture;
  VAR_10 = &VAR_7->caps[VAR_3];
  FUNC_6(VAR_9, VAR_10);
 }

 if (VAR_7->compress)
  VAR_8->compress_new = VAR_5;


 VAR_11 = FUNC_8(VAR_6, VAR_8, VAR_7, ((void*)0));
 if (VAR_11 < 0) {
  FUNC_0(VAR_6->comp->dev, "ASoC: DAI loading failed\n");
  FUNC_1(VAR_8->playback.stream_name);
  FUNC_1(VAR_8->capture.stream_name);
  FUNC_1(VAR_8->name);
  FUNC_1(VAR_8);
  return VAR_11;
 }

 VAR_8->dobj.index = VAR_6->index;
 VAR_8->dobj.ops = VAR_6->ops;
 VAR_8->dobj.type = VAR_2;
 FUNC_5(&VAR_8->dobj.list, &VAR_6->comp->dobj_list);


 return FUNC_7(VAR_6->comp, VAR_8);
}
