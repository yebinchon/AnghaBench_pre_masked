
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int L; TYPE_1__* cap; } ;
struct TYPE_6__ {int idx; } ;
typedef TYPE_2__ CapState ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_5 (CapState *VAR_0) {
  int VAR_1 = VAR_0->cap->idx;
  FUNC_3(VAR_0);
  FUNC_0(VAR_0->L, FUNC_4(VAR_0, VAR_1));
  if (!FUNC_1(VAR_0->L, -1))
    return 1;
  else {
    FUNC_2(VAR_0->L, 1);
    return 0;
  }
}
