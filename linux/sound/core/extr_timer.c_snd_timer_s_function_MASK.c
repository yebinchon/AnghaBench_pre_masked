
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct snd_timer_system_private {long correction; scalar_t__ last_jiffies; scalar_t__ last_expires; struct snd_timer* snd_timer; } ;
struct snd_timer {int dummy; } ;


 struct snd_timer_system_private* FUNC_0 (int ,struct timer_list*,int ) ;
 unsigned long VAR_0 ;
 struct snd_timer_system_private* VAR_1 ;
 int FUNC_1 (struct snd_timer*,long) ;
 scalar_t__ FUNC_2 (unsigned long,scalar_t__) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_3(struct timer_list *VAR_3)
{
 struct snd_timer_system_private *VAR_4 = FUNC_0(VAR_4, VAR_3,
        VAR_2);
 struct snd_timer *VAR_5 = VAR_4->snd_timer;
 unsigned long VAR_6 = VAR_0;
 if (FUNC_2(VAR_6, VAR_4->last_expires))
  VAR_4->correction += (long)VAR_6 - (long)VAR_4->last_expires;
 FUNC_1(VAR_5, (long)VAR_6 - (long)VAR_4->last_jiffies);
}
