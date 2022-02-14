
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int u8 ;
typedef int sqlite3_value ;
typedef int sqlite3 ;
typedef int Vdbe ;
struct TYPE_19__ {char* zToken; } ;
struct TYPE_17__ {TYPE_5__* pList; } ;
struct TYPE_22__ {scalar_t__ op; int iColumn; int op2; TYPE_3__ u; int pTab; TYPE_1__ x; } ;
struct TYPE_21__ {TYPE_2__* a; } ;
struct TYPE_20__ {int * pVdbe; int * pReprepare; int * db; } ;
struct TYPE_18__ {TYPE_6__* pExpr; } ;
typedef TYPE_4__ Parse ;
typedef TYPE_5__ ExprList ;
typedef TYPE_6__ Expr ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 TYPE_6__* FUNC_2 (int *,int,char const*) ;
 scalar_t__ FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (TYPE_4__*,TYPE_6__*,int) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (int *,TYPE_6__*,int*,char*) ;
 int FUNC_7 (TYPE_4__*,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,scalar_t__,int ) ;
 scalar_t__ FUNC_10 (int *) ;
 int * FUNC_11 (int *,int,int ) ;
 int FUNC_12 (int *,int) ;
 scalar_t__ FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int *) ;

__attribute__((used)) static int FUNC_15(
  Parse *VAR_7,
  Expr *VAR_8,
  Expr **VAR_9,
  int *VAR_10,
  int *VAR_11
){
  const char *VAR_12 = 0;
  Expr *VAR_13, *VAR_14;
  ExprList *VAR_15;
  int VAR_16;
  int VAR_17;
  char VAR_18[3];
  sqlite3 *VAR_19 = VAR_7->db;
  sqlite3_value *VAR_20 = 0;
  int VAR_21;

  if( !FUNC_6(VAR_19, VAR_8, VAR_11, VAR_18) ){
    return 0;
  }



  VAR_15 = VAR_8->x.pList;
  VAR_14 = VAR_15->a[1].pExpr;
  if( VAR_14->op!=VAR_3
   || FUNC_3(VAR_14)!=VAR_1
   || FUNC_0(VAR_14->pTab)
  ){


    return 0;
  }
  FUNC_1( VAR_14->iColumn!=(-1) );

  VAR_13 = VAR_15->a[0].pExpr;
  VAR_21 = VAR_13->op;
  if( VAR_21==VAR_4 ){
    VAR_21 = VAR_13->op2;
  }
  if( VAR_21==VAR_6 ){
    Vdbe *VAR_22 = VAR_7->pReprepare;
    int VAR_23 = VAR_13->iColumn;
    VAR_20 = FUNC_11(VAR_22, VAR_23, VAR_0);
    if( VAR_20 && FUNC_14(VAR_20)==VAR_2 ){
      VAR_12 = (char *)FUNC_13(VAR_20);
    }
    FUNC_12(VAR_7->pVdbe, VAR_23);
    FUNC_1( VAR_13->op==VAR_6 || VAR_13->op==VAR_4 );
  }else if( VAR_21==VAR_5 ){
    VAR_12 = VAR_13->u.zToken;
  }
  if( VAR_12 ){
    VAR_17 = 0;
    while( (VAR_16=VAR_12[VAR_17])!=0 && VAR_16!=VAR_18[0] && VAR_16!=VAR_18[1] && VAR_16!=VAR_18[2] ){
      VAR_17++;
    }
    if( VAR_17!=0 && 255!=(u8)VAR_12[VAR_17-1] ){
      Expr *VAR_24;
      *VAR_10 = VAR_16==VAR_18[0] && VAR_12[VAR_17+1]==0;
      VAR_24 = FUNC_2(VAR_19, VAR_5, VAR_12);
      if( VAR_24 ) VAR_24->u.zToken[VAR_17] = 0;
      *VAR_9 = VAR_24;
      if( VAR_21==VAR_6 ){
        Vdbe *VAR_25 = VAR_7->pVdbe;
        FUNC_12(VAR_25, VAR_13->iColumn);
        if( *VAR_10 && VAR_13->u.zToken[1] ){






          int VAR_26 = FUNC_5(VAR_7);
          FUNC_4(VAR_7, VAR_13, VAR_26);
          FUNC_9(VAR_25, FUNC_10(VAR_25)-1, 0);
          FUNC_7(VAR_7, VAR_26);
        }
      }
    }else{
      VAR_12 = 0;
    }
  }

  FUNC_8(VAR_20);
  return (VAR_12!=0);
}
