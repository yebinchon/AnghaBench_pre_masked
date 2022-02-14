
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct max98357a_priv {int sdmode; int sdmode_delay; } ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 struct max98357a_priv* FUNC_2 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_0,
  int VAR_1, struct snd_soc_dai *VAR_2)
{
 struct max98357a_priv *VAR_3 = FUNC_2(VAR_2);

 if (!VAR_3->sdmode)
  return 0;

 switch (VAR_1) {
 case 130:
 case 131:
 case 132:
  FUNC_1(VAR_3->sdmode_delay);
  FUNC_0(VAR_3->sdmode, 1);
  break;
 case 129:
 case 128:
 case 133:
  FUNC_0(VAR_3->sdmode, 0);
  break;
 }

 return 0;
}
