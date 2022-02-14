
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_timer {int dummy; } ;
struct snd_emu10k1 {int reg_lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_emu10k1*,int ) ;
 struct snd_emu10k1* FUNC_1 (struct snd_timer*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct snd_timer *VAR_1)
{
 struct snd_emu10k1 *VAR_2;
 unsigned long VAR_3;

 VAR_2 = FUNC_1(VAR_1);
 FUNC_2(&VAR_2->reg_lock, VAR_3);
 FUNC_0(VAR_2, VAR_0);
 FUNC_3(&VAR_2->reg_lock, VAR_3);
 return 0;
}
