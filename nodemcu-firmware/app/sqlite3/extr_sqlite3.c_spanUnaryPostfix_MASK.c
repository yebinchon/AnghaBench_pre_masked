
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t n; int * z; } ;
typedef TYPE_1__ Token ;
struct TYPE_6__ {int * zEnd; int pExpr; } ;
typedef int Parse ;
typedef TYPE_2__ ExprSpan ;


 int FUNC_0 (int *,int,int ,int ) ;

__attribute__((used)) static void FUNC_1(
    Parse *VAR_0,
    int VAR_1,
    ExprSpan *VAR_2,
    Token *VAR_3
  ){
    VAR_2->pExpr = FUNC_0(VAR_0, VAR_1, VAR_2->pExpr, 0);
    VAR_2->zEnd = &VAR_3->z[VAR_3->n];
  }
