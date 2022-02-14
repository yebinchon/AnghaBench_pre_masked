
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct cmipci {int * channel; } ;
typedef int snd_pcm_uframes_t ;


 size_t VAR_0 ;
 int FUNC_0 (struct cmipci*,int *,struct snd_pcm_substream*) ;
 struct cmipci* FUNC_1 (struct snd_pcm_substream*) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_2(struct snd_pcm_substream *VAR_1)
{
 struct cmipci *VAR_2 = FUNC_1(VAR_1);
 return FUNC_0(VAR_2, &VAR_2->channel[VAR_0], VAR_1);
}
