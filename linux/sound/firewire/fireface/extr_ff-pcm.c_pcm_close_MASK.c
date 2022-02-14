
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_ff* private_data; } ;
struct snd_ff {int dummy; } ;


 int FUNC_0 (struct snd_ff*) ;

__attribute__((used)) static int FUNC_1(struct snd_pcm_substream *VAR_0)
{
 struct snd_ff *VAR_1 = VAR_0->private_data;

 FUNC_0(VAR_1);

 return 0;
}
