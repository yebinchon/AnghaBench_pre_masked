
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_timer_system_private {int tlist; } ;
struct snd_timer {scalar_t__ private_data; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct snd_timer *VAR_0)
{
 struct snd_timer_system_private *VAR_1;

 VAR_1 = (struct snd_timer_system_private *)VAR_0->private_data;
 FUNC_0(&VAR_1->tlist);
 return 0;
}
