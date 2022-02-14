
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct ct_atc_pcm* private_data; } ;
struct ct_atc_pcm {int dummy; } ;
struct ct_atc {int (* pcm_capture_prepare ) (struct ct_atc*,struct ct_atc_pcm*) ;TYPE_1__* card; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ,char*) ;
 struct ct_atc* FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (struct ct_atc*,struct ct_atc_pcm*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_0)
{
 int VAR_1;
 struct ct_atc *VAR_2 = FUNC_1(VAR_0);
 struct snd_pcm_runtime *VAR_3 = VAR_0->runtime;
 struct ct_atc_pcm *VAR_4 = VAR_3->private_data;

 VAR_1 = VAR_2->pcm_capture_prepare(VAR_2, VAR_4);
 if (VAR_1 < 0) {
  FUNC_0(VAR_2->card->dev,
   "Preparing pcm capture failed!!!\n");
  return VAR_1;
 }

 return 0;
}
