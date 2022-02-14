
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_timer {unsigned int sticks; } ;
struct TYPE_2__ {int timer_enabled; } ;
struct snd_gus_card {int reg_lock; TYPE_1__ gf1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_gus_card*,int,unsigned char) ;
 int FUNC_1 (struct snd_gus_card*,int ,unsigned char) ;
 struct snd_gus_card* FUNC_2 (struct snd_timer*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct snd_timer * VAR_2)
{
 unsigned long VAR_3;
 unsigned char VAR_4;
 unsigned int VAR_5;
 struct snd_gus_card *VAR_6;

 VAR_6 = FUNC_2(VAR_2);
 FUNC_3(&VAR_6->reg_lock, VAR_3);
 VAR_5 = VAR_2->sticks;
 VAR_4 = (VAR_6->gf1.timer_enabled |= 8);
 FUNC_1(VAR_6, VAR_0, 256 - VAR_5);
 FUNC_1(VAR_6, VAR_1, VAR_4);
 FUNC_0(VAR_6, 0x04, VAR_4 >> 2);
 FUNC_4(&VAR_6->reg_lock, VAR_3);
 return 0;
}
