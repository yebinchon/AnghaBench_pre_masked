
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_timer_instance {struct snd_timer_instance* owner; struct snd_timer* timer; int slave_active_head; int slave_list_head; int ack_list; int active_list; int open_list; } ;
struct snd_timer {int module; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct snd_timer_instance*) ;
 struct snd_timer_instance* FUNC_2 (char*,int ) ;
 struct snd_timer_instance* FUNC_3 (int,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static struct snd_timer_instance *FUNC_5(char *VAR_1,
        struct snd_timer *VAR_2)
{
 struct snd_timer_instance *VAR_3;
 VAR_3 = FUNC_3(sizeof(*VAR_3), VAR_0);
 if (VAR_3 == ((void*)0))
  return ((void*)0);
 VAR_3->owner = FUNC_2(VAR_1, VAR_0);
 if (! VAR_3->owner) {
  FUNC_1(VAR_3);
  return ((void*)0);
 }
 FUNC_0(&VAR_3->open_list);
 FUNC_0(&VAR_3->active_list);
 FUNC_0(&VAR_3->ack_list);
 FUNC_0(&VAR_3->slave_list_head);
 FUNC_0(&VAR_3->slave_active_head);

 VAR_3->timer = VAR_2;
 if (VAR_2 && !FUNC_4(VAR_2->module)) {
  FUNC_1(VAR_3->owner);
  FUNC_1(VAR_3);
  return ((void*)0);
 }

 return VAR_3;
}
