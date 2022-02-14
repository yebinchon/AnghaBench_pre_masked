
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int nhwbps; } ;
struct TYPE_5__ {int perm; int size; int addr; } ;
typedef int RDebug ;
typedef TYPE_1__ RBreakpointItem ;
typedef TYPE_2__ RBreakpoint ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int ,int ,int ,int ) ;
 int FUNC_1 (int *,int ,int) ;

bool FUNC_2(RDebug *VAR_1, RBreakpoint *VAR_2, RBreakpointItem *VAR_3) {
 if (VAR_2->nhwbps < 4) {
  FUNC_1 (VAR_1, VAR_0, 0);
  FUNC_0 (VAR_1, VAR_2->nhwbps, VAR_3->addr, VAR_3->size, VAR_3->perm, 0);
  FUNC_1 (VAR_1, VAR_0, 1);
  VAR_2->nhwbps++;
  return 1;
 }
 return 0;
}
