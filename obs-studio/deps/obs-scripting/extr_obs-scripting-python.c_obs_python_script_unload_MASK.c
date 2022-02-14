
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct script_callback {struct script_callback* next; } ;
struct obs_python_script {struct script_callback* first_callback; int * get_properties; int * update; int * save; int * tick; struct obs_python_script* next_tick; struct obs_python_script** p_prev_next_tick; } ;
struct TYPE_3__ {int loaded; } ;
typedef TYPE_1__ obs_script_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int FUNC_4 (struct script_callback*) ;
 int VAR_1 ;
 int FUNC_5 (struct obs_python_script*) ;
 int FUNC_6 () ;

void FUNC_7(obs_script_t *VAR_2)
{
 struct obs_python_script *VAR_3 = (struct obs_python_script *)VAR_2;

 if (!VAR_2->loaded || !VAR_0)
  return;




 if (VAR_3->p_prev_next_tick) {
  FUNC_2(&VAR_1);

  struct obs_python_script *VAR_4 = VAR_3->next_tick;
  if (VAR_4)
   VAR_4->p_prev_next_tick = VAR_3->p_prev_next_tick;
  *VAR_3->p_prev_next_tick = VAR_4;

  FUNC_3(&VAR_1);

  VAR_3->p_prev_next_tick = ((void*)0);
  VAR_3->next_tick = ((void*)0);
 }

 FUNC_1();

 FUNC_0(VAR_3->tick);
 FUNC_0(VAR_3->save);
 FUNC_0(VAR_3->update);
 FUNC_0(VAR_3->get_properties);
 VAR_3->tick = ((void*)0);
 VAR_3->save = ((void*)0);
 VAR_3->update = ((void*)0);
 VAR_3->get_properties = ((void*)0);




 struct script_callback *VAR_5 = VAR_3->first_callback;
 while (VAR_5) {
  struct script_callback *VAR_6 = VAR_5->next;
  FUNC_4(VAR_5);
  VAR_5 = VAR_6;
 }




 FUNC_5(VAR_3);
 FUNC_6();

 VAR_2->loaded = 0;
}
