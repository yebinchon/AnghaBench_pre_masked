
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int pcm_id; } ;
struct snd_sof_pcm {TYPE_4__ pcm; TYPE_3__* stream; } ;
struct snd_sof_dev {int dev; } ;
struct snd_soc_pcm_runtime {TYPE_1__* dai_link; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {size_t stream; int runtime; struct snd_soc_pcm_runtime* private_data; } ;
typedef int snd_pcm_uframes_t ;
struct TYPE_10__ {int (* pcm_pointer ) (struct snd_sof_dev*,struct snd_pcm_substream*) ;} ;
struct TYPE_7__ {int dai_posn; int host_posn; } ;
struct TYPE_8__ {TYPE_2__ posn; } ;
struct TYPE_6__ {scalar_t__ no_pcm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char*,int ,size_t,int ,int ) ;
 struct snd_sof_dev* FUNC_2 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_3 (struct snd_soc_pcm_runtime*,int ) ;
 struct snd_sof_pcm* FUNC_4 (struct snd_sof_dev*,struct snd_soc_pcm_runtime*) ;
 TYPE_5__* FUNC_5 (struct snd_sof_dev*) ;
 int FUNC_6 (struct snd_sof_dev*,struct snd_pcm_substream*) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_7(struct snd_pcm_substream *VAR_2)
{
 struct snd_soc_pcm_runtime *VAR_3 = VAR_2->private_data;
 struct snd_soc_component *VAR_4 =
  FUNC_3(VAR_3, VAR_0);
 struct snd_sof_dev *VAR_5 = FUNC_2(VAR_4);
 struct snd_sof_pcm *VAR_6;
 snd_pcm_uframes_t VAR_7, VAR_8;


 if (VAR_3->dai_link->no_pcm)
  return 0;


 if (FUNC_5(VAR_5)->pcm_pointer)
  return FUNC_5(VAR_5)->pcm_pointer(VAR_5, VAR_2);

 VAR_6 = FUNC_4(VAR_5, VAR_3);
 if (!VAR_6)
  return -VAR_1;


 VAR_7 = FUNC_0(VAR_2->runtime,
          VAR_6->stream[VAR_2->stream].posn.host_posn);
 VAR_8 = FUNC_0(VAR_2->runtime,
         VAR_6->stream[VAR_2->stream].posn.dai_posn);

 FUNC_1(VAR_5->dev, "PCM: stream %d dir %d DMA position %lu DAI position %lu\n",
  VAR_6->pcm.pcm_id, VAR_2->stream, VAR_7, VAR_8);

 return VAR_7;
}
