
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_handler_request {scalar_t__ action; int file; } ;
struct file_handler {int push_target; int mutex; int current_process; int serial; int queue; scalar_t__ stopped; int event_cond; } ;
typedef int process_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int ,...) ;
 int FUNC_1 (char*,int ,...) ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,struct file_handler_request*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct file_handler_request*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ,char*) ;
 int FUNC_11 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_12(void *VAR_2) {
    struct file_handler *VAR_3 = VAR_2;

    for (;;) {
        FUNC_8(VAR_3->mutex);
        VAR_3->current_process = VAR_1;
        while (!VAR_3->stopped && FUNC_3(&VAR_3->queue)) {
            FUNC_5(VAR_3->event_cond, VAR_3->mutex);
        }
        if (VAR_3->stopped) {

            FUNC_9(VAR_3->mutex);
            break;
        }
        struct file_handler_request VAR_4;
        bool VAR_5 = FUNC_4(&VAR_3->queue, &VAR_4);
        FUNC_2(VAR_5);

        process_t VAR_6;
        if (VAR_4.action == VAR_0) {
            FUNC_1("Installing %s...", VAR_4.file);
            VAR_6 = FUNC_7(VAR_3->serial, VAR_4.file);
        } else {
            FUNC_1("Pushing %s...", VAR_4.file);
            VAR_6 = FUNC_11(VAR_3->serial, VAR_4.file,
                                VAR_3->push_target);
        }
        VAR_3->current_process = VAR_6;
        FUNC_9(VAR_3->mutex);

        if (VAR_4.action == VAR_0) {
            if (FUNC_10(VAR_6, "adb install")) {
                FUNC_1("%s successfully installed", VAR_4.file);
            } else {
                FUNC_0("Failed to install %s", VAR_4.file);
            }
        } else {
            if (FUNC_10(VAR_6, "adb push")) {
                FUNC_1("%s successfully pushed to %s", VAR_4.file,
                                                     VAR_3->push_target);
            } else {
                FUNC_0("Failed to push %s to %s", VAR_4.file,
                                                VAR_3->push_target);
            }
        }

        FUNC_6(&VAR_4);
    }
    return 0;
}
