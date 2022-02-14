
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_trident {scalar_t__ device; unsigned int spdif_pcm_bits; int spdif_pcm_ctrl; unsigned int spdif_bits; TYPE_1__* spdif_pcm_ctl; int card; int reg_lock; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct TYPE_2__ {int id; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (struct snd_pcm_hw_params*) ;
 int FUNC_1 (int ,int ,int *) ;
 struct snd_trident* FUNC_2 (struct snd_pcm_substream*) ;
 int FUNC_3 (struct snd_pcm_substream*,struct snd_pcm_hw_params*) ;
 int FUNC_4 (struct snd_pcm_substream*,struct snd_pcm_hw_params*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_substream *VAR_11,
           struct snd_pcm_hw_params *VAR_12)
{
 struct snd_trident *VAR_13 = FUNC_2(VAR_11);
 unsigned int VAR_14 = 0, VAR_15 = 0;
 int VAR_16;

 VAR_16 = FUNC_4(VAR_11, VAR_12);
 if (VAR_16 < 0)
  return VAR_16;

 if (VAR_13->device == VAR_10) {
  VAR_16 = FUNC_3(VAR_11, VAR_12);
  if (VAR_16 < 0)
   return VAR_16;
 }


 FUNC_5(&VAR_13->reg_lock);
 VAR_14 = VAR_13->spdif_pcm_bits;
 if (VAR_14 & VAR_0)
  VAR_13->spdif_pcm_bits &= ~VAR_1;
 else
  VAR_13->spdif_pcm_bits &= ~(VAR_5 << 24);
 if (FUNC_0(VAR_12) >= 48000) {
  VAR_13->spdif_pcm_ctrl = 0x3c;
  VAR_13->spdif_pcm_bits |=
   VAR_13->spdif_bits & VAR_0 ?
    VAR_4 :
    (VAR_8 << 24);
 }
 else if (FUNC_0(VAR_12) >= 44100) {
  VAR_13->spdif_pcm_ctrl = 0x3e;
  VAR_13->spdif_pcm_bits |=
   VAR_13->spdif_bits & VAR_0 ?
    VAR_3 :
    (VAR_7 << 24);
 }
 else {
  VAR_13->spdif_pcm_ctrl = 0x3d;
  VAR_13->spdif_pcm_bits |=
   VAR_13->spdif_bits & VAR_0 ?
    VAR_2 :
    (VAR_6 << 24);
 }
 VAR_15 = VAR_14 != VAR_13->spdif_pcm_bits;
 FUNC_6(&VAR_13->reg_lock);

 if (VAR_15)
  FUNC_1(VAR_13->card, VAR_9, &VAR_13->spdif_pcm_ctl->id);

 return 0;
}
