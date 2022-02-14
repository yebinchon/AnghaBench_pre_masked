
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ k; } ;
struct LHS_assign {int * prev; TYPE_3__ v; } ;
struct TYPE_7__ {int * fs; } ;
typedef TYPE_1__ LexState ;
typedef int FuncState ;


 int FUNC_0 (int ,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_1__*,struct LHS_assign*,int) ;
 int FUNC_2 (int *,TYPE_3__*) ;
 int FUNC_3 (TYPE_1__*,TYPE_3__*) ;

__attribute__((used)) static void FUNC_4 (LexState *VAR_1) {

  FuncState *VAR_2 = VAR_1->fs;
  struct LHS_assign VAR_3;
  FUNC_3(VAR_1, &VAR_3.v);
  if (VAR_3.v.k == VAR_0)
    FUNC_0(FUNC_2(VAR_2, &VAR_3.v), 1);
  else {
    VAR_3.prev = ((void*)0);
    FUNC_1(VAR_1, &VAR_3, 1);
  }
}
