
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int u8 ;
typedef int sqlite3_value ;
typedef int sqlite3 ;
typedef int Vdbe ;
struct TYPE_21__ {char* zToken; } ;
struct TYPE_19__ {TYPE_5__* pList; } ;
struct TYPE_24__ {int op; int iColumn; TYPE_3__ u; int pTab; TYPE_1__ x; } ;
struct TYPE_23__ {TYPE_2__* a; } ;
struct TYPE_22__ {int * pVdbe; int * pReprepare; int * db; } ;
struct TYPE_20__ {TYPE_6__* pExpr; } ;
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
 TYPE_6__* FUNC_5 (TYPE_6__*) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (int *,TYPE_6__*,int*,char*) ;
 scalar_t__ FUNC_8 (char const) ;
 int FUNC_9 (TYPE_4__*,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,scalar_t__,int ) ;
 scalar_t__ FUNC_12 (int *) ;
 int * FUNC_13 (int *,int,int ) ;
 int FUNC_14 (int *,int) ;
 scalar_t__ FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (int *) ;

__attribute__((used)) static int FUNC_17(
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
  int VAR_22;

  if( !FUNC_7(VAR_19, VAR_8, VAR_11, VAR_18) ){
    return 0;
  }



  VAR_15 = VAR_8->x.pList;
  VAR_14 = VAR_15->a[1].pExpr;

  VAR_13 = FUNC_5(VAR_15->a[0].pExpr);
  VAR_21 = VAR_13->op;
  if( VAR_21==VAR_6 ){
    Vdbe *VAR_23 = VAR_7->pReprepare;
    int VAR_24 = VAR_13->iColumn;
    VAR_20 = FUNC_13(VAR_23, VAR_24, VAR_0);
    if( VAR_20 && FUNC_16(VAR_20)==VAR_2 ){
      VAR_12 = (char *)FUNC_15(VAR_20);
    }
    FUNC_14(VAR_7->pVdbe, VAR_24);
    FUNC_1( VAR_13->op==VAR_6 || VAR_13->op==VAR_4 );
  }else if( VAR_21==VAR_5 ){
    VAR_12 = VAR_13->u.zToken;
  }
  if( VAR_12 ){
    if( FUNC_8(VAR_12[0]) || VAR_12[0]=='-' ){
      if( VAR_14->op!=VAR_3
       || FUNC_3(VAR_14)!=VAR_1
       || FUNC_0(VAR_14->pTab)
      ){
        FUNC_10(VAR_20);
        return 0;
      }
    }
    VAR_17 = 0;
    while( (VAR_16=VAR_12[VAR_17])!=0 && VAR_16!=VAR_18[0] && VAR_16!=VAR_18[1] && VAR_16!=VAR_18[2] ){
      VAR_17++;
    }
    if( VAR_17!=0 && 255!=(u8)VAR_12[VAR_17-1] ){
      Expr *VAR_25;
      *VAR_10 = VAR_16==VAR_18[0] && VAR_12[VAR_17+1]==0;
      VAR_25 = FUNC_2(VAR_19, VAR_5, VAR_12);
      if( VAR_25 ) VAR_25->u.zToken[VAR_17] = 0;
      *VAR_9 = VAR_25;
      if( VAR_21==VAR_6 ){
        Vdbe *VAR_26 = VAR_7->pVdbe;
        FUNC_14(VAR_26, VAR_13->iColumn);
        if( *VAR_10 && VAR_13->u.zToken[1] ){






          int VAR_27 = FUNC_6(VAR_7);
          FUNC_4(VAR_7, VAR_13, VAR_27);
          FUNC_11(VAR_26, FUNC_12(VAR_26)-1, 0);
          FUNC_9(VAR_7, VAR_27);
        }
      }
    }else{
      VAR_12 = 0;
    }
  }

  VAR_22 = (VAR_12!=0);
  FUNC_10(VAR_20);
  return VAR_22;
}
