
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {scalar_t__ stream; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_soc_dai*,struct snd_pcm_substream*,int *) ;

__attribute__((used)) static int FUNC_1(struct snd_pcm_substream *VAR_3,
       struct snd_soc_dai *VAR_4)
{
 if (VAR_3->stream == VAR_1)
  return -VAR_0;
 FUNC_0(VAR_4, VAR_3,
     &VAR_2);

 return 0;
}
