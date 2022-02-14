
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sof_ipc_stream_params {int stream_tag; scalar_t__ host_period_bytes; } ;
struct sof_intel_hda_dev {scalar_t__ no_ipc_position; } ;
struct snd_sof_dev {int dev; TYPE_1__* pdata; } ;
struct snd_pcm_substream {TYPE_2__* runtime; } ;
struct snd_pcm_hw_params {int info; int flags; } ;
struct snd_dma_buffer {int dummy; } ;
struct hdac_stream {int format_val; int bufsize; int no_period_wakeup; int stream_tag; int period_bytes; struct snd_pcm_substream* substream; } ;
struct hdac_ext_stream {int dummy; } ;
struct TYPE_4__ {struct snd_dma_buffer* dma_buffer_p; struct hdac_stream* private_data; } ;
struct TYPE_3__ {struct sof_intel_hda_dev* hw_pdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct snd_sof_dev*,int ) ;
 int FUNC_2 (struct snd_sof_dev*,int ) ;
 int FUNC_3 (struct snd_sof_dev*,struct hdac_ext_stream*,struct snd_dma_buffer*,struct snd_pcm_hw_params*) ;
 int FUNC_4 (struct snd_sof_dev*,struct hdac_ext_stream*,int ,int ) ;
 int FUNC_5 (struct snd_pcm_hw_params*) ;
 int FUNC_6 (struct snd_pcm_hw_params*) ;
 int FUNC_7 (struct snd_pcm_hw_params*) ;
 int FUNC_8 (struct snd_pcm_hw_params*) ;
 int FUNC_9 (struct snd_pcm_hw_params*) ;
 struct hdac_ext_stream* FUNC_10 (struct hdac_stream*) ;

int FUNC_11(struct snd_sof_dev *VAR_3,
     struct snd_pcm_substream *VAR_4,
     struct snd_pcm_hw_params *VAR_5,
     struct sof_ipc_stream_params *VAR_6)
{
 struct hdac_stream *VAR_7 = VAR_4->runtime->private_data;
 struct hdac_ext_stream *VAR_8 = FUNC_10(VAR_7);
 struct sof_intel_hda_dev *VAR_9 = VAR_3->pdata->hw_pdata;
 struct snd_dma_buffer *VAR_10;
 int VAR_11;
 u32 VAR_12, VAR_13, VAR_14;

 VAR_12 = FUNC_5(VAR_5);
 VAR_13 = FUNC_2(VAR_3, FUNC_8(VAR_5));
 VAR_14 = FUNC_1(VAR_3, FUNC_9(VAR_5));

 VAR_7->substream = VAR_4;

 VAR_10 = VAR_4->runtime->dma_buffer_p;

 VAR_7->format_val = VAR_13 | VAR_14 | (FUNC_6(VAR_5) - 1);
 VAR_7->bufsize = VAR_12;
 VAR_7->period_bytes = FUNC_7(VAR_5);
 VAR_7->no_period_wakeup =
   (VAR_5->info & VAR_2) &&
   (VAR_5->flags & VAR_1);

 VAR_11 = FUNC_3(VAR_3, VAR_8, VAR_10, VAR_5);
 if (VAR_11 < 0) {
  FUNC_0(VAR_3->dev, "error: hdac prepare failed: %x\n", VAR_11);
  return VAR_11;
 }


 FUNC_4(VAR_3, VAR_8, VAR_0, 0);


 if (VAR_9 && VAR_9->no_ipc_position)
  VAR_6->host_period_bytes = 0;

 VAR_6->stream_tag = VAR_7->stream_tag;

 return 0;
}
