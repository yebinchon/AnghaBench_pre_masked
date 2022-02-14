
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int number; } ;
typedef int snd_pcm_uframes_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (struct snd_pcm_substream*) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_3(struct snd_pcm_substream *VAR_1)
{
 switch (VAR_1->number) {
 case 0:
  return FUNC_1(VAR_1);
 case 1:
  return FUNC_2(VAR_1);
 }
 FUNC_0();
 return -VAR_0;
}
