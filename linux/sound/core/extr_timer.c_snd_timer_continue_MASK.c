
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_timer_instance {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_timer_instance*,int,int ) ;
 int FUNC_1 (struct snd_timer_instance*,int) ;

int FUNC_2(struct snd_timer_instance *VAR_3)
{

 if (!(VAR_3->flags & VAR_1))
  return -VAR_0;

 if (VAR_3->flags & VAR_2)
  return FUNC_1(VAR_3, 0);
 else
  return FUNC_0(VAR_3, 0, 0);
}
