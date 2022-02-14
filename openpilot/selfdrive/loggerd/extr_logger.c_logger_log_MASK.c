
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int lock; scalar_t__ cur_handle; } ;
typedef TYPE_1__ LoggerState ;


 int FUNC_0 (scalar_t__,int *,size_t,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(LoggerState *VAR_0, uint8_t* VAR_1, size_t VAR_2, bool VAR_3) {
  FUNC_1(&VAR_0->lock);
  if (VAR_0->cur_handle) {
    FUNC_0(VAR_0->cur_handle, VAR_1, VAR_2, VAR_3);
  }
  FUNC_2(&VAR_0->lock);
}
