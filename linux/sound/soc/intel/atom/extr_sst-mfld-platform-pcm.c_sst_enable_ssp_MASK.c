
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int active; } ;
struct snd_pcm_substream {int dummy; } ;


 int FUNC_0 (struct snd_soc_dai*) ;
 int FUNC_1 (struct snd_soc_dai*,int) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_0,
   struct snd_soc_dai *VAR_1)
{
 int VAR_2 = 0;

 if (!VAR_1->active) {
  VAR_2 = FUNC_1(VAR_1, 1);
  FUNC_0(VAR_1);
 }
 return VAR_2;
}
