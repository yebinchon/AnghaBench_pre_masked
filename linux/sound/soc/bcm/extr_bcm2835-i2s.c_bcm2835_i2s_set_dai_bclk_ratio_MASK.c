
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct bcm2835_i2s_dev {int tdm_slots; int rx_mask; int tx_mask; unsigned int slot_width; unsigned int frame_length; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 struct bcm2835_i2s_dev* FUNC_0 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_dai *VAR_2,
          unsigned int VAR_3)
{
 struct bcm2835_i2s_dev *VAR_4 = FUNC_0(VAR_2);

 if (!VAR_3) {
  VAR_4->tdm_slots = 0;
  return 0;
 }

 if (VAR_3 > VAR_0)
  return -VAR_1;

 VAR_4->tdm_slots = 2;
 VAR_4->rx_mask = 0x03;
 VAR_4->tx_mask = 0x03;
 VAR_4->slot_width = VAR_3 / 2;
 VAR_4->frame_length = VAR_3;

 return 0;
}
