
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {struct snd_soc_tplg_stream_caps* caps; int pcm_id; } ;
struct snd_sof_pcm {int* prepared; TYPE_5__* stream; TYPE_2__ pcm; } ;
struct snd_sof_dev {int dev; } ;
struct snd_soc_tplg_stream_caps {int buffer_size_max; int periods_max; int periods_min; int period_size_max; int period_size_min; int formats; } ;
struct snd_soc_pcm_runtime {TYPE_1__* dai_link; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {size_t stream; int wait_time; struct snd_pcm_runtime* runtime; struct snd_soc_pcm_runtime* private_data; } ;
struct TYPE_8__ {int info; void* buffer_bytes_max; void* periods_max; void* periods_min; void* period_bytes_max; void* period_bytes_min; int formats; } ;
struct snd_pcm_runtime {TYPE_3__ hw; } ;
struct TYPE_9__ {scalar_t__ dai_posn; scalar_t__ host_posn; } ;
struct TYPE_10__ {struct snd_pcm_substream* substream; TYPE_4__ posn; int period_elapsed_work; } ;
struct TYPE_6__ {scalar_t__ no_pcm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,char*,void*,...) ;
 int FUNC_2 (int ,char*,int) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct snd_pcm_runtime*,int ,int ,void*) ;
 struct snd_sof_dev* FUNC_6 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_7 (struct snd_soc_pcm_runtime*,int ) ;
 struct snd_sof_pcm* FUNC_8 (struct snd_sof_dev*,struct snd_soc_pcm_runtime*) ;
 int FUNC_9 (struct snd_sof_dev*,struct snd_pcm_substream*) ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_10(struct snd_pcm_substream *VAR_10)
{
 struct snd_soc_pcm_runtime *VAR_11 = VAR_10->private_data;
 struct snd_pcm_runtime *VAR_12 = VAR_10->runtime;
 struct snd_soc_component *VAR_13 =
  FUNC_7(VAR_11, VAR_0);
 struct snd_sof_dev *VAR_14 = FUNC_6(VAR_13);
 struct snd_sof_pcm *VAR_15;
 struct snd_soc_tplg_stream_caps *VAR_16;
 int VAR_17;


 if (VAR_11->dai_link->no_pcm)
  return 0;

 VAR_15 = FUNC_8(VAR_14, VAR_11);
 if (!VAR_15)
  return -VAR_1;

 FUNC_1(VAR_14->dev, "pcm: open stream %d dir %d\n", VAR_15->pcm.pcm_id,
  VAR_10->stream);

 FUNC_0(&VAR_15->stream[VAR_10->stream].period_elapsed_work,
    VAR_9);

 VAR_16 = &VAR_15->pcm.caps[VAR_10->stream];


 FUNC_5(VAR_10->runtime, 0,
       VAR_2,
       FUNC_3(VAR_16->period_size_min));
 FUNC_5(VAR_10->runtime, 0,
       VAR_3,
       FUNC_3(VAR_16->period_size_min));


 VAR_12->hw.info = VAR_5 |
     VAR_6 |
     VAR_4 |
     VAR_8 |
     VAR_7;
 VAR_12->hw.formats = FUNC_4(VAR_16->formats);
 VAR_12->hw.period_bytes_min = FUNC_3(VAR_16->period_size_min);
 VAR_12->hw.period_bytes_max = FUNC_3(VAR_16->period_size_max);
 VAR_12->hw.periods_min = FUNC_3(VAR_16->periods_min);
 VAR_12->hw.periods_max = FUNC_3(VAR_16->periods_max);





 VAR_12->hw.buffer_bytes_max = FUNC_3(VAR_16->buffer_size_max);

 FUNC_1(VAR_14->dev, "period min %zd max %zd bytes\n",
  VAR_12->hw.period_bytes_min,
  VAR_12->hw.period_bytes_max);
 FUNC_1(VAR_14->dev, "period count %d max %d\n",
  VAR_12->hw.periods_min,
  VAR_12->hw.periods_max);
 FUNC_1(VAR_14->dev, "buffer max %zd bytes\n",
  VAR_12->hw.buffer_bytes_max);


 VAR_10->wait_time = 500;

 VAR_15->stream[VAR_10->stream].posn.host_posn = 0;
 VAR_15->stream[VAR_10->stream].posn.dai_posn = 0;
 VAR_15->stream[VAR_10->stream].substream = VAR_10;
 VAR_15->prepared[VAR_10->stream] = 0;

 VAR_17 = FUNC_9(VAR_14, VAR_10);
 if (VAR_17 < 0)
  FUNC_2(VAR_14->dev, "error: pcm open failed %d\n", VAR_17);

 return VAR_17;
}
