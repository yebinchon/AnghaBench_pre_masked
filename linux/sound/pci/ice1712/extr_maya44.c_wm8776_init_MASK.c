
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_wm8776 {unsigned int addr; int switch_bits; } ;
struct snd_ice1712 {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_ice1712*,struct snd_wm8776*,unsigned char,unsigned short) ;

__attribute__((used)) static void FUNC_1(struct snd_ice1712 *VAR_1,
   struct snd_wm8776 *VAR_2, unsigned int VAR_3)
{
 static const unsigned short VAR_4[] = {
  0x02, 0x100,
  0x05, 0x100,
  0x06, 0x000,
  0x07, 0x091,

  0x08, 0x000,
  0x09, 0x000,
  0x0a, 0x022,
  0x0b, 0x022,

  0x0c, 0x042,
  0x0d, 0x000,
  0x0e, 0x100,

  0x0f, 0x100,


  0x11, 0x000,


  0x15, 0x000,
  0x16, 0x001,
  0xff, 0xff
 };

 const unsigned short *VAR_5;
 unsigned char VAR_6;
 unsigned short VAR_7;

 VAR_2->addr = VAR_3;

 VAR_2->switch_bits = (1 << VAR_0);

 VAR_5 = VAR_4;
 while (*VAR_5 != 0xff) {
  VAR_6 = *VAR_5++;
  VAR_7 = *VAR_5++;
  FUNC_0(VAR_1, VAR_2, VAR_6, VAR_7);
 }
}
