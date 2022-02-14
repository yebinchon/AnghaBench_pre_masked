
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_2__* pcm; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct ct_atc_pcm* private_data; } ;
struct ct_atc_pcm {int dummy; } ;
struct ct_atc {int (* spdif_passthru_playback_prepare ) (struct ct_atc*,struct ct_atc_pcm*) ;int (* pcm_playback_prepare ) (struct ct_atc*,struct ct_atc_pcm*) ;TYPE_1__* card; } ;
struct TYPE_4__ {scalar_t__ device; } ;
struct TYPE_3__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*) ;
 struct ct_atc* FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (struct ct_atc*,struct ct_atc_pcm*) ;
 int FUNC_3 (struct ct_atc*,struct ct_atc_pcm*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_1)
{
 int VAR_2;
 struct ct_atc *VAR_3 = FUNC_1(VAR_1);
 struct snd_pcm_runtime *VAR_4 = VAR_1->runtime;
 struct ct_atc_pcm *VAR_5 = VAR_4->private_data;

 if (VAR_0 == VAR_1->pcm->device)
  VAR_2 = VAR_3->spdif_passthru_playback_prepare(VAR_3, VAR_5);
 else
  VAR_2 = VAR_3->pcm_playback_prepare(VAR_3, VAR_5);

 if (VAR_2 < 0) {
  FUNC_0(VAR_3->card->dev,
   "Preparing pcm playback failed!!!\n");
  return VAR_2;
 }

 return 0;
}
