
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int component; } ;
struct snd_pcm_substream {int dummy; } ;
struct adau1701 {int sigmadsp; } ;


 int FUNC_0 (int ,struct snd_pcm_substream*) ;
 struct adau1701* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_0,
 struct snd_soc_dai *VAR_1)
{
 struct adau1701 *VAR_2 = FUNC_1(VAR_1->component);

 return FUNC_0(VAR_2->sigmadsp, VAR_0);
}
