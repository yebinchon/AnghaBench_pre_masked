
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct snd_intelhad {int connected; } ;


 scalar_t__ FUNC_0 (struct snd_pcm_substream*,struct snd_intelhad*) ;
 struct snd_pcm_substream* FUNC_1 (struct snd_intelhad*) ;
 int FUNC_2 (struct snd_intelhad*) ;
 int FUNC_3 (struct snd_pcm_substream*) ;
 int FUNC_4 (struct snd_pcm_substream*) ;

__attribute__((used)) static void FUNC_5(struct snd_intelhad *VAR_0)
{
 struct snd_pcm_substream *VAR_1;

 VAR_1 = FUNC_1(VAR_0);
 if (!VAR_1)
  return;

 if (!VAR_0->connected) {
  FUNC_4(VAR_1);
  goto out;
 }


 if (FUNC_0(VAR_1, VAR_0) < 0)
  FUNC_4(VAR_1);
 else
  FUNC_3(VAR_1);

 out:
 FUNC_2(VAR_0);
}
