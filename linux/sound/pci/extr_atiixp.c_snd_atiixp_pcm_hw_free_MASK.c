
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct atiixp_dma {size_t ac97_pcm_type; scalar_t__ pcm_open_flag; } ;
struct atiixp {struct ac97_pcm** pcms; } ;
struct ac97_pcm {int dummy; } ;
struct TYPE_2__ {struct atiixp_dma* private_data; } ;


 int FUNC_0 (struct atiixp*,struct atiixp_dma*,struct snd_pcm_substream*) ;
 int FUNC_1 (struct ac97_pcm*) ;
 int FUNC_2 (struct snd_pcm_substream*) ;
 struct atiixp* FUNC_3 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_0)
{
 struct atiixp *VAR_1 = FUNC_3(VAR_0);
 struct atiixp_dma *VAR_2 = VAR_0->runtime->private_data;

 if (VAR_2->pcm_open_flag) {
  struct ac97_pcm *VAR_3 = VAR_1->pcms[VAR_2->ac97_pcm_type];
  FUNC_1(VAR_3);
  VAR_2->pcm_open_flag = 0;
 }
 FUNC_0(VAR_1, VAR_2, VAR_0);
 FUNC_2(VAR_0);
 return 0;
}
