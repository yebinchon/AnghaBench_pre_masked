
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_17__ {scalar_t__ verbose; } ;
struct TYPE_16__ {int col_td_classes; TYPE_10__* vt_context; } ;
struct TYPE_13__ {int name; } ;
struct TYPE_15__ {TYPE_2__* col; int addr; TYPE_1__ td; int valid; } ;
struct TYPE_14__ {int base_td; int vtable; int valid; } ;
struct TYPE_12__ {TYPE_5__* anal; } ;
typedef TYPE_3__ RecoveryTypeDescriptor ;
typedef TYPE_4__ RRTTIMSVCAnalContext ;
typedef TYPE_5__ RAnal ;


 int FUNC_0 (char*,int ) ;
 char* FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,int ,char*) ;
 int FUNC_3 (TYPE_5__*,char*) ;
 char* FUNC_4 (TYPE_10__*,int ) ;
 int FUNC_5 (TYPE_4__*,char*,int *) ;
 int FUNC_6 (TYPE_5__*,char*,int ) ;
 char* FUNC_7 (int ) ;

__attribute__((used)) static const char *FUNC_8(RRTTIMSVCAnalContext *VAR_0, RecoveryTypeDescriptor *VAR_1) {
 if (!VAR_1->valid) {
  return ((void*)0);
 }

 RAnal *VAR_2 = VAR_0->vt_context->anal;

 const char *VAR_3 = FUNC_1 (VAR_0->col_td_classes, VAR_1->addr, ((void*)0));
 if (VAR_3 != ((void*)0)) {
  return VAR_3;
 }

 char *VAR_4 = FUNC_4 (VAR_0->vt_context, VAR_1->td.name);
 if (!VAR_4) {
  if (VAR_0->vt_context->anal->verbose) {
   FUNC_0("Failed to demangle a class name: \"%s\"\n", VAR_1->td.name);
  }
  VAR_4 = FUNC_7 (VAR_1->td.name);
  if (!VAR_4) {
   return ((void*)0);
  }
 }

 FUNC_3 (VAR_2, VAR_4);
 FUNC_2 (VAR_0->col_td_classes, VAR_1->addr, VAR_4);

 if (!VAR_1->col || !VAR_1->col->valid) {
  return VAR_4;
 }

 FUNC_6 (VAR_2, VAR_4, VAR_1->col->vtable);
 FUNC_5 (VAR_0, VAR_4, &VAR_1->col->base_td);

 return VAR_4;
}
