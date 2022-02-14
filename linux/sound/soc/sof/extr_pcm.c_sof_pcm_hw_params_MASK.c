
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct sof_ipc_pcm_params_reply {int dummy; } ;
struct TYPE_14__ {int size; int phy_addr; int pages; } ;
struct TYPE_11__ {int size; } ;
struct TYPE_16__ {size_t direction; int sample_valid_bytes; int sample_container_bytes; int stream_tag; int frame_fmt; int host_period_bytes; int channels; int rate; int buffer_fmt; TYPE_6__ buffer; TYPE_3__ hdr; } ;
struct TYPE_15__ {int size; int cmd; } ;
struct sof_ipc_pcm_params {TYPE_8__ params; TYPE_7__ hdr; int comp_id; } ;
struct TYPE_10__ {int pcm_id; } ;
struct snd_sof_pcm {int* prepared; int * params; TYPE_5__* stream; TYPE_2__ pcm; } ;
struct snd_sof_dev {int dev; int ipc; } ;
struct snd_soc_pcm_runtime {TYPE_1__* dai_link; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {size_t stream; struct snd_pcm_runtime* runtime; struct snd_soc_pcm_runtime* private_data; } ;
struct snd_pcm_runtime {int dma_bytes; int dma_area; } ;
struct snd_pcm_hw_params {int dummy; } ;
typedef int pcm ;
typedef int ipc_params_reply ;
struct TYPE_12__ {int addr; } ;
struct TYPE_13__ {TYPE_4__ page_table; int comp_id; } ;
struct TYPE_9__ {scalar_t__ no_pcm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;




 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct snd_pcm_substream*,int ,int ) ;
 int FUNC_2 (int ,char*,int ,...) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int *,struct snd_pcm_hw_params*,int) ;
 int FUNC_5 (struct sof_ipc_pcm_params*,int ,int) ;
 int FUNC_6 (struct snd_pcm_hw_params*) ;
 int FUNC_7 (struct snd_pcm_hw_params*) ;
 int FUNC_8 (struct snd_pcm_hw_params*) ;
 int FUNC_9 (struct snd_pcm_hw_params*) ;
 int FUNC_10 (struct snd_pcm_hw_params*) ;
 int FUNC_11 (struct snd_pcm_hw_params*) ;
 int FUNC_12 (int) ;
 int FUNC_13 (struct snd_pcm_substream*,int ) ;
 struct snd_sof_dev* FUNC_14 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_15 (struct snd_soc_pcm_runtime*,int ) ;
 struct snd_sof_pcm* FUNC_16 (struct snd_sof_dev*,struct snd_soc_pcm_runtime*) ;
 int FUNC_17 (struct snd_sof_dev*,struct snd_pcm_substream*,struct snd_pcm_hw_params*,TYPE_8__*) ;
 int FUNC_18 (int ,int,struct sof_ipc_pcm_params*,int,struct sof_ipc_pcm_params_reply*,int) ;
 int FUNC_19 (struct snd_sof_pcm*,struct snd_pcm_substream*,struct sof_ipc_pcm_params_reply*) ;

__attribute__((used)) static int FUNC_20(struct snd_pcm_substream *VAR_9,
        struct snd_pcm_hw_params *VAR_10)
{
 struct snd_soc_pcm_runtime *VAR_11 = VAR_9->private_data;
 struct snd_pcm_runtime *VAR_12 = VAR_9->runtime;
 struct snd_soc_component *VAR_13 =
  FUNC_15(VAR_11, VAR_0);
 struct snd_sof_dev *VAR_14 = FUNC_14(VAR_13);
 struct snd_sof_pcm *VAR_15;
 struct sof_ipc_pcm_params VAR_16;
 struct sof_ipc_pcm_params_reply VAR_17;
 int VAR_18;


 if (VAR_11->dai_link->no_pcm)
  return 0;

 VAR_15 = FUNC_16(VAR_14, VAR_11);
 if (!VAR_15)
  return -VAR_1;

 FUNC_2(VAR_14->dev, "pcm: hw params stream %d dir %d\n",
  VAR_15->pcm.pcm_id, VAR_9->stream);

 FUNC_5(&VAR_16, 0, sizeof(VAR_16));


 VAR_18 = FUNC_13(VAR_9, FUNC_6(VAR_10));
 if (VAR_18 < 0) {
  FUNC_3(VAR_14->dev, "error: could not allocate %d bytes for PCM %d\n",
   FUNC_6(VAR_10), VAR_15->pcm.pcm_id);
  return VAR_18;
 }
 if (VAR_18) {






  VAR_18 = FUNC_1(VAR_9, VAR_12->dma_area,
     VAR_12->dma_bytes);
  if (VAR_18 < 0)
   return VAR_18;
 }


 VAR_16.params.buffer.pages = FUNC_0(VAR_12->dma_bytes);


 VAR_16.hdr.size = sizeof(VAR_16);
 VAR_16.hdr.cmd = VAR_7 | VAR_8;
 VAR_16.comp_id = VAR_15->stream[VAR_9->stream].comp_id;
 VAR_16.params.hdr.size = sizeof(VAR_16.params);
 VAR_16.params.buffer.phy_addr =
  VAR_15->stream[VAR_9->stream].page_table.addr;
 VAR_16.params.buffer.size = VAR_12->dma_bytes;
 VAR_16.params.direction = VAR_9->stream;
 VAR_16.params.sample_valid_bytes = FUNC_11(VAR_10) >> 3;
 VAR_16.params.buffer_fmt = VAR_2;
 VAR_16.params.rate = FUNC_10(VAR_10);
 VAR_16.params.channels = FUNC_7(VAR_10);
 VAR_16.params.host_period_bytes = FUNC_9(VAR_10);


 VAR_18 = FUNC_12(FUNC_8(VAR_10));
 if (VAR_18 < 0)
  return VAR_18;
 VAR_16.params.sample_container_bytes = VAR_18 >> 3;


 switch (FUNC_8(VAR_10)) {
 case 130:
  VAR_16.params.frame_fmt = VAR_4;
  break;
 case 129:
  VAR_16.params.frame_fmt = VAR_5;
  break;
 case 128:
  VAR_16.params.frame_fmt = VAR_6;
  break;
 case 131:
  VAR_16.params.frame_fmt = VAR_3;
  break;
 default:
  return -VAR_1;
 }


 VAR_18 = FUNC_17(VAR_14,
          VAR_9,
          VAR_10,
          &VAR_16.params);
 if (VAR_18 < 0) {
  FUNC_3(VAR_14->dev, "error: platform hw params failed\n");
  return VAR_18;
 }

 FUNC_2(VAR_14->dev, "stream_tag %d", VAR_16.params.stream_tag);


 VAR_18 = FUNC_18(VAR_14->ipc, VAR_16.hdr.cmd, &VAR_16, sizeof(VAR_16),
     &VAR_17, sizeof(VAR_17));
 if (VAR_18 < 0) {
  FUNC_3(VAR_14->dev, "error: hw params ipc failed for stream %d\n",
   VAR_16.params.stream_tag);
  return VAR_18;
 }

 VAR_18 = FUNC_19(VAR_15, VAR_9, &VAR_17);
 if (VAR_18 < 0)
  return VAR_18;

 VAR_15->prepared[VAR_9->stream] = 1;


 FUNC_4(&VAR_15->params[VAR_9->stream], VAR_10, sizeof(*VAR_10));

 return VAR_18;
}
