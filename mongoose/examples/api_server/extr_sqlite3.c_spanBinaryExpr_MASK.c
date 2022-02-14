
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int zEnd; int zStart; int pExpr; } ;
typedef int Parse ;
typedef TYPE_1__ ExprSpan ;


 int FUNC_0 (int *,int,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(
    ExprSpan *VAR_0,
    Parse *VAR_1,
    int VAR_2,
    ExprSpan *VAR_3,
    ExprSpan *VAR_4
  ){
    VAR_0->pExpr = FUNC_0(VAR_1, VAR_2, VAR_3->pExpr, VAR_4->pExpr, 0);
    VAR_0->zStart = VAR_3->zStart;
    VAR_0->zEnd = VAR_4->zEnd;
  }
