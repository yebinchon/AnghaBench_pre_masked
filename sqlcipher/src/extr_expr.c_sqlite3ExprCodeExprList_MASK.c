
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_12__ {int iOrderByCol; } ;
struct TYPE_13__ {TYPE_1__ x; } ;
struct ExprList_item {TYPE_2__ u; scalar_t__ bSorterRef; int * pExpr; } ;
struct TYPE_14__ {int opcode; int p1; int p3; int p2; } ;
typedef TYPE_3__ VdbeOp ;
typedef int Vdbe ;
struct TYPE_16__ {int nExpr; struct ExprList_item* a; } ;
struct TYPE_15__ {int * pVdbe; } ;
typedef TYPE_4__ Parse ;
typedef TYPE_5__ ExprList ;
typedef int Expr ;


 int FUNC_0 (TYPE_4__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_4__*,int *,int) ;
 int FUNC_3 (TYPE_4__*,int *,int) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,int,int,int) ;
 TYPE_3__* FUNC_6 (int *,int) ;

int FUNC_7(
  Parse *VAR_6,
  ExprList *VAR_7,
  int VAR_8,
  int VAR_9,
  u8 VAR_10
){
  struct ExprList_item *VAR_11;
  int VAR_12, VAR_13, VAR_14;
  u8 VAR_15 = (VAR_10 & VAR_2) ? VAR_0 : VAR_1;
  Vdbe *VAR_16 = VAR_6->pVdbe;
  FUNC_1( VAR_7!=0 );
  FUNC_1( VAR_8>0 );
  FUNC_1( VAR_6->pVdbe!=0 );
  VAR_14 = VAR_7->nExpr;
  if( !FUNC_0(VAR_6) ) VAR_10 &= ~VAR_3;
  for(VAR_11=VAR_7->a, VAR_12=0; VAR_12<VAR_14; VAR_12++, VAR_11++){
    Expr *VAR_17 = VAR_11->pExpr;






    if( (VAR_10 & VAR_5)!=0 && (VAR_13 = VAR_11->u.x.iOrderByCol)>0 ){
      if( VAR_10 & VAR_4 ){
        VAR_12--;
        VAR_14--;
      }else{
        FUNC_5(VAR_16, VAR_15, VAR_13+VAR_9-1, VAR_8+VAR_12);
      }
    }else if( (VAR_10 & VAR_3)!=0
           && FUNC_4(VAR_17)
    ){
      FUNC_2(VAR_6, VAR_17, VAR_8+VAR_12);
    }else{
      int VAR_18 = FUNC_3(VAR_6, VAR_17, VAR_8+VAR_12);
      if( VAR_18!=VAR_8+VAR_12 ){
        VdbeOp *VAR_19;
        if( VAR_15==VAR_0
         && (VAR_19=FUNC_6(VAR_16, -1))->opcode==VAR_0
         && VAR_19->p1+VAR_19->p3+1==VAR_18
         && VAR_19->p2+VAR_19->p3+1==VAR_8+VAR_12
        ){
          VAR_19->p3++;
        }else{
          FUNC_5(VAR_16, VAR_15, VAR_18, VAR_8+VAR_12);
        }
      }
    }
  }
  return VAR_14;
}
