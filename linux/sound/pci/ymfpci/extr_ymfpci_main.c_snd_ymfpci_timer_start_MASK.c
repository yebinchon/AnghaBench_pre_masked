
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ymfpci {int timer_ticks; int reg_lock; } ;
struct snd_timer {int sticks; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct snd_ymfpci* FUNC_0 (struct snd_timer*) ;
 int FUNC_1 (struct snd_ymfpci*,int ,int) ;
 int FUNC_2 (struct snd_ymfpci*,int ,unsigned int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct snd_timer *VAR_2)
{
 struct snd_ymfpci *VAR_3;
 unsigned long VAR_4;
 unsigned int VAR_5;

 VAR_3 = FUNC_0(VAR_2);
 FUNC_3(&VAR_3->reg_lock, VAR_4);
 if (VAR_2->sticks > 1) {
  VAR_3->timer_ticks = VAR_2->sticks;
  VAR_5 = VAR_2->sticks - 1;
 } else {




  VAR_3->timer_ticks = 2;
  VAR_5 = 2 - 1;
 }
 FUNC_2(VAR_3, VAR_0, VAR_5);
 FUNC_1(VAR_3, VAR_1, 0x03);
 FUNC_4(&VAR_3->reg_lock, VAR_4);
 return 0;
}
