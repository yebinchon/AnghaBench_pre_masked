
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int done; scalar_t__ busy; } ;
struct TYPE_6__ {TYPE_1__ part; } ;
struct TYPE_7__ {int header_low_payload; TYPE_2__ header_high; } ;
union ipc_header_mrfld {void* full; TYPE_3__ p; } ;
struct TYPE_8__ {int busy_interrupt; } ;
union interrupt_reg_mrfld {void* full; TYPE_4__ part; } ;
struct intel_sst_drv {int ipc_spin_lock; int shim; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 void* FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,void*) ;

void FUNC_4(struct intel_sst_drv *VAR_4)
{
 union interrupt_reg_mrfld VAR_5;
 union interrupt_reg_mrfld VAR_6;
 union ipc_header_mrfld VAR_7;
 unsigned long VAR_8;

 FUNC_0(&VAR_4->ipc_spin_lock, VAR_8);
 VAR_6.full = FUNC_2(VAR_4->shim, VAR_1);
 VAR_5.full = FUNC_2(VAR_4->shim, VAR_3);


 VAR_5.part.busy_interrupt = 1;
 FUNC_3(VAR_4->shim, VAR_3, VAR_5.full);


 VAR_7.full = FUNC_2(VAR_4->shim, VAR_2);

 VAR_7.p.header_high.part.busy = 0;
 VAR_7.p.header_high.part.done = 1;
 VAR_7.p.header_low_payload = VAR_0;
 FUNC_3(VAR_4->shim, VAR_2, VAR_7.full);

 VAR_6.part.busy_interrupt = 0;
 FUNC_3(VAR_4->shim, VAR_1, VAR_6.full);
 FUNC_1(&VAR_4->ipc_spin_lock, VAR_8);
}
