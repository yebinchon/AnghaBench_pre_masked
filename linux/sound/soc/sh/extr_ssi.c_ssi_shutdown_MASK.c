
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssi_priv {scalar_t__ inuse; } ;
struct snd_soc_dai {size_t id; } ;
struct snd_pcm_substream {int dummy; } ;


 struct ssi_priv* VAR_0 ;

__attribute__((used)) static void FUNC_0(struct snd_pcm_substream *VAR_1,
    struct snd_soc_dai *VAR_2)
{
 struct ssi_priv *VAR_3 = &VAR_0[VAR_2->id];

 VAR_3->inuse = 0;
}
