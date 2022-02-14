
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union cmdret {int* retlongs; } ;
struct snd_riptide {struct cmdif* cif; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int period_size; } ;
struct pcmhw {int size; int pointer; int id; } ;
struct cmdif {int dummy; } ;
typedef int snd_pcm_uframes_t ;


 union cmdret VAR_0 ;
 int FUNC_0 (struct cmdif*,int ,int ,union cmdret*) ;
 int FUNC_1 (struct snd_pcm_runtime*,int) ;
 struct pcmhw* FUNC_2 (struct snd_pcm_substream*) ;
 struct snd_riptide* FUNC_3 (struct snd_pcm_substream*) ;
 int FUNC_4 (char*,int,int,...) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_5(struct snd_pcm_substream
          *VAR_1)
{
 struct snd_riptide *VAR_2 = FUNC_3(VAR_1);
 struct snd_pcm_runtime *VAR_3 = VAR_1->runtime;
 struct pcmhw *VAR_4 = FUNC_2(VAR_1);
 struct cmdif *VAR_5 = VAR_2->cif;
 union cmdret VAR_6 = VAR_0;
 snd_pcm_uframes_t VAR_7;

 FUNC_0(VAR_5, 0, VAR_4->id, &VAR_6);
 if (VAR_4->size && VAR_3->period_size) {
  FUNC_4
      ("pointer stream %d position 0x%x(0x%x in buffer) bytes 0x%lx(0x%lx in period) frames\n",
       VAR_4->id, VAR_6.retlongs[1], VAR_6.retlongs[1] % VAR_4->size,
       FUNC_1(VAR_3, VAR_6.retlongs[1]),
       FUNC_1(VAR_3,
         VAR_6.retlongs[1]) % VAR_3->period_size);
  if (VAR_6.retlongs[1] > VAR_4->pointer)
   VAR_7 =
       FUNC_1(VAR_3,
         VAR_6.retlongs[1] % VAR_4->size);
  else
   VAR_7 =
       FUNC_1(VAR_3,
         VAR_4->pointer % VAR_4->size);
 } else {
  FUNC_4("stream not started or strange parms (%d %ld)\n",
       VAR_4->size, VAR_3->period_size);
  VAR_7 = FUNC_1(VAR_3, 0);
 }
 return VAR_7;
}
