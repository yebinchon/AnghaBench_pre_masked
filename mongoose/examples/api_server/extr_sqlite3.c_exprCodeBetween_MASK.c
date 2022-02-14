
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {TYPE_2__* pList; } ;
struct TYPE_13__ {int op; int iTable; TYPE_3__ x; struct TYPE_13__* pRight; struct TYPE_13__* pLeft; } ;
struct TYPE_11__ {TYPE_1__* a; } ;
struct TYPE_10__ {TYPE_4__* pExpr; } ;
typedef int Parse ;
typedef TYPE_4__ Expr ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,TYPE_4__*,int*) ;
 int FUNC_3 (int *,TYPE_4__*,int,int) ;
 int FUNC_4 (int *,TYPE_4__*,int,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(
  Parse *VAR_5,
  Expr *VAR_6,
  int VAR_7,
  int VAR_8,
  int VAR_9
){
  Expr VAR_10;
  Expr VAR_11;
  Expr VAR_12;
  Expr VAR_13;
  int VAR_14 = 0;

  FUNC_1( !FUNC_0(VAR_6, VAR_0) );
  VAR_13 = *VAR_6->pLeft;
  VAR_10.op = VAR_1;
  VAR_10.pLeft = &VAR_11;
  VAR_10.pRight = &VAR_12;
  VAR_11.op = VAR_2;
  VAR_11.pLeft = &VAR_13;
  VAR_11.pRight = VAR_6->x.pList->a[0].pExpr;
  VAR_12.op = VAR_3;
  VAR_12.pLeft = &VAR_13;
  VAR_12.pRight = VAR_6->x.pList->a[1].pExpr;
  VAR_13.iTable = FUNC_2(VAR_5, &VAR_13, &VAR_14);
  VAR_13.op = VAR_4;
  if( VAR_8 ){
    FUNC_4(VAR_5, &VAR_10, VAR_7, VAR_9);
  }else{
    FUNC_3(VAR_5, &VAR_10, VAR_7, VAR_9);
  }
  FUNC_5(VAR_5, VAR_14);


  FUNC_6( VAR_8==0 && VAR_9==0 && VAR_14==0 );
  FUNC_6( VAR_8==0 && VAR_9==0 && VAR_14!=0 );
  FUNC_6( VAR_8==0 && VAR_9!=0 && VAR_14==0 );
  FUNC_6( VAR_8==0 && VAR_9!=0 && VAR_14!=0 );
  FUNC_6( VAR_8!=0 && VAR_9==0 && VAR_14==0 );
  FUNC_6( VAR_8!=0 && VAR_9==0 && VAR_14!=0 );
  FUNC_6( VAR_8!=0 && VAR_9!=0 && VAR_14==0 );
  FUNC_6( VAR_8!=0 && VAR_9!=0 && VAR_14!=0 );
}
