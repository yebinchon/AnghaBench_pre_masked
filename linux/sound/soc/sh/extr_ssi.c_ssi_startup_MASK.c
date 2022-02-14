
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssi_priv {int inuse; } ;
struct snd_soc_dai {size_t id; } ;
struct snd_pcm_substream {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 struct ssi_priv* VAR_1 ;

__attribute__((used)) static int FUNC_1(struct snd_pcm_substream *VAR_2,
         struct snd_soc_dai *VAR_3)
{
 struct ssi_priv *VAR_4 = &VAR_1[VAR_3->id];
 if (VAR_4->inuse) {
  FUNC_0("ssi: already in use!\n");
  return -VAR_0;
 } else
  VAR_4->inuse = 1;
 return 0;
}
