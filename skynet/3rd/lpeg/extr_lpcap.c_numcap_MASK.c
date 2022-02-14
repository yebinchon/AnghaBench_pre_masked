
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int L; TYPE_1__* cap; } ;
struct TYPE_6__ {int idx; } ;
typedef TYPE_2__ CapState ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_6 (CapState *VAR_0) {
  int VAR_1 = VAR_0->cap->idx;
  if (VAR_1 == 0) {
    FUNC_4(VAR_0);
    return 0;
  }
  else {
    int VAR_2 = FUNC_5(VAR_0, 0);
    if (VAR_2 < VAR_1)
      return FUNC_0(VAR_0->L, "no capture '%d'", VAR_1);
    else {
      FUNC_2(VAR_0->L, -(VAR_2 - VAR_1 + 1));
      FUNC_3(VAR_0->L, -(VAR_2 + 1));
      FUNC_1(VAR_0->L, VAR_2 - 1);
      return 1;
    }
  }
}
