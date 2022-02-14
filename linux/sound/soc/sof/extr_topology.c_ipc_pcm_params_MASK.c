
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sof_ipc_pcm_params_reply {int dummy; } ;
struct TYPE_7__ {int size; int cmd; } ;
struct TYPE_5__ {int size; } ;
struct TYPE_6__ {int direction; int sample_valid_bytes; int frame_fmt; int host_period_bytes; int channels; int rate; int buffer_fmt; TYPE_1__ hdr; } ;
struct sof_ipc_pcm_params {TYPE_3__ hdr; TYPE_2__ params; int comp_id; } ;
struct snd_sof_widget {TYPE_4__* widget; int comp_id; struct snd_sof_dev* sdev; } ;
struct snd_sof_pcm {struct snd_pcm_hw_params* params; } ;
struct snd_sof_dev {int dev; int ipc; } ;
struct snd_pcm_hw_params {int dummy; } ;
typedef int pcm ;
typedef int ipc_params_reply ;
struct TYPE_8__ {int name; int sname; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct sof_ipc_pcm_params*,int ,int) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (struct snd_pcm_hw_params*) ;
 int FUNC_5 (struct snd_pcm_hw_params*) ;
 int FUNC_6 (struct snd_pcm_hw_params*) ;
 struct snd_sof_pcm* FUNC_7 (struct snd_sof_dev*,int ) ;
 int FUNC_8 (int ,int,struct sof_ipc_pcm_params*,int,struct sof_ipc_pcm_params_reply*,int) ;

__attribute__((used)) static int FUNC_9(struct snd_sof_widget *VAR_7, int VAR_8)
{
 struct sof_ipc_pcm_params_reply VAR_9;
 struct snd_sof_dev *VAR_10 = VAR_7->sdev;
 struct sof_ipc_pcm_params VAR_11;
 struct snd_pcm_hw_params *VAR_12;
 struct snd_sof_pcm *VAR_13;
 int VAR_14 = 0;

 FUNC_1(&VAR_11, 0, sizeof(VAR_11));


 VAR_13 = FUNC_7(VAR_10, VAR_7->widget->sname);
 if (!VAR_13) {
  FUNC_0(VAR_10->dev, "error: cannot find PCM for %s\n",
   VAR_7->widget->name);
  return -VAR_0;
 }

 VAR_12 = &VAR_13->params[VAR_8];


 VAR_11.hdr.size = sizeof(VAR_11);
 VAR_11.hdr.cmd = VAR_5 | VAR_6;
 VAR_11.comp_id = VAR_7->comp_id;
 VAR_11.params.hdr.size = sizeof(VAR_11.params);
 VAR_11.params.direction = VAR_8;
 VAR_11.params.sample_valid_bytes = FUNC_6(VAR_12) >> 3;
 VAR_11.params.buffer_fmt = VAR_1;
 VAR_11.params.rate = FUNC_5(VAR_12);
 VAR_11.params.channels = FUNC_2(VAR_12);
 VAR_11.params.host_period_bytes = FUNC_4(VAR_12);


 switch (FUNC_3(VAR_12)) {
 case 130:
  VAR_11.params.frame_fmt = VAR_2;
  break;
 case 129:
  VAR_11.params.frame_fmt = VAR_3;
  break;
 case 128:
  VAR_11.params.frame_fmt = VAR_4;
  break;
 default:
  return -VAR_0;
 }


 VAR_14 = FUNC_8(VAR_10->ipc, VAR_11.hdr.cmd, &VAR_11, sizeof(VAR_11),
     &VAR_9, sizeof(VAR_9));
 if (VAR_14 < 0)
  FUNC_0(VAR_10->dev, "error: pcm params failed for %s\n",
   VAR_7->widget->name);

 return VAR_14;
}
