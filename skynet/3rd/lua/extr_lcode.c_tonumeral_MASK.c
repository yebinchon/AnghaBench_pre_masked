
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int nval; int ival; } ;
struct TYPE_6__ {int k; TYPE_1__ u; } ;
typedef TYPE_2__ expdesc ;
typedef int TValue ;




 scalar_t__ FUNC_0 (TYPE_2__ const*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static int FUNC_3(const expdesc *VAR_0, TValue *VAR_1) {
  if (FUNC_0(VAR_0))
    return 0;
  switch (VAR_0->k) {
    case 128:
      if (VAR_1) FUNC_2(VAR_1, VAR_0->u.ival);
      return 1;
    case 129:
      if (VAR_1) FUNC_1(VAR_1, VAR_0->u.nval);
      return 1;
    default: return 0;
  }
}
