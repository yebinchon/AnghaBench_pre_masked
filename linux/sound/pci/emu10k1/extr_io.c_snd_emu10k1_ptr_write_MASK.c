
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_emu10k1 {int emu_lock; scalar_t__ port; scalar_t__ audigy; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned int,scalar_t__) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

void FUNC_5(struct snd_emu10k1 *VAR_5, unsigned int VAR_6, unsigned int VAR_7, unsigned int VAR_8)
{
 unsigned int VAR_9;
 unsigned long VAR_10;
 unsigned int VAR_11;

 if (FUNC_2(!VAR_5))
  return;
 VAR_11 = VAR_5->audigy ? VAR_0 : VAR_3;
 VAR_9 = ((VAR_6 << 16) & VAR_11) | (VAR_7 & VAR_4);

 if (VAR_6 & 0xff000000) {
  unsigned char VAR_12, VAR_13;

  VAR_12 = (VAR_6 >> 24) & 0x3f;
  VAR_13 = (VAR_6 >> 16) & 0x1f;
  VAR_11 = ((1 << VAR_12) - 1) << VAR_13;
  VAR_8 = (VAR_8 << VAR_13) & VAR_11;

  FUNC_3(&VAR_5->emu_lock, VAR_10);
  FUNC_1(VAR_9, VAR_5->port + VAR_2);
  VAR_8 |= FUNC_0(VAR_5->port + VAR_1) & ~VAR_11;
  FUNC_1(VAR_8, VAR_5->port + VAR_1);
  FUNC_4(&VAR_5->emu_lock, VAR_10);
 } else {
  FUNC_3(&VAR_5->emu_lock, VAR_10);
  FUNC_1(VAR_9, VAR_5->port + VAR_2);
  FUNC_1(VAR_8, VAR_5->port + VAR_1);
  FUNC_4(&VAR_5->emu_lock, VAR_10);
 }
}
