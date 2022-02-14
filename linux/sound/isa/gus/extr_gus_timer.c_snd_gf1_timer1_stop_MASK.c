
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_timer {int dummy; } ;
struct TYPE_2__ {int timer_enabled; } ;
struct snd_gus_card {int reg_lock; TYPE_1__ gf1; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_gus_card*,int ,unsigned char) ;
 struct snd_gus_card* FUNC_1 (struct snd_timer*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct snd_timer * VAR_1)
{
 unsigned long VAR_2;
 unsigned char VAR_3;
 struct snd_gus_card *VAR_4;

 VAR_4 = FUNC_1(VAR_1);
 FUNC_2(&VAR_4->reg_lock, VAR_2);
 VAR_3 = (VAR_4->gf1.timer_enabled &= ~4);
 FUNC_0(VAR_4, VAR_0, VAR_3);
 FUNC_3(&VAR_4->reg_lock, VAR_2);
 return 0;
}
