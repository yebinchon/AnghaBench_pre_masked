
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_card {int dummy; } ;
struct asoc_simple_priv {int mic_jack; int hp_jack; } ;


 int FUNC_0 (struct snd_soc_card*,int *,int *) ;
 int FUNC_1 (struct snd_soc_card*,int *,int *) ;
 struct asoc_simple_priv* FUNC_2 (struct snd_soc_card*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_card *VAR_0)
{
 struct asoc_simple_priv *VAR_1 = FUNC_2(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0, &VAR_1->hp_jack, ((void*)0));
 if (VAR_2 < 0)
  return VAR_2;

 VAR_2 = FUNC_1(VAR_0, &VAR_1->mic_jack, ((void*)0));
 if (VAR_2 < 0)
  return VAR_2;

 return 0;
}
