
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pdacf {int * pcm_substream; } ;
struct snd_pcm_substream {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_pdacf*,int ) ;
 struct snd_pdacf* FUNC_1 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_1)
{
 struct snd_pdacf *VAR_2 = FUNC_1(VAR_1);

 if (!VAR_2)
  return -VAR_0;
 FUNC_0(VAR_2, 0);
 VAR_2->pcm_substream = ((void*)0);
 return 0;
}
