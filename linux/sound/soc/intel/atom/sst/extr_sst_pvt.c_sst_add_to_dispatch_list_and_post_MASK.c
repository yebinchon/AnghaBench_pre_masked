
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipc_post {int node; } ;
struct intel_sst_drv {TYPE_1__* ops; int ipc_spin_lock; int ipc_dispatch_list; } ;
struct TYPE_2__ {int (* post_message ) (struct intel_sst_drv*,int *,int) ;} ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct intel_sst_drv*,int *,int) ;

void FUNC_4(struct intel_sst_drv *VAR_0,
      struct ipc_post *VAR_1)
{
 unsigned long VAR_2;

 FUNC_1(&VAR_0->ipc_spin_lock, VAR_2);
 FUNC_0(&VAR_1->node, &VAR_0->ipc_dispatch_list);
 FUNC_2(&VAR_0->ipc_spin_lock, VAR_2);
 VAR_0->ops->post_message(VAR_0, ((void*)0), 0);
}
