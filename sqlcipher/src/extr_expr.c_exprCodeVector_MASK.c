
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_16__ {TYPE_2__* pList; } ;
struct TYPE_18__ {scalar_t__ op; TYPE_3__ x; } ;
struct TYPE_17__ {int nMem; } ;
struct TYPE_15__ {TYPE_1__* a; } ;
struct TYPE_14__ {int pExpr; } ;
typedef TYPE_4__ Parse ;
typedef TYPE_5__ Expr ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_4__*,TYPE_5__*) ;
 int FUNC_1 (TYPE_4__*,int ,int) ;
 int FUNC_2 (TYPE_4__*,TYPE_5__*,int*) ;
 int FUNC_3 (TYPE_5__*) ;

__attribute__((used)) static int FUNC_4(Parse *VAR_1, Expr *VAR_2, int *VAR_3){
  int VAR_4;
  int VAR_5 = FUNC_3(VAR_2);
  if( VAR_5==1 ){
    VAR_4 = FUNC_2(VAR_1, VAR_2, VAR_3);
  }else{
    *VAR_3 = 0;
    if( VAR_2->op==VAR_0 ){



      VAR_4 = FUNC_0(VAR_1, VAR_2);

    }else{
      int VAR_6;
      VAR_4 = VAR_1->nMem+1;
      VAR_1->nMem += VAR_5;
      for(VAR_6=0; VAR_6<VAR_5; VAR_6++){
        FUNC_1(VAR_1, VAR_2->x.pList->a[VAR_6].pExpr, VAR_6+VAR_4);
      }
    }
  }
  return VAR_4;
}
