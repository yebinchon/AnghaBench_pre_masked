
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dai {TYPE_1__* driver; } ;
struct snd_pcm_substream {int dummy; } ;
struct lpass_data {int * mi2s_osr_clk; int * mi2s_bit_clk; } ;
struct TYPE_2__ {size_t id; } ;


 int FUNC_0 (int ) ;
 struct lpass_data* FUNC_1 (struct snd_soc_dai*) ;

__attribute__((used)) static void FUNC_2(struct snd_pcm_substream *VAR_0,
  struct snd_soc_dai *VAR_1)
{
 struct lpass_data *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(VAR_2->mi2s_bit_clk[VAR_1->driver->id]);

 FUNC_0(VAR_2->mi2s_osr_clk[VAR_1->driver->id]);
}
