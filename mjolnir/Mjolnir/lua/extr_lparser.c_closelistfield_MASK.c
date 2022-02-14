
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ k; } ;
struct ConsControl {scalar_t__ tostore; int na; TYPE_1__* t; TYPE_3__ v; } ;
struct TYPE_5__ {int info; } ;
struct TYPE_4__ {TYPE_2__ u; } ;
typedef int FuncState ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,TYPE_3__*) ;
 int FUNC_1 (int *,int ,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2 (FuncState *VAR_2, struct ConsControl *VAR_3) {
  if (VAR_3->v.k == VAR_1) return;
  FUNC_0(VAR_2, &VAR_3->v);
  VAR_3->v.k = VAR_1;
  if (VAR_3->tostore == VAR_0) {
    FUNC_1(VAR_2, VAR_3->t->u.info, VAR_3->na, VAR_3->tostore);
    VAR_3->tostore = 0;
  }
}
