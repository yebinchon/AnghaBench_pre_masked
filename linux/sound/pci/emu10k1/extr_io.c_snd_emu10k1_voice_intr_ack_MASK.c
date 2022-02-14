
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_emu10k1 {int emu_lock; scalar_t__ port; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (unsigned int,scalar_t__) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(struct snd_emu10k1 *VAR_4, unsigned int VAR_5)
{
 unsigned long VAR_6;

 FUNC_1(&VAR_4->emu_lock, VAR_6);

 if (VAR_5 >= 32) {
  FUNC_0(VAR_0 << 16, VAR_4->port + VAR_3);
  VAR_5 = 1 << (VAR_5 - 32);
 } else {
  FUNC_0(VAR_1 << 16, VAR_4->port + VAR_3);
  VAR_5 = 1 << VAR_5;
 }
 FUNC_0(VAR_5, VAR_4->port + VAR_2);
 FUNC_2(&VAR_4->emu_lock, VAR_6);
}
