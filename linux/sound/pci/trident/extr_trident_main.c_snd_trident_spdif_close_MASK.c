
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_trident {scalar_t__ device; unsigned int spdif_bits; TYPE_2__* spdif_pcm_ctl; int card; int reg_lock; scalar_t__ spdif_ctrl; } ;
struct snd_pcm_substream {int dummy; } ;
struct TYPE_4__ {int id; TYPE_1__* vd; } ;
struct TYPE_3__ {int access; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct snd_trident*,scalar_t__) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (unsigned int,int ) ;
 int FUNC_4 (int ,int,int *) ;
 struct snd_trident* FUNC_5 (struct snd_pcm_substream*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct snd_pcm_substream *VAR_9)
{
 struct snd_trident *VAR_10 = FUNC_5(VAR_9);
 unsigned int VAR_11;

 FUNC_6(&VAR_10->reg_lock);

 if (VAR_10->device != VAR_8) {
  FUNC_2(VAR_10->spdif_ctrl, FUNC_0(VAR_10, VAR_1 + 3));
  FUNC_3(VAR_10->spdif_bits, FUNC_0(VAR_10, VAR_0));
 } else {
  FUNC_3(VAR_10->spdif_bits, FUNC_0(VAR_10, VAR_3));
  VAR_11 = FUNC_1(FUNC_0(VAR_10, VAR_2));
  if (VAR_10->spdif_ctrl) {
   VAR_11 |= VAR_7;
  } else {
   VAR_11 &= ~VAR_7;
  }
  FUNC_3(VAR_11, FUNC_0(VAR_10, VAR_2));
 }
 FUNC_7(&VAR_10->reg_lock);
 VAR_10->spdif_pcm_ctl->vd[0].access |= VAR_4;
 FUNC_4(VAR_10->card, VAR_6 |
         VAR_5, &VAR_10->spdif_pcm_ctl->id);
 return 0;
}
