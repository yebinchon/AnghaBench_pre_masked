
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ state; int state_lock; int state_cv; } ;
typedef scalar_t__ OMX_STATETYPE ;
typedef TYPE_1__ EncoderState ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(EncoderState *VAR_0, OMX_STATETYPE VAR_1) {
  FUNC_1(&VAR_0->state_lock);
  while (VAR_0->state != VAR_1) {
    FUNC_0(&VAR_0->state_cv, &VAR_0->state_lock);
  }
  FUNC_2(&VAR_0->state_lock);
}
