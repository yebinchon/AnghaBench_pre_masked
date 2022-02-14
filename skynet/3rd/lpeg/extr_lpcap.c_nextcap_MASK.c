
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * cap; } ;
typedef int Capture ;
typedef TYPE_1__ CapState ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2 (CapState *VAR_0) {
  Capture *VAR_1 = VAR_0->cap;
  if (!FUNC_1(VAR_1)) {
    int VAR_2 = 0;
    for (;;) {
      VAR_1++;
      if (FUNC_0(VAR_1)) {
        if (VAR_2-- == 0) break;
      }
      else if (!FUNC_1(VAR_1)) VAR_2++;
    }
  }
  VAR_0->cap = VAR_1 + 1;
}
