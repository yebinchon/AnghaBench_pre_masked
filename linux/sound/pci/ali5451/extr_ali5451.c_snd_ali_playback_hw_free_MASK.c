
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct snd_ali_voice* private_data; } ;
struct snd_ali_voice {struct snd_ali_voice* extra; } ;
struct snd_ali {int dummy; } ;


 int FUNC_0 (struct snd_ali*,struct snd_ali_voice*) ;
 int FUNC_1 (struct snd_pcm_substream*) ;
 struct snd_ali* FUNC_2 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_0)
{
 struct snd_ali *VAR_1 = FUNC_2(VAR_0);
 struct snd_pcm_runtime *VAR_2 = VAR_0->runtime;
 struct snd_ali_voice *VAR_3 = VAR_2->private_data;
 struct snd_ali_voice *VAR_4 = VAR_3 ? VAR_3->extra : ((void*)0);

 FUNC_1(VAR_0);
 if (VAR_4) {
  FUNC_0(VAR_1, VAR_4);
  VAR_3->extra = ((void*)0);
 }
 return 0;
}
