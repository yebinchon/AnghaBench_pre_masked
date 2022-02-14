
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct python_obs_timer {scalar_t__ last_ts; scalar_t__ interval; struct python_obs_timer* next; } ;
struct TYPE_2__ {scalar_t__ removed; } ;
struct python_obs_callback {TYPE_1__ base; } ;
struct obs_python_script {struct obs_python_script* next_tick; int tick; } ;
typedef int PyObject ;


 int * FUNC_0 (int ,int *) ;
 int * FUNC_1 (char*,float) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (void*) ;
 struct obs_python_script* VAR_0 ;
 struct obs_python_script* VAR_1 ;
 struct python_obs_timer* VAR_2 ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 () ;
 struct python_obs_callback* FUNC_9 (struct python_obs_timer*) ;
 int FUNC_10 (struct python_obs_timer*) ;
 int VAR_3 ;
 int FUNC_11 (TYPE_1__*) ;
 int VAR_4 ;
 int FUNC_12 () ;

__attribute__((used)) static void FUNC_13(void *VAR_5, float VAR_6)
{
 struct obs_python_script *VAR_7;
 bool VAR_8;
 uint64_t VAR_9 = FUNC_5();

 FUNC_6(&VAR_3);
 VAR_8 = !!VAR_1;
 FUNC_7(&VAR_3);




 if (VAR_8) {
  FUNC_4();

  PyObject *VAR_10 = FUNC_1("(f)", VAR_6);

  FUNC_6(&VAR_3);
  VAR_7 = VAR_1;
  while (VAR_7) {
   VAR_0 = VAR_7;

   PyObject *VAR_11 =
    FUNC_0(VAR_7->tick, VAR_10);
   FUNC_2(VAR_11);
   FUNC_8();

   VAR_7 = VAR_7->next_tick;
  }

  VAR_0 = ((void*)0);

  FUNC_7(&VAR_3);

  FUNC_2(VAR_10);

  FUNC_12();
 }




 FUNC_6(&VAR_4);
 struct python_obs_timer *VAR_12 = VAR_2;
 while (VAR_12) {
  struct python_obs_timer *VAR_13 = VAR_12->next;
  struct python_obs_callback *VAR_14 = FUNC_9(VAR_12);

  if (VAR_14->base.removed) {
   FUNC_10(VAR_12);
  } else {
   uint64_t VAR_15 = VAR_9 - VAR_12->last_ts;

   if (VAR_15 >= VAR_12->interval) {
    FUNC_4();
    FUNC_11(&VAR_14->base);
    FUNC_12();

    VAR_12->last_ts += VAR_12->interval;
   }
  }

  VAR_12 = VAR_13;
 }
 FUNC_7(&VAR_4);

 FUNC_3(VAR_5);
}
