
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {struct device* dev; } ;
struct snd_pcm_substream {int dummy; } ;
struct device {int dummy; } ;
struct ak4613_priv {scalar_t__ cnt; int lock; int * iface; } ;


 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct ak4613_priv* FUNC_3 (struct snd_soc_component*) ;

__attribute__((used)) static void FUNC_4(struct snd_pcm_substream *VAR_0,
          struct snd_soc_dai *VAR_1)
{
 struct snd_soc_component *VAR_2 = VAR_1->component;
 struct ak4613_priv *VAR_3 = FUNC_3(VAR_2);
 struct device *VAR_4 = VAR_2->dev;

 FUNC_1(&VAR_3->lock);
 VAR_3->cnt--;
 if (VAR_3->cnt < 0) {
  FUNC_0(VAR_4, "unexpected counter error\n");
  VAR_3->cnt = 0;
 }
 if (!VAR_3->cnt)
  VAR_3->iface = ((void*)0);
 FUNC_2(&VAR_3->lock);
}
