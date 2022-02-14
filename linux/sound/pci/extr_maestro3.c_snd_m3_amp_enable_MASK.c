
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct snd_m3 {int iobase; int amp_gpio; int external_amp; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(struct snd_m3 *VAR_5, int VAR_6)
{
 int VAR_7 = VAR_5->iobase;
 u16 VAR_8, VAR_9;

 if (! VAR_5->external_amp)
  return;

 VAR_9 = VAR_6 ? 0 : 1;
 VAR_9 = VAR_9 << VAR_5->amp_gpio;
 VAR_8 = 1 << VAR_5->amp_gpio;

 FUNC_1(~VAR_8, VAR_7 + VAR_2);

 FUNC_1(FUNC_0(VAR_7 + VAR_1) | VAR_8,
      VAR_7 + VAR_1);

 FUNC_1((VAR_4 | VAR_3 | VAR_9),
      VAR_7 + VAR_0);

 FUNC_1(0xffff, VAR_7 + VAR_2);
}
