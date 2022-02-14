
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int const direction; unsigned int const write_mask; } ;
struct snd_ice1712 {TYPE_1__ gpio; } ;


 unsigned int const FUNC_0 (struct snd_ice1712*) ;
 int FUNC_1 (struct snd_ice1712*,unsigned int const) ;
 int FUNC_2 (struct snd_ice1712*,unsigned int const) ;
 int FUNC_3 (struct snd_ice1712*,unsigned int) ;
 int FUNC_4 (struct snd_ice1712*) ;
 int FUNC_5 (struct snd_ice1712*) ;
 int FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct snd_ice1712 *VAR_0,
     unsigned int VAR_1, unsigned int VAR_2)
{
 unsigned int VAR_3;
 unsigned int VAR_4;
 int VAR_5;
 const unsigned int VAR_6 = 0x010000;
 const unsigned int VAR_7 = 0x020000;
 const unsigned int VAR_8 = 0x040000;
 const unsigned int VAR_9 = (VAR_6 | VAR_7 | VAR_8);

 FUNC_5(VAR_0);

 VAR_3 = ((VAR_1 & 0x7f) << 9) | (VAR_2 & 0x1ff);
 FUNC_1(VAR_0, VAR_0->gpio.direction | VAR_9);
 FUNC_2(VAR_0, VAR_0->gpio.write_mask & ~VAR_9);
 VAR_4 = FUNC_0(VAR_0) & ~VAR_9;

 FUNC_3(VAR_0, VAR_4);
 for (VAR_5 = 0; VAR_5 < 16; VAR_5++) {
  FUNC_6(1);
  VAR_4 &= ~VAR_7;
  VAR_3 = (VAR_3 << 1);
  if (VAR_3 & 0x10000)
   VAR_4 |= VAR_6;
  else
   VAR_4 &= ~VAR_6;

  FUNC_3(VAR_0, VAR_4);

  FUNC_6(1);
  VAR_4 |= VAR_7;
  FUNC_3(VAR_0, VAR_4);
 }

 FUNC_6(1);
 VAR_4 |= VAR_8;
 FUNC_3(VAR_0, VAR_4);

 FUNC_6(1);
 VAR_4 |= (VAR_6 | VAR_7);
 FUNC_3(VAR_0, VAR_4);

 FUNC_4(VAR_0);
}
