
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_ymfpci {int spdif_bits; TYPE_2__* spdif_pcm_ctl; int card; int reg_lock; scalar_t__ spdif_opened; } ;
struct snd_pcm_substream {int dummy; } ;
struct TYPE_4__ {int id; TYPE_1__* vd; } ;
struct TYPE_3__ {int access; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int,int *) ;
 struct snd_ymfpci* FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (struct snd_pcm_substream*) ;
 int FUNC_3 (struct snd_ymfpci*,int ) ;
 int FUNC_4 (struct snd_ymfpci*,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct snd_ymfpci*) ;

__attribute__((used)) static int FUNC_8(struct snd_pcm_substream *VAR_5)
{
 struct snd_ymfpci *VAR_6 = FUNC_1(VAR_5);

 FUNC_5(&VAR_6->reg_lock);
 VAR_6->spdif_opened = 0;
 FUNC_7(VAR_6);
 FUNC_4(VAR_6, VAR_3,
     FUNC_3(VAR_6, VAR_3) & ~2);
 FUNC_4(VAR_6, VAR_4, VAR_6->spdif_bits);
 FUNC_6(&VAR_6->reg_lock);
 VAR_6->spdif_pcm_ctl->vd[0].access |= VAR_0;
 FUNC_0(VAR_6->card, VAR_2 |
         VAR_1, &VAR_6->spdif_pcm_ctl->id);
 return FUNC_2(VAR_5);
}
