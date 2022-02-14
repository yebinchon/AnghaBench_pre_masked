
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_pcm_runtime {TYPE_1__* dpcm; TYPE_2__* dai_link; int dev; } ;
struct snd_pcm_substream {int stream; struct snd_soc_pcm_runtime* private_data; } ;
struct TYPE_4__ {int name; } ;
struct TYPE_3__ {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct snd_soc_pcm_runtime*,int) ;
 int FUNC_2 (struct snd_soc_pcm_runtime*,int,int ) ;
 int FUNC_3 (struct snd_soc_pcm_runtime*,int,int ) ;
 int FUNC_4 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_4)
{
 struct snd_soc_pcm_runtime *VAR_5 = VAR_4->private_data;
 int VAR_6 = VAR_4->stream;

 FUNC_3(VAR_5, VAR_6, VAR_2);


 FUNC_1(VAR_5, VAR_4->stream);

 FUNC_0(VAR_5->dev, "ASoC: close FE %s\n", VAR_5->dai_link->name);


 FUNC_4(VAR_4);


 FUNC_2(VAR_5, VAR_6, VAR_0);

 VAR_5->dpcm[VAR_6].state = VAR_1;
 FUNC_3(VAR_5, VAR_6, VAR_3);
 return 0;
}
