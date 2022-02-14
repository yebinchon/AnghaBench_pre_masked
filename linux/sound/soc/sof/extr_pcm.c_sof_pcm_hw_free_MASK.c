
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int pcm_id; } ;
struct snd_sof_pcm {TYPE_3__* stream; scalar_t__* prepared; TYPE_2__ pcm; } ;
struct snd_sof_dev {int dev; } ;
struct snd_soc_pcm_runtime {TYPE_1__* dai_link; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {size_t stream; struct snd_soc_pcm_runtime* private_data; } ;
struct TYPE_6__ {int period_elapsed_work; } ;
struct TYPE_4__ {scalar_t__ no_pcm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,int ,size_t) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct snd_pcm_substream*) ;
 struct snd_sof_dev* FUNC_4 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_5 (struct snd_soc_pcm_runtime*,int ) ;
 struct snd_sof_pcm* FUNC_6 (struct snd_sof_dev*,struct snd_soc_pcm_runtime*) ;
 int FUNC_7 (struct snd_sof_dev*,struct snd_pcm_substream*) ;
 int FUNC_8 (struct snd_pcm_substream*,struct snd_sof_dev*,struct snd_sof_pcm*) ;

__attribute__((used)) static int FUNC_9(struct snd_pcm_substream *VAR_2)
{
 struct snd_soc_pcm_runtime *VAR_3 = VAR_2->private_data;
 struct snd_soc_component *VAR_4 =
  FUNC_5(VAR_3, VAR_0);
 struct snd_sof_dev *VAR_5 = FUNC_4(VAR_4);
 struct snd_sof_pcm *VAR_6;
 int VAR_7, VAR_8 = 0;


 if (VAR_3->dai_link->no_pcm)
  return 0;

 VAR_6 = FUNC_6(VAR_5, VAR_3);
 if (!VAR_6)
  return -VAR_1;

 FUNC_1(VAR_5->dev, "pcm: free stream %d dir %d\n", VAR_6->pcm.pcm_id,
  VAR_2->stream);

 if (VAR_6->prepared[VAR_2->stream]) {
  VAR_7 = FUNC_8(VAR_2, VAR_5, VAR_6);
  if (VAR_7 < 0)
   VAR_8 = VAR_7;
 }

 FUNC_3(VAR_2);

 FUNC_0(&VAR_6->stream[VAR_2->stream].period_elapsed_work);

 VAR_7 = FUNC_7(VAR_5, VAR_2);
 if (VAR_7 < 0) {
  FUNC_2(VAR_5->dev, "error: platform hw free failed\n");
  VAR_8 = VAR_7;
 }

 return VAR_8;
}
