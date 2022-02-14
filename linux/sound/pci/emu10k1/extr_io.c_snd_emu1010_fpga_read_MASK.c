
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_emu10k1 {int emu_lock; scalar_t__ port; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int) ;

int FUNC_5(struct snd_emu10k1 * VAR_1, u32 VAR_2, u32 *VAR_3)
{
 unsigned long VAR_4;
 if (VAR_2 > 0x3f)
  return 1;
 VAR_2 += 0x40;
 FUNC_2(&VAR_1->emu_lock, VAR_4);
 FUNC_1(VAR_2, VAR_1->port + VAR_0);
 FUNC_4(10);
 FUNC_1(VAR_2 | 0x80, VAR_1->port + VAR_0);
 FUNC_4(10);
 *VAR_3 = ((FUNC_0(VAR_1->port + VAR_0) >> 8) & 0x7f);
 FUNC_3(&VAR_1->emu_lock, VAR_4);

 return 0;
}
