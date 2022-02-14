
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct atiixp_modem {int * ac97; } ;
struct atiixp_dma {int buf_bytes; int buf_addr; } ;
struct TYPE_2__ {int dma_addr; struct atiixp_dma* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct atiixp_modem*,struct atiixp_dma*,struct snd_pcm_substream*,int ,int ) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (struct snd_pcm_hw_params*) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (struct snd_pcm_substream*,int ) ;
 struct atiixp_modem* FUNC_7 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_8(struct snd_pcm_substream *VAR_3,
       struct snd_pcm_hw_params *VAR_4)
{
 struct atiixp_modem *VAR_5 = FUNC_7(VAR_3);
 struct atiixp_dma *VAR_6 = VAR_3->runtime->private_data;
 int VAR_7;
 int VAR_8;

 VAR_7 = FUNC_6(VAR_3, FUNC_1(VAR_4));
 if (VAR_7 < 0)
  return VAR_7;
 VAR_6->buf_addr = VAR_3->runtime->dma_addr;
 VAR_6->buf_bytes = FUNC_1(VAR_4);

 VAR_7 = FUNC_0(VAR_5, VAR_6, VAR_3,
           FUNC_3(VAR_4),
           FUNC_2(VAR_4));
 if (VAR_7 < 0)
  return VAR_7;


 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
  if (! VAR_5->ac97[VAR_8])
   continue;
  FUNC_5(VAR_5->ac97[VAR_8], VAR_1, FUNC_4(VAR_4));
  FUNC_5(VAR_5->ac97[VAR_8], VAR_0, 0);
 }

 return VAR_7;
}
