
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_timer_user {int disconnected; int qchange_sleep; } ;
struct snd_timer_instance {struct snd_timer_user* callback_data; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct snd_timer_instance *VAR_0)
{
 struct snd_timer_user *VAR_1 = VAR_0->callback_data;

 VAR_1->disconnected = 1;
 FUNC_0(&VAR_1->qchange_sleep);
}
