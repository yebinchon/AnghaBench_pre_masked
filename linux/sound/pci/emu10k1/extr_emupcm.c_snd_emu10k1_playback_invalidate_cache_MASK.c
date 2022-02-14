
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_runtime {int channels; int format; } ;
struct snd_emu10k1_voice {unsigned int number; TYPE_2__* epcm; } ;
struct snd_emu10k1 {int dummy; } ;
struct TYPE_4__ {TYPE_1__* substream; } ;
struct TYPE_3__ {struct snd_pcm_runtime* runtime; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int FUNC_0 (unsigned int,int) ;
 int FUNC_1 (struct snd_emu10k1*,scalar_t__,unsigned int,unsigned int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct snd_emu10k1 *VAR_3, int VAR_4, struct snd_emu10k1_voice *VAR_5)
{
 struct snd_pcm_runtime *VAR_6;
 unsigned int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11 = 64, VAR_12, VAR_13;

 if (VAR_5 == ((void*)0))
  return;
 VAR_6 = VAR_5->epcm->substream->runtime;
 VAR_7 = VAR_5->number;
 VAR_8 = (!VAR_4 && VAR_6->channels == 2);
 VAR_13 = FUNC_2(VAR_6->format) == 16 ? 0 : 0x80808080;
 VAR_10 = FUNC_0(VAR_8, VAR_13 == 0);

 VAR_12 = (VAR_13 == 0) ? (32-VAR_10) : (64-VAR_10+1) >> 1;
 if (VAR_12 > 16) VAR_12 = 16;
 for (VAR_9 = 0; VAR_9 < VAR_12; VAR_9++) {
  FUNC_1(VAR_3, VAR_2 + VAR_9, VAR_7, VAR_13);
  if (VAR_8) {
   FUNC_1(VAR_3, VAR_2 + VAR_9, VAR_7 + 1, VAR_13);
  }
 }

 FUNC_1(VAR_3, VAR_0, VAR_7, 0);
 FUNC_1(VAR_3, VAR_1, VAR_7, VAR_11);
 if (VAR_8) {
  FUNC_1(VAR_3, VAR_0, VAR_7 + 1, 0);
  FUNC_1(VAR_3, VAR_1, VAR_7 + 1, VAR_11);
 }

 FUNC_1(VAR_3, VAR_0, VAR_7, VAR_10);
 if (VAR_8) {
  FUNC_1(VAR_3, VAR_0, VAR_7+1, VAR_10);
 }
}
