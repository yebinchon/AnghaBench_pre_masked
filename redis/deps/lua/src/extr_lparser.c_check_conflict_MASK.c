
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int info; int aux; } ;
struct TYPE_14__ {TYPE_1__ s; } ;
struct TYPE_15__ {scalar_t__ k; TYPE_2__ u; } ;
struct LHS_assign {TYPE_3__ v; struct LHS_assign* prev; } ;
struct TYPE_16__ {int info; } ;
struct TYPE_17__ {TYPE_4__ s; } ;
struct TYPE_18__ {TYPE_5__ u; } ;
typedef TYPE_6__ expdesc ;
struct TYPE_20__ {int freereg; } ;
struct TYPE_19__ {TYPE_8__* fs; } ;
typedef TYPE_7__ LexState ;
typedef TYPE_8__ FuncState ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_8__*,int ,int,int,int ) ;
 int FUNC_1 (TYPE_8__*,int) ;

__attribute__((used)) static void FUNC_2 (LexState *VAR_2, struct LHS_assign *VAR_3, expdesc *VAR_4) {
  FuncState *VAR_5 = VAR_2->fs;
  int VAR_6 = VAR_5->freereg;
  int VAR_7 = 0;
  for (; VAR_3; VAR_3 = VAR_3->prev) {
    if (VAR_3->v.k == VAR_1) {
      if (VAR_3->v.u.s.info == VAR_4->u.s.info) {
        VAR_7 = 1;
        VAR_3->v.u.s.info = VAR_6;
      }
      if (VAR_3->v.u.s.aux == VAR_4->u.s.info) {
        VAR_7 = 1;
        VAR_3->v.u.s.aux = VAR_6;
      }
    }
  }
  if (VAR_7) {
    FUNC_0(VAR_5, VAR_0, VAR_5->freereg, VAR_4->u.s.info, 0);
    FUNC_1(VAR_5, 1);
  }
}
