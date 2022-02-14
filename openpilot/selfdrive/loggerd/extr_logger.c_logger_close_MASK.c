
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lock; scalar_t__ cur_handle; int init_data; } ;
typedef TYPE_1__ LoggerState ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(LoggerState *VAR_0) {
  FUNC_2(&VAR_0->lock);
  FUNC_0(VAR_0->init_data);
  if (VAR_0->cur_handle) {
    FUNC_1(VAR_0->cur_handle);
  }
  FUNC_3(&VAR_0->lock);
}
