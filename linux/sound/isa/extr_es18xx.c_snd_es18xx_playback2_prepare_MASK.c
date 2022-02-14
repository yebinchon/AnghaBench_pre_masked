
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int channels; int dma_addr; int format; } ;
struct snd_es18xx {int dma1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,unsigned int,int) ;
 int FUNC_1 (struct snd_es18xx*,int,int,int) ;
 int FUNC_2 (struct snd_es18xx*,struct snd_pcm_substream*,int ) ;
 int FUNC_3 (struct snd_es18xx*) ;
 int FUNC_4 (struct snd_es18xx*,int,int) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 unsigned int FUNC_7 (struct snd_pcm_substream*) ;
 unsigned int FUNC_8 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_9(struct snd_es18xx *VAR_3,
     struct snd_pcm_substream *VAR_4)
{
 struct snd_pcm_runtime *VAR_5 = VAR_4->runtime;
 unsigned int VAR_6 = FUNC_7(VAR_4);
 unsigned int VAR_7 = FUNC_8(VAR_4);

 FUNC_3(VAR_3);


        FUNC_1(VAR_3, 0xA8, 0x03, VAR_5->channels == 1 ? 0x02 : 0x01);

        FUNC_2(VAR_3, VAR_4, VAR_0);


 VAR_7 = 0x10000 - VAR_7;
 FUNC_4(VAR_3, 0xA4, VAR_7 & 0xff);
 FUNC_4(VAR_3, 0xA5, VAR_7 >> 8);


        FUNC_4(VAR_3, 0xB6,
                         FUNC_5(VAR_5->format) ? 0x80 : 0x00);
        FUNC_4(VAR_3, 0xB7,
                         FUNC_5(VAR_5->format) ? 0x51 : 0x71);
        FUNC_4(VAR_3, 0xB7, 0x90 |
                         (VAR_5->channels == 1 ? 0x40 : 0x08) |
                         (FUNC_6(VAR_5->format) == 16 ? 0x04 : 0x00) |
                         (FUNC_5(VAR_5->format) ? 0x00 : 0x20));


        FUNC_0(VAR_3->dma1, VAR_5->dma_addr, VAR_6, VAR_2 | VAR_1);

 return 0;
}
