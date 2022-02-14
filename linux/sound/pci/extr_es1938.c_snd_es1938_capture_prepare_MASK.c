
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int channels; int format; int dma_addr; } ;
struct es1938 {unsigned int dma1_size; int dma1_shift; int dma1_start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct es1938*,int ,int,int) ;
 int FUNC_1 (struct es1938*) ;
 int FUNC_2 (struct es1938*,struct snd_pcm_substream*,int ) ;
 int FUNC_3 (struct es1938*) ;
 int FUNC_4 (struct es1938*,int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 unsigned int FUNC_7 (struct snd_pcm_substream*) ;
 unsigned int FUNC_8 (struct snd_pcm_substream*) ;
 struct es1938* FUNC_9 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_10(struct snd_pcm_substream *VAR_5)
{
 struct es1938 *VAR_6 = FUNC_9(VAR_5);
 struct snd_pcm_runtime *VAR_7 = VAR_5->runtime;
 int VAR_8, VAR_9, VAR_10;
 unsigned int VAR_11 = FUNC_7(VAR_5);
 unsigned int VAR_12 = FUNC_8(VAR_5);

 VAR_6->dma1_size = VAR_11;
 VAR_6->dma1_start = VAR_7->dma_addr;

 VAR_10 = (VAR_7->channels > 1) ? 0 : 1;
 VAR_9 = FUNC_6(VAR_7->format) == 16 ? 0 : 1;
 VAR_8 = FUNC_5(VAR_7->format);

 VAR_6->dma1_shift = 2 - VAR_10 - VAR_9;

 FUNC_3(VAR_6);


 FUNC_0(VAR_6, VAR_1, 0x03, (VAR_10 ? 2 : 1));


        FUNC_2(VAR_6, VAR_5, VAR_0);

 VAR_12 = 0x10000 - VAR_12;
 FUNC_4(VAR_6, VAR_3, VAR_12 & 0xff);
 FUNC_4(VAR_6, VAR_2, VAR_12 >> 8);


 FUNC_4(VAR_6, VAR_4, VAR_8 ? 0x51 : 0x71);
 FUNC_4(VAR_6, VAR_4, 0x90 |
         (VAR_8 ? 0x00 : 0x20) |
         (VAR_9 ? 0x00 : 0x04) |
         (VAR_10 ? 0x40 : 0x08));




 FUNC_1(VAR_6);

 return 0;
}
