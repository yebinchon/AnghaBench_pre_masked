
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uniperif {scalar_t__ clk_adj; int irq_lock; struct snd_pcm_substream* substream; } ;
struct TYPE_2__ {struct uniperif* uni; } ;
struct sti_uniperiph_data {TYPE_1__ dai_data; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {int runtime; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct uniperif*) ;
 int FUNC_1 (int ,int ,int ,int ,struct uniperif*,int ,int) ;
 struct sti_uniperiph_data* FUNC_2 (struct snd_soc_dai*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_4,
         struct snd_soc_dai *VAR_5)
{
 struct sti_uniperiph_data *VAR_6 = FUNC_2(VAR_5);
 struct uniperif *VAR_7 = VAR_6->dai_data.uni;
 unsigned long VAR_8;
 int VAR_9;

 FUNC_3(&VAR_7->irq_lock, VAR_8);
 VAR_7->substream = VAR_4;
 FUNC_4(&VAR_7->irq_lock, VAR_8);

 VAR_7->clk_adj = 0;

 if (!FUNC_0(VAR_7))
  return 0;


 VAR_9 = FUNC_1(VAR_4->runtime, 0,
      VAR_0,
      VAR_2,
      VAR_7, VAR_0,
      -1);
 if (VAR_9 < 0)
  return VAR_9;

 return FUNC_1(VAR_4->runtime, 0,
       VAR_1,
       VAR_3,
       VAR_7, VAR_1,
       -1);
}
