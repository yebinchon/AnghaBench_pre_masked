
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct snd_intelhad {int need_reset; } ;


 struct snd_pcm_substream* FUNC_0 (struct snd_intelhad*) ;
 int FUNC_1 (struct snd_intelhad*) ;
 int FUNC_2 (struct snd_pcm_substream*) ;

__attribute__((used)) static void FUNC_3(struct snd_intelhad *VAR_0)
{
 struct snd_pcm_substream *VAR_1;


 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1) {
  FUNC_2(VAR_1);
  FUNC_1(VAR_0);
 }
 VAR_0->need_reset = 1;
}
