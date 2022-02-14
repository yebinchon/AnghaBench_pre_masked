
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_timer {int dummy; } ;
struct snd_opl3 {unsigned char timer_enable; int timer_lock; int (* command ) (struct snd_opl3*,int,unsigned char) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 struct snd_opl3* FUNC_0 (struct snd_timer*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct snd_opl3*,int,unsigned char) ;

__attribute__((used)) static int FUNC_4(struct snd_timer * VAR_4)
{
 unsigned long VAR_5;
 unsigned char VAR_6;
 struct snd_opl3 *VAR_7;

 VAR_7 = FUNC_0(VAR_4);
 FUNC_1(&VAR_7->timer_lock, VAR_5);
 VAR_6 = (VAR_7->timer_enable | VAR_2) & ~VAR_3;
 VAR_7->timer_enable = VAR_6;
 VAR_7->command(VAR_7, VAR_0 | VAR_1, VAR_6);
 FUNC_2(&VAR_7->timer_lock, VAR_5);
 return 0;
}
