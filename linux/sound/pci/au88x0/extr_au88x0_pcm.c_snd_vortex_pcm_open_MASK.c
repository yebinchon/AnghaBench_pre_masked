
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int spdif_sr; } ;
typedef TYPE_1__ vortex_t ;
struct snd_pcm_substream {scalar_t__ stream; struct snd_pcm_runtime* runtime; int pcm; } ;
struct TYPE_9__ {int channels_max; int rates; } ;
struct snd_pcm_runtime {int * private_data; TYPE_2__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (struct snd_pcm_runtime*,int ) ;
 int FUNC_3 (struct snd_pcm_runtime*,int ,int ,int *) ;
 int FUNC_4 (struct snd_pcm_runtime*,int ,int ) ;
 int FUNC_5 (struct snd_pcm_runtime*,int ,int ,int) ;
 TYPE_1__* FUNC_6 (struct snd_pcm_substream*) ;
 TYPE_2__ VAR_14 ;
 TYPE_2__ VAR_15 ;
 TYPE_2__ VAR_16 ;
 TYPE_2__ VAR_17 ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_substream *VAR_18)
{
 vortex_t *VAR_19 = FUNC_6(VAR_18);
 struct snd_pcm_runtime *VAR_20 = VAR_18->runtime;
 int VAR_21;


 if ((VAR_21 =
      FUNC_2(VAR_20,
        VAR_2)) < 0)
  return VAR_21;

 if ((VAR_21 =
      FUNC_4(VAR_20, 0,
     VAR_3)) < 0)
  return VAR_21;

 FUNC_5(VAR_20, 0,
     VAR_0, 64);

 if (FUNC_1(VAR_18->pcm) != VAR_12) {

  if (FUNC_1(VAR_18->pcm) == VAR_8) {
   VAR_20->hw = VAR_14;
  }

  if (FUNC_1(VAR_18->pcm) == VAR_11) {
   VAR_20->hw = VAR_16;
   switch (VAR_19->spdif_sr) {
   case 32000:
    VAR_20->hw.rates = VAR_4;
    break;
   case 44100:
    VAR_20->hw.rates = VAR_5;
    break;
   case 48000:
    VAR_20->hw.rates = VAR_6;
    break;
   }
  }
  if (FUNC_1(VAR_18->pcm) == VAR_9
      || FUNC_1(VAR_18->pcm) == VAR_10)
   VAR_20->hw = VAR_15;
  VAR_18->runtime->private_data = ((void*)0);
 }

 else {
  VAR_20->hw = VAR_17;
  VAR_18->runtime->private_data = ((void*)0);
 }

 return 0;
}
