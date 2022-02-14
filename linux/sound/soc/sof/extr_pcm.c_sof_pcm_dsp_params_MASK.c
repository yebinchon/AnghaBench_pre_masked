
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sof_ipc_pcm_params_reply {int dummy; } ;
struct TYPE_2__ {int pcm_id; } ;
struct snd_sof_pcm {TYPE_1__ pcm; struct snd_sof_dev* sdev; } ;
struct snd_sof_dev {int dev; } ;
struct snd_pcm_substream {int dummy; } ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct snd_sof_dev*,struct snd_pcm_substream*,struct sof_ipc_pcm_params_reply const*) ;

__attribute__((used)) static int FUNC_2(struct snd_sof_pcm *VAR_0, struct snd_pcm_substream *VAR_1,
         const struct sof_ipc_pcm_params_reply *VAR_2)
{
 struct snd_sof_dev *VAR_3 = VAR_0->sdev;

 int VAR_4 = FUNC_1(VAR_3, VAR_1, VAR_2);

 if (VAR_4 < 0)
  FUNC_0(VAR_3->dev, "error: got wrong reply for PCM %d\n",
   VAR_0->pcm.pcm_id);

 return VAR_4;
}
