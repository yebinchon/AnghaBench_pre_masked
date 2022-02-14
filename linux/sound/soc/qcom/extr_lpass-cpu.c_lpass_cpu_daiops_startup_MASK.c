
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dai {TYPE_1__* driver; int dev; } ;
struct snd_pcm_substream {int dummy; } ;
struct lpass_data {int * mi2s_osr_clk; int * mi2s_bit_clk; } ;
struct TYPE_2__ {size_t id; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;
 struct lpass_data* FUNC_3 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_0,
  struct snd_soc_dai *VAR_1)
{
 struct lpass_data *VAR_2 = FUNC_3(VAR_1);
 int VAR_3;

 VAR_3 = FUNC_1(VAR_2->mi2s_osr_clk[VAR_1->driver->id]);
 if (VAR_3) {
  FUNC_2(VAR_1->dev, "error in enabling mi2s osr clk: %d\n", VAR_3);
  return VAR_3;
 }

 VAR_3 = FUNC_1(VAR_2->mi2s_bit_clk[VAR_1->driver->id]);
 if (VAR_3) {
  FUNC_2(VAR_1->dev, "error in enabling mi2s bit clk: %d\n", VAR_3);
  FUNC_0(VAR_2->mi2s_osr_clk[VAR_1->driver->id]);
  return VAR_3;
 }

 return 0;
}
