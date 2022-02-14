
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_17__ {int op; int iAgg; int nHeight; } ;
struct TYPE_16__ {scalar_t__ nErr; int db; } ;
typedef TYPE_1__ Parse ;
typedef TYPE_2__ Expr ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ,int) ;
 TYPE_2__* FUNC_1 (int ,int) ;
 TYPE_2__* FUNC_2 (int ,TYPE_2__*,TYPE_2__*) ;
 int FUNC_3 (int ,TYPE_2__*,TYPE_2__*,TYPE_2__*) ;
 int FUNC_4 (TYPE_1__*,int ) ;

Expr *FUNC_5(
  Parse *VAR_2,
  int VAR_3,
  Expr *VAR_4,
  Expr *VAR_5
){
  Expr *VAR_6;
  if( VAR_3==VAR_1 && VAR_2->nErr==0 && !VAR_0 ){

    VAR_6 = FUNC_2(VAR_2->db, VAR_4, VAR_5);
  }else{
    VAR_6 = FUNC_1(VAR_2->db, sizeof(Expr));
    if( VAR_6 ){
      FUNC_0(VAR_6, 0, sizeof(Expr));
      VAR_6->op = VAR_3 & 0xff;
      VAR_6->iAgg = -1;
    }
    FUNC_3(VAR_2->db, VAR_6, VAR_4, VAR_5);
  }
  if( VAR_6 ) {
    FUNC_4(VAR_2, VAR_6->nHeight);
  }
  return VAR_6;
}
