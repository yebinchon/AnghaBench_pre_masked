
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dev; } ;
struct asoc_simple_dai {int slot_width; scalar_t__ slots; int rx_slot_mask; int tx_slot_mask; int clk_direction; scalar_t__ sysclk; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct snd_soc_dai*,int ,scalar_t__,int ) ;
 int FUNC_2 (struct snd_soc_dai*,int ,int ,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_1,
         struct asoc_simple_dai *VAR_2)
{
 int VAR_3;

 if (!VAR_2)
  return 0;

 if (VAR_2->sysclk) {
  VAR_3 = FUNC_1(VAR_1, 0, VAR_2->sysclk,
          VAR_2->clk_direction);
  if (VAR_3 && VAR_3 != -VAR_0) {
   FUNC_0(VAR_1->dev, "simple-card: set_sysclk error\n");
   return VAR_3;
  }
 }

 if (VAR_2->slots) {
  VAR_3 = FUNC_2(VAR_1,
            VAR_2->tx_slot_mask,
            VAR_2->rx_slot_mask,
            VAR_2->slots,
            VAR_2->slot_width);
  if (VAR_3 && VAR_3 != -VAR_0) {
   FUNC_0(VAR_1->dev, "simple-card: set_tdm_slot error\n");
   return VAR_3;
  }
 }

 return 0;
}
