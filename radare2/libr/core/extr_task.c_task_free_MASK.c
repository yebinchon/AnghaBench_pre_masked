
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cons_context; int dispatch_lock; int dispatch_cond; int running_sem; int thread; struct TYPE_4__* res; struct TYPE_4__* cmd; } ;
typedef TYPE_1__ RCoreTask ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6 (RCoreTask *VAR_0) {
 if (!VAR_0) {
  return;
 }
 FUNC_0 (VAR_0->cmd);
 FUNC_0 (VAR_0->res);
 FUNC_3 (VAR_0->thread);
 FUNC_5 (VAR_0->running_sem);
 FUNC_2 (VAR_0->dispatch_cond);
 FUNC_4 (VAR_0->dispatch_lock);
 FUNC_1 (VAR_0->cons_context);
 FUNC_0 (VAR_0);
}
