
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snlua {scalar_t__ mem; int ctx; int L; } ;


 int FUNC_0 (int ,char*,float) ;
 int VAR_0 ;

void
FUNC_1(struct snlua *VAR_1, int VAR_2) {
 FUNC_0(VAR_1->ctx, "recv a signal %d", VAR_2);
 if (VAR_2 == 0) {




 } else if (VAR_2 == 1) {
  FUNC_0(VAR_1->ctx, "Current Memory %.3fK", (float)VAR_1->mem / 1024);
 }
}
