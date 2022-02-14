
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct bcm2835_i2s_dev {int tdm_slots; unsigned int rx_mask; unsigned int tx_mask; int slot_width; int frame_length; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int,int ) ;
 int FUNC_1 (unsigned long) ;
 struct bcm2835_i2s_dev* FUNC_2 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_2,
 unsigned int VAR_3, unsigned int VAR_4,
 int VAR_5, int VAR_6)
{
 struct bcm2835_i2s_dev *VAR_7 = FUNC_2(VAR_2);

 if (VAR_5) {
  if (VAR_5 < 0 || VAR_6 < 0)
   return -VAR_1;


  VAR_4 &= FUNC_0(VAR_5 - 1, 0);
  VAR_3 &= FUNC_0(VAR_5 - 1, 0);





  if (FUNC_1((unsigned long) VAR_4) != 2
      || FUNC_1((unsigned long) VAR_3) != 2)
   return -VAR_1;

  if (VAR_5 * VAR_6 > VAR_0)
   return -VAR_1;
 }

 VAR_7->tdm_slots = VAR_5;

 VAR_7->rx_mask = VAR_4;
 VAR_7->tx_mask = VAR_3;
 VAR_7->slot_width = VAR_6;
 VAR_7->frame_length = VAR_5 * VAR_6;

 return 0;
}
