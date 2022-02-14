
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct recorder {int stopped; int mutex; int queue_cond; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

void
FUNC_3(struct recorder *VAR_0) {
    FUNC_1(VAR_0->mutex);
    VAR_0->stopped = 1;
    FUNC_0(VAR_0->queue_cond);
    FUNC_2(VAR_0->mutex);
}
