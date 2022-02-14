
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct sof_ipc_stream_posn {int wallclock; int dai_posn; int host_posn; } ;
struct snd_sof_pcm_stream {TYPE_2__* substream; int posn; } ;
struct snd_sof_pcm {struct snd_sof_pcm_stream* stream; } ;
struct snd_sof_dev {int dev; } ;
typedef int posn ;
struct TYPE_5__ {TYPE_1__* runtime; } ;
struct TYPE_4__ {int no_period_wakeup; } ;


 int FUNC_0 (int ,char*,int ,int ,int ) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int *,struct sof_ipc_stream_posn*,int) ;
 struct snd_sof_pcm* FUNC_3 (struct snd_sof_dev*,int ,int*) ;
 int FUNC_4 (struct snd_sof_dev*,TYPE_2__*,struct sof_ipc_stream_posn*,int) ;
 int FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_6(struct snd_sof_dev *VAR_0, u32 VAR_1)
{
 struct snd_sof_pcm_stream *VAR_2;
 struct sof_ipc_stream_posn VAR_3;
 struct snd_sof_pcm *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_3(VAR_0, VAR_1, &VAR_5);
 if (!VAR_4) {
  FUNC_1(VAR_0->dev,
   "error: period elapsed for unknown stream, msg_id %d\n",
   VAR_1);
  return;
 }

 VAR_2 = &VAR_4->stream[VAR_5];
 FUNC_4(VAR_0, VAR_2->substream, &VAR_3, sizeof(VAR_3));

 FUNC_0(VAR_0->dev, "posn : host 0x%llx dai 0x%llx wall 0x%llx\n",
  VAR_3.host_posn, VAR_3.dai_posn, VAR_3.wallclock);

 FUNC_2(&VAR_2->posn, &VAR_3, sizeof(VAR_3));


 if (!VAR_2->substream->runtime->no_period_wakeup)
  FUNC_5(VAR_2->substream);
}
