
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {int name; } ;
struct TYPE_15__ {void* stop_code; TYPE_1__ context; int end_data_capture_thread; int end_data_capture_thread_active; scalar_t__ video; int data_active; int stopping_event; int delay_active; int delay_restart_refs; int delay_capturing; } ;
typedef TYPE_2__ obs_output_t ;


 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *,int *,int (*) (TYPE_2__*),TYPE_2__*) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_14(obs_output_t *VAR_2,
       bool VAR_3)
{
 int VAR_4;

 if (!FUNC_7(VAR_2, "obs_output_end_data_capture"))
  return;

 if (!FUNC_0(VAR_2) || !FUNC_2(VAR_2)) {
  if (VAR_3) {
   FUNC_13(VAR_2);
   VAR_2->stop_code = VAR_1;
   FUNC_10(VAR_2->stopping_event);
  }
  return;
 }

 if (FUNC_4(VAR_2)) {
  FUNC_9(&VAR_2->delay_capturing, 0);

  if (!FUNC_8(&VAR_2->delay_restart_refs)) {
   FUNC_9(&VAR_2->delay_active, 0);
  } else {
   FUNC_10(VAR_2->stopping_event);
   return;
  }
 }

 FUNC_9(&VAR_2->data_active, 0);

 if (VAR_2->video)
  FUNC_6(VAR_2);

 if (FUNC_3(VAR_2))
  FUNC_12(VAR_2->end_data_capture_thread, ((void*)0));

 FUNC_9(&VAR_2->end_data_capture_thread_active, 1);
 VAR_4 = FUNC_11(&VAR_2->end_data_capture_thread, ((void*)0),
        FUNC_5, VAR_2);
 if (VAR_4 != 0) {
  FUNC_1(VAR_0,
       "Failed to create end_data_capture_thread "
       "for output '%s'!",
       VAR_2->context.name);
  FUNC_5(VAR_2);
 }

 if (VAR_3) {
  FUNC_13(VAR_2);
  VAR_2->stop_code = VAR_1;
 }
}
