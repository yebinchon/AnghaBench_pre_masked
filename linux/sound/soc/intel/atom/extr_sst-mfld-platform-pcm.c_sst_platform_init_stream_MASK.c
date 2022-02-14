
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int sfreq; scalar_t__ buffer_ptr; struct snd_pcm_substream* arg; int period_elapsed; } ;
struct sst_runtime_stream {TYPE_3__ stream_info; TYPE_2__* ops; } ;
struct snd_soc_pcm_runtime {int dev; } ;
struct snd_pcm_substream {TYPE_1__* runtime; struct snd_soc_pcm_runtime* private_data; } ;
struct TYPE_8__ {int dev; } ;
struct TYPE_6__ {int (* stream_init ) (int ,TYPE_3__*) ;} ;
struct TYPE_5__ {int rate; struct sst_runtime_stream* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,int) ;
 TYPE_4__* VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct sst_runtime_stream*,int ) ;
 int FUNC_3 (int ,TYPE_3__*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_3)
{
 struct sst_runtime_stream *VAR_4 =
   VAR_3->runtime->private_data;
 struct snd_soc_pcm_runtime *VAR_5 = VAR_3->private_data;
 int VAR_6;

 FUNC_0(VAR_5->dev, "setting buffer ptr param\n");
 FUNC_2(VAR_4, VAR_0);
 VAR_4->stream_info.period_elapsed = VAR_2;
 VAR_4->stream_info.arg = VAR_3;
 VAR_4->stream_info.buffer_ptr = 0;
 VAR_4->stream_info.sfreq = VAR_3->runtime->rate;
 VAR_6 = VAR_4->ops->stream_init(VAR_1->dev, &VAR_4->stream_info);
 if (VAR_6)
  FUNC_1(VAR_5->dev, "control_set ret error %d\n", VAR_6);
 return VAR_6;

}
