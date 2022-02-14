
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sof_intel_hda_dev {int no_ipc_position; } ;
struct snd_sof_pcm {TYPE_4__* stream; } ;
struct snd_sof_dev {int dev; TYPE_1__* pdata; } ;
struct snd_soc_pcm_runtime {TYPE_2__* dai_link; } ;
struct snd_pcm_substream {size_t stream; TYPE_5__* runtime; struct snd_soc_pcm_runtime* private_data; } ;
struct hdac_stream {int index; scalar_t__ bufsize; } ;
typedef scalar_t__ snd_pcm_uframes_t ;
struct TYPE_10__ {struct hdac_stream* private_data; } ;
struct TYPE_8__ {scalar_t__ host_posn; } ;
struct TYPE_9__ {TYPE_3__ posn; } ;
struct TYPE_7__ {int id; } ;
struct TYPE_6__ {struct sof_intel_hda_dev* hw_pdata; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_5__*,scalar_t__) ;
 int FUNC_1 (int ,char*,int,size_t,scalar_t__) ;
 int FUNC_2 (int ,char*,int ) ;
 scalar_t__ FUNC_3 (struct hdac_stream*) ;
 scalar_t__ FUNC_4 (struct snd_sof_dev*,int ,scalar_t__) ;
 struct snd_sof_pcm* FUNC_5 (struct snd_sof_dev*,struct snd_soc_pcm_runtime*) ;
 int FUNC_6 (int,int) ;

snd_pcm_uframes_t FUNC_7(struct snd_sof_dev *VAR_4,
          struct snd_pcm_substream *VAR_5)
{
 struct snd_soc_pcm_runtime *VAR_6 = VAR_5->private_data;
 struct hdac_stream *VAR_7 = VAR_5->runtime->private_data;
 struct sof_intel_hda_dev *VAR_8 = VAR_4->pdata->hw_pdata;
 struct snd_sof_pcm *VAR_9;
 snd_pcm_uframes_t VAR_10;

 VAR_9 = FUNC_5(VAR_4, VAR_6);
 if (!VAR_9) {
  FUNC_2(VAR_4->dev, "warn: can't find PCM with DAI ID %d\n",
         VAR_6->dai_link->id);
  return 0;
 }

 if (VAR_8 && !VAR_8->no_ipc_position) {

  VAR_10 = VAR_9->stream[VAR_5->stream].posn.host_posn;
  goto found;
 }
 if (VAR_5->stream == VAR_3) {
  VAR_10 = FUNC_4(VAR_4, VAR_2,
           VAR_0 +
           (VAR_1 *
     VAR_7->index));
 } else {
  FUNC_6(20, 21);
  FUNC_4(VAR_4, VAR_2,
     VAR_0 +
     (VAR_1 *
      VAR_7->index));
  VAR_10 = FUNC_3(VAR_7);
 }

 if (VAR_10 >= VAR_7->bufsize)
  VAR_10 = 0;

found:
 VAR_10 = FUNC_0(VAR_5->runtime, VAR_10);

 FUNC_1(VAR_4->dev, "PCM: stream %d dir %d position %lu\n",
   VAR_7->index, VAR_5->stream, VAR_10);
 return VAR_10;
}
