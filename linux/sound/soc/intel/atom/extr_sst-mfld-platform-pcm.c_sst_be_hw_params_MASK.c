
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int active; int name; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;


 int FUNC_0 (struct snd_soc_dai*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct snd_pcm_substream *VAR_0,
    struct snd_pcm_hw_params *VAR_1,
    struct snd_soc_dai *VAR_2)
{
 int VAR_3 = 0;

 if (VAR_2->active == 1)
  VAR_3 = FUNC_0(VAR_2, VAR_2->name, 1);
 return VAR_3;
}
