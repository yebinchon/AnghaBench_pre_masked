
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int info; } ;
struct TYPE_6__ {scalar_t__ k; TYPE_1__ u; } ;
typedef TYPE_2__ expdesc ;
typedef int FuncState ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int) ;

__attribute__((used)) static void FUNC_1 (FuncState *VAR_1, expdesc *VAR_2, expdesc *VAR_3) {
  int VAR_4 = (VAR_2->k == VAR_0) ? VAR_2->u.info : -1;
  int VAR_5 = (VAR_3->k == VAR_0) ? VAR_3->u.info : -1;
  if (VAR_4 > VAR_5) {
    FUNC_0(VAR_1, VAR_4);
    FUNC_0(VAR_1, VAR_5);
  }
  else {
    FUNC_0(VAR_1, VAR_5);
    FUNC_0(VAR_1, VAR_4);
  }
}
