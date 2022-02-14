
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * running_sem; } ;
typedef int RThreadSemaphore ;
typedef TYPE_1__ RCoreTask ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(RCoreTask *VAR_0) {
 RThreadSemaphore *VAR_1 = VAR_0->running_sem;
 if (!VAR_1) {
  return;
 }

 FUNC_1 (VAR_1);
 FUNC_0 (VAR_1);
}
