
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ task_handle_t ;
typedef int task_callback_t ;


 int FUNC_0 (int *,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int ,int) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int * VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 int * FUNC_3 (int,int ) ;

task_handle_t FUNC_4(task_callback_t VAR_8) {
  int VAR_9 = VAR_4;

    while(VAR_9--) if (!VAR_5[VAR_9]) {
    FUNC_0(FUNC_3( VAR_9, VAR_0 ), 0, "Task initialisation failed");
  }

  if ( (VAR_6 & (VAR_1 - 1)) == 0 ) {

    VAR_7 =(task_callback_t *) FUNC_2(VAR_7,
                        sizeof(task_callback_t)*(VAR_6+VAR_1));
    FUNC_0(VAR_7, 0 , "Malloc failure in task_get_id");
    FUNC_1 (VAR_7+VAR_6, 0, sizeof(task_callback_t)*VAR_1);
  }

  VAR_7[VAR_6++] = VAR_8;
  return VAR_2 + ((VAR_6-1) << VAR_3);
}
