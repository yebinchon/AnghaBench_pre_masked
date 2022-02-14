
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct controller {int mutex; int queue; scalar_t__ stopped; int msg_cond; } ;
struct control_msg {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,struct control_msg*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct control_msg*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct controller*,struct control_msg*) ;

__attribute__((used)) static int
FUNC_9(void *VAR_0) {
    struct controller *VAR_1 = VAR_0;

    for (;;) {
        FUNC_6(VAR_1->mutex);
        while (!VAR_1->stopped && FUNC_2(&VAR_1->queue)) {
            FUNC_4(VAR_1->msg_cond, VAR_1->mutex);
        }
        if (VAR_1->stopped) {

            FUNC_7(VAR_1->mutex);
            break;
        }
        struct control_msg VAR_2;
        bool VAR_3 = FUNC_3(&VAR_1->queue, &VAR_2);
        FUNC_1(VAR_3);
        FUNC_7(VAR_1->mutex);

        bool VAR_4 = FUNC_8(VAR_1, &VAR_2);
        FUNC_5(&VAR_2);
        if (!VAR_4) {
            FUNC_0("Could not write msg to socket");
            break;
        }
    }
    return 0;
}
