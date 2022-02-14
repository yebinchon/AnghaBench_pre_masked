
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_timer_system_private {int last_expires; scalar_t__ correction; int tlist; } ;
struct snd_timer {int sticks; scalar_t__ private_data; } ;


 int FUNC_0 (int *) ;
 unsigned long VAR_0 ;
 scalar_t__ FUNC_1 (unsigned long,int) ;

__attribute__((used)) static int FUNC_2(struct snd_timer * VAR_1)
{
 struct snd_timer_system_private *VAR_2;
 unsigned long VAR_3;

 VAR_2 = (struct snd_timer_system_private *) VAR_1->private_data;
 FUNC_0(&VAR_2->tlist);
 VAR_3 = VAR_0;
 if (FUNC_1(VAR_3, VAR_2->last_expires))
  VAR_1->sticks = VAR_2->last_expires - VAR_3;
 else
  VAR_1->sticks = 1;
 VAR_2->correction = 0;
 return 0;
}
