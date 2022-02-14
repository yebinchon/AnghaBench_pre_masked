
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sof_ipc_stream_posn {int xrun_size; int xrun_comp_id; int host_posn; } ;
struct snd_sof_pcm_stream {int substream; int posn; } ;
struct snd_sof_pcm {struct snd_sof_pcm_stream* stream; } ;
struct snd_sof_dev {int dev; } ;
typedef int posn ;


 int FUNC_0 (int ,char*,int ,int ,int ) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int *,struct sof_ipc_stream_posn*,int) ;
 int FUNC_3 (int ) ;
 struct snd_sof_pcm* FUNC_4 (struct snd_sof_dev*,int ,int*) ;
 int FUNC_5 (struct snd_sof_dev*,int ,struct sof_ipc_stream_posn*,int) ;

__attribute__((used)) static void FUNC_6(struct snd_sof_dev *VAR_0, u32 VAR_1)
{
 struct snd_sof_pcm_stream *VAR_2;
 struct sof_ipc_stream_posn VAR_3;
 struct snd_sof_pcm *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_4(VAR_0, VAR_1, &VAR_5);
 if (!VAR_4) {
  FUNC_1(VAR_0->dev, "error: XRUN for unknown stream, msg_id %d\n",
   VAR_1);
  return;
 }

 VAR_2 = &VAR_4->stream[VAR_5];
 FUNC_5(VAR_0, VAR_2->substream, &VAR_3, sizeof(VAR_3));

 FUNC_0(VAR_0->dev, "posn XRUN: host %llx comp %d size %d\n",
  VAR_3.host_posn, VAR_3.xrun_comp_id, VAR_3.xrun_size);






}
