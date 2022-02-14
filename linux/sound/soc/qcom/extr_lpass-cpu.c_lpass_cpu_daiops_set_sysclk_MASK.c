
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dai {int dev; TYPE_1__* driver; } ;
struct lpass_data {int * mi2s_osr_clk; } ;
struct TYPE_2__ {size_t id; } ;


 int FUNC_0 (int ,unsigned int) ;
 int FUNC_1 (int ,char*,unsigned int,int) ;
 struct lpass_data* FUNC_2 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_0, int VAR_1,
  unsigned int VAR_2, int VAR_3)
{
 struct lpass_data *VAR_4 = FUNC_2(VAR_0);
 int VAR_5;

 VAR_5 = FUNC_0(VAR_4->mi2s_osr_clk[VAR_0->driver->id], VAR_2);
 if (VAR_5)
  FUNC_1(VAR_0->dev, "error setting mi2s osrclk to %u: %d\n",
   VAR_2, VAR_5);

 return VAR_5;
}
