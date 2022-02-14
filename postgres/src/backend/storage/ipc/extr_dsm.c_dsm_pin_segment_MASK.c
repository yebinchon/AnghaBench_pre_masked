
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {size_t control_slot; int impl_private; int handle; } ;
typedef TYPE_2__ dsm_segment ;
struct TYPE_7__ {TYPE_1__* item; } ;
struct TYPE_5__ {int pinned; void* impl_private_pm_handle; int refcnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 TYPE_4__* VAR_3 ;
 int FUNC_2 (int ,int ,void**) ;
 int FUNC_3 (int ,char*) ;

void
FUNC_4(dsm_segment *VAR_4)
{
 void *VAR_5;







 FUNC_0(VAR_0, VAR_2);
 if (VAR_3->item[VAR_4->control_slot].pinned)
  FUNC_3(VAR_1, "cannot pin a segment that is already pinned");
 FUNC_2(VAR_4->handle, VAR_4->impl_private, &VAR_5);
 VAR_3->item[VAR_4->control_slot].pinned = 1;
 VAR_3->item[VAR_4->control_slot].refcnt++;
 VAR_3->item[VAR_4->control_slot].impl_private_pm_handle = VAR_5;
 FUNC_1(VAR_0);
}
