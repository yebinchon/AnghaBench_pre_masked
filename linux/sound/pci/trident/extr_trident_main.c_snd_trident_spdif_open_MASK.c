
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_trident_voice {int spdif; struct snd_pcm_substream* substream; } ;
struct snd_trident {scalar_t__ device; TYPE_2__* spdif_pcm_ctl; int card; int reg_lock; int spdif_bits; int spdif_pcm_bits; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int hw; int private_free; struct snd_trident_voice* private_data; } ;
struct TYPE_4__ {int id; TYPE_1__* vd; } ;
struct TYPE_3__ {int access; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,int,int *) ;
 int FUNC_1 (struct snd_pcm_runtime*,int ,int ,int) ;
 struct snd_trident* FUNC_2 (struct snd_pcm_substream*) ;
 struct snd_trident_voice* FUNC_3 (struct snd_trident*,int ,int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_10)
{
 struct snd_trident *VAR_11 = FUNC_2(VAR_10);
 struct snd_trident_voice *VAR_12;
 struct snd_pcm_runtime *VAR_13 = VAR_10->runtime;

 VAR_12 = FUNC_3(VAR_11, VAR_5, 0, 0);
 if (VAR_12 == ((void*)0))
  return -VAR_0;
 VAR_12->spdif = 1;
 VAR_12->substream = VAR_10;
 FUNC_4(&VAR_11->reg_lock);
 VAR_11->spdif_pcm_bits = VAR_11->spdif_bits;
 FUNC_5(&VAR_11->reg_lock);

 VAR_13->private_data = VAR_12;
 VAR_13->private_free = VAR_7;
 if (VAR_11->device == VAR_6) {
  VAR_13->hw = VAR_8;
 } else {
  VAR_13->hw = VAR_9;
 }

 VAR_11->spdif_pcm_ctl->vd[0].access &= ~VAR_1;
 FUNC_0(VAR_11->card, VAR_3 |
         VAR_2, &VAR_11->spdif_pcm_ctl->id);

 FUNC_1(VAR_13, VAR_4, 0, 64*1024);
 return 0;
}
