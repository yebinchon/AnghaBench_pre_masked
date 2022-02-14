
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_timer_instance {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_timer_instance*,int) ;
 int FUNC_1 (struct snd_timer_instance*,int) ;

int FUNC_2(struct snd_timer_instance * VAR_1)
{
 if (VAR_1->flags & VAR_0)
  return FUNC_1(VAR_1, 0);
 else
  return FUNC_0(VAR_1, 0);
}
