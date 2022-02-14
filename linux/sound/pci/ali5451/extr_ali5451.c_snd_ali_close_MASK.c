
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct snd_ali_voice {int number; } ;
struct snd_ali {int dummy; } ;
struct TYPE_2__ {struct snd_ali_voice* private_data; } ;


 int FUNC_0 (struct snd_ali*,int ) ;
 struct snd_ali* FUNC_1 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_0)
{
 struct snd_ali *VAR_1 = FUNC_1(VAR_0);
 struct snd_ali_voice *VAR_2 = VAR_0->runtime->private_data;

 FUNC_0(VAR_1,VAR_2->number);

 return 0;
}
