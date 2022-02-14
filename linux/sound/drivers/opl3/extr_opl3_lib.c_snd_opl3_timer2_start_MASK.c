
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_timer {unsigned int sticks; } ;
struct snd_opl3 {unsigned char timer_enable; int timer_lock; int (* command ) (struct snd_opl3*,int,unsigned char) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 struct snd_opl3* FUNC_0 (struct snd_timer*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct snd_opl3*,int,int) ;
 int FUNC_4 (struct snd_opl3*,int,unsigned char) ;

__attribute__((used)) static int FUNC_5(struct snd_timer * VAR_5)
{
 unsigned long VAR_6;
 unsigned char VAR_7;
 unsigned int VAR_8;
 struct snd_opl3 *VAR_9;

 VAR_9 = FUNC_0(VAR_5);
 FUNC_1(&VAR_9->timer_lock, VAR_6);
 VAR_8 = VAR_5->sticks;
 VAR_7 = (VAR_9->timer_enable | VAR_4) & ~VAR_3;
 VAR_9->timer_enable = VAR_7;
 VAR_9->command(VAR_9, VAR_0 | VAR_1, 256 - VAR_8);
 VAR_9->command(VAR_9, VAR_0 | VAR_2, VAR_7);
 FUNC_2(&VAR_9->timer_lock, VAR_6);
 return 0;
}
