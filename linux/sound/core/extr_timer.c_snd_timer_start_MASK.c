
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_timer_instance {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_timer_instance*,int,unsigned int) ;
 int FUNC_1 (struct snd_timer_instance*,int) ;

int FUNC_2(struct snd_timer_instance *VAR_2, unsigned int VAR_3)
{
 if (VAR_2 == ((void*)0) || VAR_3 < 1)
  return -VAR_0;
 if (VAR_2->flags & VAR_1)
  return FUNC_1(VAR_2, 1);
 else
  return FUNC_0(VAR_2, 1, VAR_3);
}
