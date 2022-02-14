
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int size; int cmd; } ;
struct sof_ipc_stream {TYPE_4__ hdr; int comp_id; } ;
struct sof_ipc_reply {int dummy; } ;
struct TYPE_6__ {int pcm_id; } ;
struct snd_sof_pcm {TYPE_3__* stream; TYPE_2__ pcm; } ;
struct snd_sof_dev {int ipc; int dev; } ;
struct snd_soc_pcm_runtime {TYPE_1__* dai_link; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {size_t stream; struct snd_soc_pcm_runtime* private_data; } ;
typedef int stream ;
typedef int reply ;
struct TYPE_7__ {int comp_id; } ;
struct TYPE_5__ {scalar_t__ no_pcm; } ;


 int VAR_0 ;
 int VAR_1 ;






 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,int ,size_t,int) ;
 int FUNC_1 (int ,char*,...) ;
 struct snd_sof_dev* FUNC_2 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_3 (struct snd_soc_pcm_runtime*,int ) ;
 struct snd_sof_pcm* FUNC_4 (struct snd_sof_dev*,struct snd_soc_pcm_runtime*) ;
 int FUNC_5 (struct snd_sof_dev*,struct snd_pcm_substream*,int) ;
 int FUNC_6 (int ,int ,struct sof_ipc_stream*,int,struct sof_ipc_reply*,int) ;
 int FUNC_7 (struct snd_pcm_substream*,struct snd_sof_dev*,struct snd_sof_pcm*) ;
 int FUNC_8 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_9(struct snd_pcm_substream *VAR_7, int VAR_8)
{
 struct snd_soc_pcm_runtime *VAR_9 = VAR_7->private_data;
 struct snd_soc_component *VAR_10 =
  FUNC_3(VAR_9, VAR_0);
 struct snd_sof_dev *VAR_11 = FUNC_2(VAR_10);
 struct snd_sof_pcm *VAR_12;
 struct sof_ipc_stream VAR_13;
 struct sof_ipc_reply VAR_14;
 bool VAR_15 = 0;
 bool VAR_16 = 0;
 int VAR_17;


 if (VAR_9->dai_link->no_pcm)
  return 0;

 VAR_12 = FUNC_4(VAR_11, VAR_9);
 if (!VAR_12)
  return -VAR_1;

 FUNC_0(VAR_11->dev, "pcm: trigger stream %d dir %d cmd %d\n",
  VAR_12->pcm.pcm_id, VAR_7->stream, VAR_8);

 VAR_13.hdr.size = sizeof(VAR_13);
 VAR_13.hdr.cmd = VAR_2;
 VAR_13.comp_id = VAR_12->stream[VAR_7->stream].comp_id;

 switch (VAR_8) {
 case 133:
  VAR_13.hdr.cmd |= VAR_3;
  VAR_16 = 1;
  break;
 case 132:
  VAR_13.hdr.cmd |= VAR_4;
  break;
 case 131:

  VAR_17 = FUNC_8(VAR_7);
  if (VAR_17 < 0) {
   FUNC_1(VAR_11->dev,
    "error: failed to set up hw_params upon resume\n");
   return VAR_17;
  }


 case 130:
  VAR_13.hdr.cmd |= VAR_5;
  break;
 case 128:
 case 129:
  VAR_13.hdr.cmd |= VAR_6;
  VAR_16 = 1;
  VAR_15 = 1;
  break;
 default:
  FUNC_1(VAR_11->dev, "error: unhandled trigger cmd %d\n", VAR_8);
  return -VAR_1;
 }





 if (!VAR_16)
  FUNC_5(VAR_11, VAR_7, VAR_8);


 VAR_17 = FUNC_6(VAR_11->ipc, VAR_13.hdr.cmd, &VAR_13,
     sizeof(VAR_13), &VAR_14, sizeof(VAR_14));


 if (VAR_16)
  FUNC_5(VAR_11, VAR_7, VAR_8);


 if (!VAR_17 && VAR_15)
  VAR_17 = FUNC_7(VAR_7, VAR_11, VAR_12);

 return VAR_17;
}
