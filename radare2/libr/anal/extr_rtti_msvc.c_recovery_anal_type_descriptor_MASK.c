
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int ut64 ;
struct TYPE_10__ {int vt_context; int addr_td; int type_descriptors; } ;
struct TYPE_9__ {int * col; int valid; int td; int addr; } ;
typedef TYPE_1__ RecoveryTypeDescriptor ;
typedef int RecoveryCompleteObjectLocator ;
typedef TYPE_2__ RRTTIMSVCAnalContext ;


 TYPE_1__* FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ,int ,TYPE_1__*) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 TYPE_1__* FUNC_3 () ;
 int FUNC_4 (int ,int ,int *) ;

RecoveryTypeDescriptor *FUNC_5(RRTTIMSVCAnalContext *VAR_0, ut64 VAR_1, RecoveryCompleteObjectLocator *VAR_2) {
 RecoveryTypeDescriptor *VAR_3 = FUNC_0 (VAR_0->addr_td, VAR_1, ((void*)0));
 if (VAR_3) {
  if (VAR_2 != ((void*)0)) {
   VAR_3->col = VAR_2;
  }
  return VAR_3;
 }

 VAR_3 = FUNC_3 ();
 if (!VAR_3) {
  return ((void*)0);
 }
 FUNC_2 (&VAR_0->type_descriptors, VAR_3);
 FUNC_1 (VAR_0->addr_td, VAR_1, VAR_3);
 VAR_3->addr = VAR_1;
 VAR_3->valid = FUNC_4 (VAR_0->vt_context, VAR_1, &VAR_3->td);
 if (!VAR_3->valid) {
  return VAR_3;
 }

 VAR_3->col = VAR_2;

 return VAR_3;
}
