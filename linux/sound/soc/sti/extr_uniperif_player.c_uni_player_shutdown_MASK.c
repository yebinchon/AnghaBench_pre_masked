
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uniperif {scalar_t__ state; int irq_lock; int * substream; } ;
struct TYPE_2__ {struct uniperif* uni; } ;
struct sti_uniperiph_data {TYPE_1__ dai_data; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct sti_uniperiph_data* FUNC_0 (struct snd_soc_dai*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct uniperif*) ;

__attribute__((used)) static void FUNC_4(struct snd_pcm_substream *VAR_1,
    struct snd_soc_dai *VAR_2)
{
 struct sti_uniperiph_data *VAR_3 = FUNC_0(VAR_2);
 struct uniperif *VAR_4 = VAR_3->dai_data.uni;
 unsigned long VAR_5;

 FUNC_1(&VAR_4->irq_lock, VAR_5);
 if (VAR_4->state != VAR_0)

  FUNC_3(VAR_4);

 VAR_4->substream = ((void*)0);
 FUNC_2(&VAR_4->irq_lock, VAR_5);
}
