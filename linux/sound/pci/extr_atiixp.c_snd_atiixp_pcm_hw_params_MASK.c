
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct atiixp_dma {size_t ac97_pcm_type; int pcm_open_flag; int buf_bytes; int buf_addr; } ;
struct atiixp {struct ac97_pcm** pcms; } ;
struct ac97_pcm {TYPE_2__* r; } ;
struct TYPE_4__ {int slots; } ;
struct TYPE_3__ {int dma_addr; struct atiixp_dma* private_data; } ;


 int FUNC_0 (struct atiixp*,struct atiixp_dma*,struct snd_pcm_substream*,int ,int ) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (struct snd_pcm_hw_params*) ;
 int FUNC_5 (struct snd_pcm_hw_params*) ;
 int FUNC_6 (struct ac97_pcm*) ;
 int FUNC_7 (struct ac97_pcm*,int ,int ,int ) ;
 int FUNC_8 (struct snd_pcm_substream*,int ) ;
 struct atiixp* FUNC_9 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_10(struct snd_pcm_substream *VAR_0,
        struct snd_pcm_hw_params *VAR_1)
{
 struct atiixp *VAR_2 = FUNC_9(VAR_0);
 struct atiixp_dma *VAR_3 = VAR_0->runtime->private_data;
 int VAR_4;

 VAR_4 = FUNC_8(VAR_0, FUNC_1(VAR_1));
 if (VAR_4 < 0)
  return VAR_4;
 VAR_3->buf_addr = VAR_0->runtime->dma_addr;
 VAR_3->buf_bytes = FUNC_1(VAR_1);

 VAR_4 = FUNC_0(VAR_2, VAR_3, VAR_0,
           FUNC_4(VAR_1),
           FUNC_3(VAR_1));
 if (VAR_4 < 0)
  return VAR_4;

 if (VAR_3->ac97_pcm_type >= 0) {
  struct ac97_pcm *VAR_5 = VAR_2->pcms[VAR_3->ac97_pcm_type];



  if (VAR_3->pcm_open_flag) {
   FUNC_6(VAR_5);
   VAR_3->pcm_open_flag = 0;
  }
  VAR_4 = FUNC_7(VAR_5, FUNC_5(VAR_1),
     FUNC_2(VAR_1),
     VAR_5->r[0].slots);
  if (VAR_4 >= 0)
   VAR_3->pcm_open_flag = 1;
 }

 return VAR_4;
}
