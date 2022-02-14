
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_pcm_runtime {int dev; TYPE_2__* dpcm; TYPE_1__* dai_link; } ;
struct snd_pcm_substream {int stream; struct snd_pcm_runtime* runtime; struct snd_soc_pcm_runtime* private_data; } ;
struct snd_pcm_runtime {int dummy; } ;
struct TYPE_4__ {int state; } ;
struct TYPE_3__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct snd_pcm_substream*,int) ;
 int FUNC_3 (struct snd_soc_pcm_runtime*,int) ;
 int FUNC_4 (struct snd_soc_pcm_runtime*,int) ;
 int FUNC_5 (struct snd_pcm_substream*) ;
 int FUNC_6 (struct snd_soc_pcm_runtime*,int,int ) ;
 int FUNC_7 (struct snd_pcm_runtime*) ;
 int FUNC_8 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_9(struct snd_pcm_substream *VAR_3)
{
 struct snd_soc_pcm_runtime *VAR_4 = VAR_3->private_data;
 struct snd_pcm_runtime *VAR_5 = VAR_3->runtime;
 int VAR_6 = VAR_3->stream, VAR_7 = 0;

 FUNC_6(VAR_4, VAR_6, VAR_1);

 VAR_7 = FUNC_3(VAR_4, VAR_3->stream);
 if (VAR_7 < 0) {
  FUNC_1(VAR_4->dev,"ASoC: failed to start some BEs %d\n", VAR_7);
  goto be_err;
 }

 FUNC_0(VAR_4->dev, "ASoC: open FE %s\n", VAR_4->dai_link->name);


 VAR_7 = FUNC_8(VAR_3);
 if (VAR_7 < 0) {
  FUNC_1(VAR_4->dev,"ASoC: failed to start FE %d\n", VAR_7);
  goto unwind;
 }

 VAR_4->dpcm[VAR_6].state = VAR_0;

 FUNC_5(VAR_3);
 FUNC_7(VAR_5);

 VAR_7 = FUNC_2(VAR_3, VAR_6);
 if (VAR_7 < 0) {
  FUNC_1(VAR_4->dev, "ASoC: failed to apply dpcm symmetry %d\n",
   VAR_7);
  goto unwind;
 }

 FUNC_6(VAR_4, VAR_6, VAR_2);
 return 0;

unwind:
 FUNC_4(VAR_4, VAR_3->stream);
be_err:
 FUNC_6(VAR_4, VAR_6, VAR_2);
 return VAR_7;
}
