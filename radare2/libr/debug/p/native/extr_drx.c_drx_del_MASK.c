
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ nhwbps; } ;
typedef int RDebug ;
typedef int RBreakpointItem ;
typedef TYPE_1__ RBreakpoint ;


 int VAR_0 ;
 int FUNC_0 (int *,scalar_t__,int ,int ,int ,int ) ;
 int FUNC_1 (int *,int ,int) ;

bool FUNC_2(RDebug *VAR_1, RBreakpoint *VAR_2, RBreakpointItem *VAR_3) {
 if (VAR_2->nhwbps > 0) {
  FUNC_1 (VAR_1, VAR_0, 0);
  FUNC_0 (VAR_1, VAR_2->nhwbps, 0, 0, 0, 0);
  FUNC_1 (VAR_1, VAR_0, 1);
  VAR_2->nhwbps--;
  return 1;
 }
 return 0;
}
