
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int (* smgr_truncate ) (TYPE_1__*,scalar_t__,void*) ;} ;
struct TYPE_5__ {size_t smgr_which; void* smgr_vm_nblocks; void* smgr_fsm_nblocks; int smgr_rnode; } ;
typedef TYPE_1__* SMgrRelation ;
typedef scalar_t__ ForkNumber ;
typedef void* BlockNumber ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__*,int,void**) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_4__* VAR_2 ;
 int FUNC_2 (TYPE_1__*,scalar_t__,void*) ;

void
FUNC_3(SMgrRelation VAR_3, ForkNumber *VAR_4, int VAR_5, BlockNumber *VAR_6)
{
 int VAR_7;





 FUNC_1(VAR_3->smgr_rnode, VAR_4, VAR_5, VAR_6);
 FUNC_0(VAR_3->smgr_rnode);


 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++)
 {
  VAR_2[VAR_3->smgr_which].smgr_truncate(VAR_3, VAR_4[VAR_7], VAR_6[VAR_7]);
  if (VAR_4[VAR_7] == VAR_0)
   VAR_3->smgr_fsm_nblocks = VAR_6[VAR_7];
  if (VAR_4[VAR_7] == VAR_1)
   VAR_3->smgr_vm_nblocks = VAR_6[VAR_7];
 }
}
