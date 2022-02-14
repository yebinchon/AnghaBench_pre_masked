
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ searchMode; int attnum; int triConsistentFn; int boolConsistentFn; int collation; TYPE_2__* triConsistentFmgrInfo; TYPE_1__* consistentFmgrInfo; } ;
struct TYPE_9__ {TYPE_2__* triConsistentFn; TYPE_1__* consistentFn; int * supportCollation; } ;
struct TYPE_8__ {int fn_oid; } ;
struct TYPE_7__ {int fn_oid; } ;
typedef TYPE_3__ GinState ;
typedef TYPE_4__* GinScanKey ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

void
FUNC_1(GinState *VAR_7, GinScanKey VAR_8)
{
 if (VAR_8->searchMode == VAR_0)
 {
  VAR_8->boolConsistentFn = VAR_5;
  VAR_8->triConsistentFn = VAR_6;
 }
 else
 {
  VAR_8->consistentFmgrInfo = &VAR_7->consistentFn[VAR_8->attnum - 1];
  VAR_8->triConsistentFmgrInfo = &VAR_7->triConsistentFn[VAR_8->attnum - 1];
  VAR_8->collation = VAR_7->supportCollation[VAR_8->attnum - 1];

  if (FUNC_0(VAR_7->consistentFn[VAR_8->attnum - 1].fn_oid))
   VAR_8->boolConsistentFn = VAR_1;
  else
   VAR_8->boolConsistentFn = VAR_3;

  if (FUNC_0(VAR_7->triConsistentFn[VAR_8->attnum - 1].fn_oid))
   VAR_8->triConsistentFn = VAR_2;
  else
   VAR_8->triConsistentFn = VAR_4;
 }
}
