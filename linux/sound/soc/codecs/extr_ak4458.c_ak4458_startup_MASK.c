
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {int runtime; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int *) ;

__attribute__((used)) static int FUNC_1(struct snd_pcm_substream *VAR_2,
     struct snd_soc_dai *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2->runtime, 0,
      VAR_0,
      &VAR_1);

 return VAR_4;
}
