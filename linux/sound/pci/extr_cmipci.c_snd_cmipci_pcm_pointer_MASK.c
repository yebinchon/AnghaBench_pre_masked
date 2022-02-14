
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_2__* runtime; } ;
struct cmipci_pcm {unsigned int dma_size; unsigned int shift; size_t offset; scalar_t__ ch; int running; } ;
struct cmipci {TYPE_1__* card; } ;
typedef size_t snd_pcm_uframes_t ;
struct TYPE_4__ {int channels; } ;
struct TYPE_3__ {int dev; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 size_t VAR_4 ;
 size_t FUNC_0 (TYPE_2__*,size_t) ;
 int FUNC_1 (int ,char*,unsigned int) ;
 size_t FUNC_2 (struct cmipci*,unsigned int) ;
 unsigned int FUNC_3 (struct cmipci*,unsigned int) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_4(struct cmipci *VAR_5, struct cmipci_pcm *VAR_6,
      struct snd_pcm_substream *VAR_7)
{
 size_t VAR_8;
 unsigned int VAR_9, VAR_10, VAR_11;

 if (!VAR_6->running)
  return 0;

 VAR_9 = VAR_6->ch ? VAR_3 : VAR_1;
 for (VAR_11 = 0; VAR_11 < 3; VAR_11++) {
  VAR_10 = FUNC_3(VAR_5, VAR_9);
  if (VAR_10 < VAR_6->dma_size)
   goto ok;
 }
 FUNC_1(VAR_5->card->dev, "invalid PCM pointer: %#x\n", VAR_10);
 return VAR_4;
ok:
 VAR_8 = (VAR_6->dma_size - (VAR_10 + 1)) >> VAR_6->shift;





 if (VAR_7->runtime->channels > 2)
  VAR_8 = (VAR_8 * 2) / VAR_7->runtime->channels;
 return VAR_8;
}
