
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_handler_request {int dummy; } ;
struct file_handler {int queue; int serial; int mutex; int event_cond; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *,struct file_handler_request*) ;
 int FUNC_4 (struct file_handler_request*) ;

void
FUNC_5(struct file_handler *VAR_0) {
    FUNC_0(VAR_0->event_cond);
    FUNC_1(VAR_0->mutex);
    FUNC_2(VAR_0->serial);

    struct file_handler_request VAR_1;
    while (FUNC_3(&VAR_0->queue, &VAR_1)) {
        FUNC_4(&VAR_1);
    }
}
