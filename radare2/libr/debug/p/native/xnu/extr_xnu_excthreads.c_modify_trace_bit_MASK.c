
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {int gpr; } ;
typedef TYPE_5__ xnu_thread_t ;
struct TYPE_12__ {int __rflags; } ;
struct TYPE_10__ {int __eflags; } ;
struct TYPE_13__ {TYPE_3__ ts64; TYPE_1__ ts32; } ;
struct TYPE_11__ {scalar_t__ flavor; } ;
struct TYPE_15__ {TYPE_4__ uts; TYPE_2__ tsh; } ;
typedef TYPE_6__ R_REG_T ;
typedef int RDebug ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,TYPE_5__*) ;
 int FUNC_2 (int *,TYPE_5__*) ;

__attribute__((used)) static bool FUNC_3(RDebug *VAR_2, xnu_thread_t *VAR_3, int VAR_4) {
 R_REG_T *VAR_5;
 int VAR_6;
 VAR_6 = FUNC_1 (VAR_2, VAR_3);
 if (!VAR_6) {
  FUNC_0 ("error to get gpr registers in trace bit intel\n");
  return 0;
 }
 VAR_5 = (R_REG_T *)&VAR_3->gpr;
 if (VAR_5->tsh.flavor == VAR_0) {
  VAR_5->uts.ts32.__eflags = (VAR_5->uts.ts32.__eflags & ~0x100UL) | (VAR_4 ? 0x100UL : 0);

 } else if (VAR_5->tsh.flavor == VAR_1) {
  VAR_5->uts.ts64.__rflags = (VAR_5->uts.ts64.__rflags & ~0x100UL) | (VAR_4 ? 0x100UL : 0);

 } else {
  FUNC_0 ("Invalid bit size\n");
  return 0;
 }
 if (!FUNC_2 (VAR_2, VAR_3)) {
  FUNC_0 ("error xnu_thread_set_gpr in modify_trace_bit intel\n");
  return 0;
 }
 return 1;
}
