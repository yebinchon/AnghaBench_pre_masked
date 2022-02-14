
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pcm_stream_info {int buffer_ptr; int pcm_delay; } ;
struct sst_runtime_stream {TYPE_1__* ops; struct pcm_stream_info stream_info; } ;
struct snd_soc_pcm_runtime {int dev; } ;
struct snd_pcm_substream {TYPE_2__* runtime; struct snd_soc_pcm_runtime* private_data; } ;
typedef int snd_pcm_uframes_t ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {int delay; struct sst_runtime_stream* private_data; } ;
struct TYPE_4__ {int (* stream_read_tstamp ) (int ,struct pcm_stream_info*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 TYPE_3__* VAR_1 ;
 int FUNC_1 (struct sst_runtime_stream*) ;
 int FUNC_2 (int ,struct pcm_stream_info*) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_3
   (struct snd_pcm_substream *VAR_2)
{
 struct sst_runtime_stream *VAR_3;
 int VAR_4, VAR_5;
 struct pcm_stream_info *VAR_6;
 struct snd_soc_pcm_runtime *VAR_7 = VAR_2->private_data;

 VAR_3 = VAR_2->runtime->private_data;
 VAR_5 = FUNC_1(VAR_3);
 if (VAR_5 == VAR_0)
  return 0;
 VAR_6 = &VAR_3->stream_info;
 VAR_4 = VAR_3->ops->stream_read_tstamp(VAR_1->dev, VAR_6);
 if (VAR_4) {
  FUNC_0(VAR_7->dev, "sst: error code = %d\n", VAR_4);
  return VAR_4;
 }
 VAR_2->runtime->delay = VAR_6->pcm_delay;
 return VAR_6->buffer_ptr;
}
