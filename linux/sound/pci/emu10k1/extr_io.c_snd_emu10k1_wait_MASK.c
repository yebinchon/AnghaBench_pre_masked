
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_emu10k1 {scalar_t__ port; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;

void FUNC_1(struct snd_emu10k1 *VAR_1, unsigned int VAR_2)
{
 volatile unsigned VAR_3;
 unsigned int VAR_4 = 0, VAR_5;

 VAR_5 = FUNC_0(VAR_1->port + VAR_0) >> 6;
 while (VAR_2-- > 0) {
  VAR_3 = 0;
  while (VAR_3++ < 16384) {
   VAR_4 = FUNC_0(VAR_1->port + VAR_0) >> 6;
   if (VAR_4 != VAR_5)
    break;
  }
  if (VAR_3 > 16384)
   break;
  VAR_5 = VAR_4;
 }
}
