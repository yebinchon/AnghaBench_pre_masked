
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fps_counter {int mutex; int state_cond; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

void
FUNC_2(struct fps_counter *VAR_0) {
    FUNC_0(VAR_0->state_cond);
    FUNC_1(VAR_0->mutex);
}
