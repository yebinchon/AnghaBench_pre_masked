
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_pcm_substream {size_t number; TYPE_1__* runtime; } ;
struct snd_pcm_indirect {scalar_t__ sw_data; } ;
struct snd_emu10k1_fx8010_pcm {unsigned int buffer_size; unsigned int tram_pos; unsigned int tram_shift; } ;
struct TYPE_5__ {scalar_t__ area; } ;
struct TYPE_6__ {TYPE_2__ etram_pages; struct snd_emu10k1_fx8010_pcm* pcm; } ;
struct snd_emu10k1 {TYPE_3__ fx8010; } ;
struct TYPE_4__ {scalar_t__ dma_area; } ;


 int FUNC_0 (unsigned short*,unsigned short*,unsigned short*,unsigned int,unsigned int) ;
 struct snd_emu10k1* FUNC_1 (struct snd_pcm_substream*) ;

__attribute__((used)) static void FUNC_2(struct snd_pcm_substream *VAR_0,
     struct snd_pcm_indirect *VAR_1, size_t VAR_2)
{
 struct snd_emu10k1 *VAR_3 = FUNC_1(VAR_0);
 struct snd_emu10k1_fx8010_pcm *VAR_4 = &VAR_3->fx8010.pcm[VAR_0->number];
 unsigned int VAR_5 = VAR_4->buffer_size;
 unsigned short *VAR_6 = (unsigned short *)(VAR_0->runtime->dma_area + VAR_1->sw_data);
 unsigned int VAR_7 = VAR_2 >> 2, VAR_8;
 unsigned int VAR_9 = VAR_4->tram_pos;
 unsigned int VAR_10 = VAR_4->tram_shift;

 while (VAR_7 > VAR_9) {
  VAR_8 = VAR_9 + 1;
  FUNC_0((unsigned short *)VAR_3->fx8010.etram_pages.area + VAR_9,
             (unsigned short *)VAR_3->fx8010.etram_pages.area + VAR_9 + VAR_5 / 2,
             VAR_6, VAR_8, VAR_10);
  VAR_6 += VAR_8 * 2;
  VAR_7 -= VAR_8;
  VAR_9 = (VAR_5 / 2) - 1;
  VAR_10++;
 }
 FUNC_0((unsigned short *)VAR_3->fx8010.etram_pages.area + VAR_9,
            (unsigned short *)VAR_3->fx8010.etram_pages.area + VAR_9 + VAR_5 / 2,
            VAR_6, VAR_7, VAR_10);
 VAR_9 -= VAR_7;
 VAR_4->tram_pos = VAR_9;
 VAR_4->tram_shift = VAR_10;
}
