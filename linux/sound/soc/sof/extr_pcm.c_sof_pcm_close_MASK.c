
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pcm_id; } ;
struct snd_sof_pcm {TYPE_1__ pcm; } ;
struct snd_sof_dev {int dev; } ;
struct snd_soc_pcm_runtime {TYPE_2__* dai_link; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {int stream; struct snd_soc_pcm_runtime* private_data; } ;
struct TYPE_4__ {scalar_t__ no_pcm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (int ,char*,int) ;
 struct snd_sof_dev* FUNC_2 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_3 (struct snd_soc_pcm_runtime*,int ) ;
 struct snd_sof_pcm* FUNC_4 (struct snd_sof_dev*,struct snd_soc_pcm_runtime*) ;
 int FUNC_5 (struct snd_sof_dev*,struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_2)
{
 struct snd_soc_pcm_runtime *VAR_3 = VAR_2->private_data;
 struct snd_soc_component *VAR_4 =
  FUNC_3(VAR_3, VAR_0);
 struct snd_sof_dev *VAR_5 = FUNC_2(VAR_4);
 struct snd_sof_pcm *VAR_6;
 int VAR_7;


 if (VAR_3->dai_link->no_pcm)
  return 0;

 VAR_6 = FUNC_4(VAR_5, VAR_3);
 if (!VAR_6)
  return -VAR_1;

 FUNC_0(VAR_5->dev, "pcm: close stream %d dir %d\n", VAR_6->pcm.pcm_id,
  VAR_2->stream);

 VAR_7 = FUNC_5(VAR_5, VAR_2);
 if (VAR_7 < 0) {
  FUNC_1(VAR_5->dev, "error: pcm close failed %d\n",
   VAR_7);




 }

 return 0;
}
