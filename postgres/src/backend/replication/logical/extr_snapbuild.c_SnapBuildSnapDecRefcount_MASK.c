
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ snapshot_type; scalar_t__ curcid; scalar_t__ regd_count; scalar_t__ active_count; scalar_t__ copied; int takenDuringRecovery; int suboverflowed; } ;
typedef TYPE_1__* Snapshot ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,char*) ;

void
FUNC_3(Snapshot VAR_3)
{

 FUNC_0(VAR_3->snapshot_type == VAR_2);


 FUNC_0(VAR_3->curcid == VAR_1);
 FUNC_0(!VAR_3->suboverflowed);
 FUNC_0(!VAR_3->takenDuringRecovery);

 FUNC_0(VAR_3->regd_count == 0);

 FUNC_0(VAR_3->active_count > 0);


 if (VAR_3->copied)
  FUNC_2(VAR_0, "cannot free a copied snapshot");

 VAR_3->active_count--;
 if (VAR_3->active_count == 0)
  FUNC_1(VAR_3);
}
