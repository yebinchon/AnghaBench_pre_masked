
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_17__ {int gpr; } ;
typedef TYPE_4__ xnu_thread_t ;
struct TYPE_19__ {int tid; } ;
struct TYPE_15__ {int __eflags; } ;
struct TYPE_16__ {TYPE_2__ ts32; } ;
struct TYPE_14__ {scalar_t__ flavor; } ;
struct TYPE_18__ {TYPE_3__ uts; TYPE_1__ tsh; } ;
typedef TYPE_5__ R_REG_T ;
typedef TYPE_6__ RDebug ;


 int FUNC_0 (char*) ;
 TYPE_4__* FUNC_1 (TYPE_6__*,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (TYPE_6__*,TYPE_4__*) ;
 int FUNC_3 (TYPE_6__*,TYPE_4__*) ;

__attribute__((used)) static bool FUNC_4(RDebug *VAR_1, bool VAR_2) {
 R_REG_T *VAR_3;
 xnu_thread_t *VAR_4 = FUNC_1 (VAR_1, VAR_1->tid);
 int VAR_5 = FUNC_2 (VAR_1, VAR_4);
 if (!VAR_5) {
  FUNC_0 ("error to get gpr registers in trace bit intel\n");
  return 0;
 }
 VAR_3 = (R_REG_T *)&VAR_4->gpr;
 if (VAR_3->tsh.flavor == VAR_0) {
  VAR_3->uts.ts32.__eflags = (VAR_3->uts.ts32.__eflags & ~0x100UL) | (VAR_2 ? 0x100UL : 0);

 } else {
  FUNC_0 ("Invalid bit size\n");
  return 0;
 }
 if (!FUNC_3 (VAR_1, VAR_4)) {
  FUNC_0 ("error xnu_thread_set_gpr in modify_trace_bit intel\n");
  return 0;
 }
 return 1;
}
