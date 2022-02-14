
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_handler {int stopped; scalar_t__ current_process; int mutex; int event_cond; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__,int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

void
FUNC_6(struct file_handler *VAR_1) {
    FUNC_4(VAR_1->mutex);
    VAR_1->stopped = 1;
    FUNC_3(VAR_1->event_cond);
    if (VAR_1->current_process != VAR_0) {
        if (!FUNC_2(VAR_1->current_process)) {
            FUNC_0("Could not terminate install process");
        }
        FUNC_1(VAR_1->current_process, ((void*)0));
        VAR_1->current_process = VAR_0;
    }
    FUNC_5(VAR_1->mutex);
}
