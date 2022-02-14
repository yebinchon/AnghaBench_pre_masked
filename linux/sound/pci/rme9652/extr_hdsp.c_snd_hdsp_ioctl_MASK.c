
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;




 int FUNC_0 (struct snd_pcm_substream*,void*) ;
 int FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (struct snd_pcm_substream*,unsigned int,void*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_0,
        unsigned int VAR_1, void *VAR_2)
{
 switch (VAR_1) {
 case 128:
  return FUNC_1(VAR_0);
 case 129:
  return FUNC_0(VAR_0, VAR_2);
 default:
  break;
 }

 return FUNC_2(VAR_0, VAR_1, VAR_2);
}
