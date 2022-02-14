
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ice1712 {int dummy; } ;
struct snd_akm4xxx {struct snd_ice1712** private_data; scalar_t__* private_value; } ;
struct snd_ak4xxx_private {unsigned int add_flags; unsigned int mask_flags; unsigned int cs_mask; unsigned int cs_addr; int caddr; unsigned int clk_mask; unsigned int data_mask; unsigned int cs_none; scalar_t__ cif; } ;


 scalar_t__ FUNC_0 (int) ;
 unsigned int FUNC_1 (struct snd_ice1712*) ;
 int FUNC_2 (struct snd_ice1712*,unsigned int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct snd_akm4xxx *VAR_0, int VAR_1,
          unsigned char VAR_2, unsigned char VAR_3)
{
 unsigned int VAR_4;
 int VAR_5;
 unsigned int VAR_6;
 struct snd_ak4xxx_private *VAR_7 = (void *)VAR_0->private_value[0];
 struct snd_ice1712 *VAR_8 = VAR_0->private_data[0];

 if (FUNC_0(VAR_1 < 0 || VAR_1 >= 4))
  return;

 VAR_4 = FUNC_1(VAR_8);
 VAR_4 |= VAR_7->add_flags;
 VAR_4 &= ~VAR_7->mask_flags;
 if (VAR_7->cs_mask == VAR_7->cs_addr) {
  if (VAR_7->cif) {
   VAR_4 |= VAR_7->cs_mask;
  } else {
   VAR_4 &= ~VAR_7->cs_mask;
   FUNC_2(VAR_8, VAR_4);
   FUNC_3(1);
  }
 } else {

  VAR_4 &= ~VAR_7->cs_mask;
  VAR_4 |= VAR_7->cs_addr;
  FUNC_2(VAR_8, VAR_4);
  FUNC_3(1);
 }


 VAR_6 = (VAR_7->caddr << 6) | 0x20 | (VAR_2 & 0x1f);
 VAR_6 = (VAR_6 << 8) | VAR_3;
 for (VAR_5 = 15; VAR_5 >= 0; VAR_5--) {

  VAR_4 &= ~VAR_7->clk_mask;
  FUNC_2(VAR_8, VAR_4);
  FUNC_3(1);

  if (VAR_6 & (1 << VAR_5))
   VAR_4 |= VAR_7->data_mask;
  else
   VAR_4 &= ~VAR_7->data_mask;
  FUNC_2(VAR_8, VAR_4);
  FUNC_3(1);

  VAR_4 |= VAR_7->clk_mask;
  FUNC_2(VAR_8, VAR_4);
  FUNC_3(1);
 }

 if (VAR_7->cs_mask == VAR_7->cs_addr) {
  if (VAR_7->cif) {

   VAR_4 &= ~VAR_7->cs_mask;
   FUNC_2(VAR_8, VAR_4);
   FUNC_3(1);
  }
  VAR_4 |= VAR_7->cs_mask;
 } else {
  VAR_4 &= ~VAR_7->cs_mask;
  VAR_4 |= VAR_7->cs_none;
 }
 FUNC_2(VAR_8, VAR_4);
 FUNC_3(1);
}
