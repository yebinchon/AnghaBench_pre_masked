
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_19__ {int gpr; } ;
typedef TYPE_5__ xnu_thread_t ;
struct TYPE_21__ {int tid; } ;
struct TYPE_17__ {int __rflags; } ;
struct TYPE_15__ {int __eflags; } ;
struct TYPE_18__ {TYPE_3__ ts64; TYPE_1__ ts32; } ;
struct TYPE_16__ {scalar_t__ flavor; } ;
struct TYPE_20__ {TYPE_4__ uts; TYPE_2__ tsh; } ;
typedef TYPE_6__ R_REG_T ;
typedef TYPE_7__ RDebug ;


 int FUNC_0 (char*) ;
 TYPE_5__* FUNC_1 (TYPE_7__*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (TYPE_7__*,TYPE_5__*) ;
 int FUNC_3 (TYPE_7__*,TYPE_5__*) ;

__attribute__((used)) static bool FUNC_4(RDebug *VAR_2, bool VAR_3) {
 R_REG_T *VAR_4;
 int VAR_5;
 xnu_thread_t *VAR_6 = FUNC_1 (VAR_2, VAR_2->tid);
 VAR_5 = FUNC_2 (VAR_2, VAR_6);
 if (!VAR_5) {
  FUNC_0 ("error to get gpr registers in trace bit intel\n");
  return 0;
 }
 VAR_4 = (R_REG_T *)&VAR_6->gpr;
 if (VAR_4->tsh.flavor == VAR_0) {
  VAR_4->uts.ts32.__eflags = (VAR_4->uts.ts32.__eflags & ~0x100UL) | (VAR_3 ? 0x100UL : 0);

 } else if (VAR_4->tsh.flavor == VAR_1) {
  VAR_4->uts.ts64.__rflags = (VAR_4->uts.ts64.__rflags & ~0x100UL) | (VAR_3 ? 0x100UL : 0);

 } else {
  FUNC_0 ("Invalid bit size\n");
  return 0;
 }
 if (!FUNC_3 (VAR_2, VAR_6)) {
  FUNC_0 ("error xnu_thread_set_gpr in modify_trace_bit intel\n");
  return 0;
 }
 return 1;
}
