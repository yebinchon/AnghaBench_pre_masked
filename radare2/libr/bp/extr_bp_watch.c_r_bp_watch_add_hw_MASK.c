
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* breakpoint ) (TYPE_1__*,int *,int) ;} ;
typedef int RBreakpointItem ;
typedef TYPE_1__ RBreakpoint ;


 int FUNC_0 (TYPE_1__*,int *,int) ;

__attribute__((used)) static void FUNC_1(RBreakpoint *VAR_0, RBreakpointItem *VAR_1) {
 if (VAR_0->breakpoint) {
  VAR_0->breakpoint (VAR_0, VAR_1, 1);
 }
}
