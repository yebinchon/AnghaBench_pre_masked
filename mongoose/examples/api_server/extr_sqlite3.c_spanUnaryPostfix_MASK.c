
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {size_t n; int * z; } ;
typedef TYPE_1__ Token ;
struct TYPE_7__ {int * zEnd; int zStart; int pExpr; } ;
typedef int Parse ;
typedef TYPE_2__ ExprSpan ;


 int FUNC_0 (int *,int,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(
    ExprSpan *VAR_0,
    Parse *VAR_1,
    int VAR_2,
    ExprSpan *VAR_3,
    Token *VAR_4
  ){
    VAR_0->pExpr = FUNC_0(VAR_1, VAR_2, VAR_3->pExpr, 0, 0);
    VAR_0->zStart = VAR_3->zStart;
    VAR_0->zEnd = &VAR_4->z[VAR_4->n];
  }
