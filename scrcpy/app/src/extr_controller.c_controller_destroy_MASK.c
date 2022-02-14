
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct controller {int receiver; int queue; int mutex; int msg_cond; } ;
struct control_msg {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,struct control_msg*) ;
 int FUNC_3 (struct control_msg*) ;
 int FUNC_4 (int *) ;

void
FUNC_5(struct controller *VAR_0) {
    FUNC_0(VAR_0->msg_cond);
    FUNC_1(VAR_0->mutex);

    struct control_msg VAR_1;
    while (FUNC_2(&VAR_0->queue, &VAR_1)) {
        FUNC_3(&VAR_1);
    }

    FUNC_4(&VAR_0->receiver);
}
