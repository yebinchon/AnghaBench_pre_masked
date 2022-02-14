
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_sst_drv {int block_lock; int ipc_spin_lock; int rx_msg_lock; int sst_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct intel_sst_drv *VAR_0)
{
 FUNC_0(&VAR_0->sst_lock);
 FUNC_1(&VAR_0->rx_msg_lock);
 FUNC_1(&VAR_0->ipc_spin_lock);
 FUNC_1(&VAR_0->block_lock);
}
