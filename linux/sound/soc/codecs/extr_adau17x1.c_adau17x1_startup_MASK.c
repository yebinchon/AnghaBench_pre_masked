
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int component; } ;
struct snd_pcm_substream {int dummy; } ;
struct adau {scalar_t__ sigmadsp; } ;


 int FUNC_0 (scalar_t__,struct snd_pcm_substream*) ;
 struct adau* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_0,
 struct snd_soc_dai *VAR_1)
{
 struct adau *VAR_2 = FUNC_1(VAR_1->component);

 if (VAR_2->sigmadsp)
  return FUNC_0(VAR_2->sigmadsp, VAR_0);

 return 0;
}
