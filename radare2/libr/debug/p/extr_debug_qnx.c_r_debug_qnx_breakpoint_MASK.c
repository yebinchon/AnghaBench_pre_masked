
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int addr; scalar_t__ hw; } ;
typedef TYPE_1__ RBreakpointItem ;
typedef int RBreakpoint ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,char*) ;
 int FUNC_3 (int ,int ,char*) ;

__attribute__((used)) static int FUNC_4 (RBreakpoint *VAR_1, RBreakpointItem *VAR_2, bool VAR_3) {
 if (!VAR_2) {
  return 0;
 }
 int VAR_4 = VAR_3
  ? VAR_2->hw
   ? FUNC_3 (VAR_0, VAR_2->addr, "")
   : FUNC_2 (VAR_0, VAR_2->addr, "")
  : VAR_2->hw
   ? FUNC_1 (VAR_0, VAR_2->addr)
   : FUNC_0 (VAR_0, VAR_2->addr);
 return !VAR_4;
}
