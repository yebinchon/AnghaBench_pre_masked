
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct mxs_saif {scalar_t__ base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,scalar_t__) ;
 struct mxs_saif* FUNC_1 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_3,
      struct snd_soc_dai *VAR_4)
{
 struct mxs_saif *VAR_5 = FUNC_1(VAR_4);


 FUNC_0(VAR_0,
  VAR_5->base + VAR_2 + VAR_1);

 return 0;
}
