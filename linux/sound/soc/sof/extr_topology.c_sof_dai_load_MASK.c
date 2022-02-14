
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_tplg_pcm {scalar_t__ playback; struct snd_soc_tplg_stream_caps* caps; int capture; int dai_name; } ;
struct snd_sof_pcm {TYPE_2__* stream; struct snd_soc_tplg_pcm pcm; int list; struct snd_sof_dev* sdev; } ;
struct snd_sof_dev {int dev; int pcm_list; } ;
struct snd_soc_tplg_stream_caps {int name; } ;
struct TYPE_3__ {struct snd_sof_pcm* private; } ;
struct snd_soc_dai_driver {TYPE_1__ dobj; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_soc_component {int dummy; } ;
struct TYPE_4__ {int page_table; void* comp_id; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char*,...) ;
 struct snd_sof_pcm* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int ,int ,int ,int *) ;
 int FUNC_5 (int *) ;
 struct snd_sof_dev* FUNC_6 (struct snd_soc_component*) ;
 int FUNC_7 (struct snd_sof_dev*,struct snd_sof_pcm*,int) ;

__attribute__((used)) static int FUNC_8(struct snd_soc_component *VAR_7, int VAR_8,
   struct snd_soc_dai_driver *VAR_9,
   struct snd_soc_tplg_pcm *VAR_10, struct snd_soc_dai *VAR_11)
{
 struct snd_sof_dev *VAR_12 = FUNC_6(VAR_7);
 struct snd_soc_tplg_stream_caps *VAR_13;
 struct snd_sof_pcm *VAR_14;
 int VAR_15 = VAR_6;
 int VAR_16 = 0;


 if (!VAR_10)
  return 0;

 VAR_14 = FUNC_2(sizeof(*VAR_14), VAR_2);
 if (!VAR_14)
  return -VAR_1;

 VAR_14->sdev = VAR_12;
 VAR_14->stream[VAR_6].comp_id = VAR_0;
 VAR_14->stream[VAR_5].comp_id = VAR_0;

 if (VAR_10) {
  VAR_14->pcm = *VAR_10;
  FUNC_0(VAR_12->dev, "tplg: load pcm %s\n", VAR_10->dai_name);
 }
 VAR_9->dobj.private = VAR_14;
 FUNC_3(&VAR_14->list, &VAR_12->pcm_list);


 if (!VAR_14->pcm.playback)
  goto capture;

 VAR_13 = &VAR_14->pcm.caps[VAR_15];


 VAR_16 = FUNC_4(VAR_4, VAR_12->dev,
      VAR_3, &VAR_14->stream[VAR_15].page_table);
 if (VAR_16 < 0) {
  FUNC_1(VAR_12->dev, "error: can't alloc page table for %s %d\n",
   VAR_13->name, VAR_16);

  return VAR_16;
 }


 VAR_16 = FUNC_7(VAR_12, VAR_14, VAR_15);
 if (VAR_16) {
  FUNC_1(VAR_12->dev,
   "error: can't bind pcm to host\n");
  goto free_playback_tables;
 }

capture:
 VAR_15 = VAR_5;


 if (!VAR_14->pcm.capture)
  return VAR_16;

 VAR_13 = &VAR_14->pcm.caps[VAR_15];


 VAR_16 = FUNC_4(VAR_4, VAR_12->dev,
      VAR_3, &VAR_14->stream[VAR_15].page_table);
 if (VAR_16 < 0) {
  FUNC_1(VAR_12->dev, "error: can't alloc page table for %s %d\n",
   VAR_13->name, VAR_16);
  goto free_playback_tables;
 }


 VAR_16 = FUNC_7(VAR_12, VAR_14, VAR_15);
 if (VAR_16) {
  FUNC_1(VAR_12->dev,
   "error: can't bind pcm to host\n");
  FUNC_5(&VAR_14->stream[VAR_15].page_table);
  goto free_playback_tables;
 }

 return VAR_16;

free_playback_tables:
 if (VAR_14->pcm.playback)
  FUNC_5(&VAR_14->stream[VAR_6].page_table);

 return VAR_16;
}
