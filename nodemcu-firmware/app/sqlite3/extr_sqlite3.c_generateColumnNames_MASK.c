
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_17__ {int flags; scalar_t__ mallocFailed; } ;
typedef TYPE_3__ sqlite3 ;
typedef int Vdbe ;
struct TYPE_18__ {int iPKey; int nCol; int zName; TYPE_1__* aCol; } ;
typedef TYPE_4__ Table ;
struct TYPE_21__ {scalar_t__ op; int iColumn; int iTable; } ;
struct TYPE_20__ {int nExpr; TYPE_2__* a; } ;
struct TYPE_19__ {int colNamesSet; scalar_t__ explain; TYPE_3__* db; int * pVdbe; } ;
struct TYPE_16__ {char* zName; char const* zSpan; TYPE_7__* pExpr; } ;
struct TYPE_15__ {char* zName; } ;
typedef int SrcList ;
typedef TYPE_5__ Parse ;
typedef TYPE_6__ ExprList ;
typedef TYPE_7__ Expr ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_5__*,int *,TYPE_6__*) ;
 char const* FUNC_3 (TYPE_3__*,char const*) ;
 char const* FUNC_4 (TYPE_3__*,char*,int,...) ;
 int FUNC_5 (int *,int,int ,char const*,int ) ;
 int FUNC_6 (int *,int) ;
 TYPE_4__* FUNC_7 (int *,int ) ;

__attribute__((used)) static void FUNC_8(
  Parse *VAR_7,
  SrcList *VAR_8,
  ExprList *VAR_9
){
  Vdbe *VAR_10 = VAR_7->pVdbe;
  int VAR_11;
  Table *VAR_12;
  sqlite3 *VAR_13 = VAR_7->db;
  int VAR_14, VAR_15;



  if( VAR_7->explain ){
    return;
  }


  if( VAR_7->colNamesSet || VAR_13->mallocFailed ) return;
  FUNC_1( VAR_10!=0 );
  FUNC_1( VAR_8!=0 );
  VAR_7->colNamesSet = 1;
  VAR_14 = (VAR_13->flags & VAR_2)!=0;
  VAR_15 = (VAR_13->flags & VAR_3)!=0;
  FUNC_6(VAR_10, VAR_9->nExpr);
  for(VAR_11=0; VAR_11<VAR_9->nExpr; VAR_11++){
    Expr *VAR_16;
    VAR_16 = VAR_9->a[VAR_11].pExpr;
    if( FUNC_0(VAR_16==0) ) continue;
    if( VAR_9->a[VAR_11].zName ){
      char *VAR_17 = VAR_9->a[VAR_11].zName;
      FUNC_5(VAR_10, VAR_11, VAR_0, VAR_17, VAR_4);
    }else if( (VAR_16->op==VAR_6 || VAR_16->op==VAR_5)
           && (VAR_12 = FUNC_7(VAR_8, VAR_16->iTable))!=0
    ){
      char *VAR_18;
      int VAR_19 = VAR_16->iColumn;
      if( VAR_19<0 ) VAR_19 = VAR_12->iPKey;
      FUNC_1( VAR_19==-1 || (VAR_19>=0 && VAR_19<VAR_12->nCol) );
      if( VAR_19<0 ){
        VAR_18 = "rowid";
      }else{
        VAR_18 = VAR_12->aCol[VAR_19].zName;
      }
      if( !VAR_15 && !VAR_14 ){
        FUNC_5(VAR_10, VAR_11, VAR_0,
            FUNC_3(VAR_13, VAR_9->a[VAR_11].zSpan), VAR_1);
      }else if( VAR_14 ){
        char *VAR_20 = 0;
        VAR_20 = FUNC_4(VAR_13, "%s.%s", VAR_12->zName, VAR_18);
        FUNC_5(VAR_10, VAR_11, VAR_0, VAR_20, VAR_1);
      }else{
        FUNC_5(VAR_10, VAR_11, VAR_0, VAR_18, VAR_4);
      }
    }else{
      const char *VAR_21 = VAR_9->a[VAR_11].zSpan;
      VAR_21 = VAR_21==0 ? FUNC_4(VAR_13, "column%d", VAR_11+1) : FUNC_3(VAR_13, VAR_21);
      FUNC_5(VAR_10, VAR_11, VAR_0, VAR_21, VAR_1);
    }
  }
  FUNC_2(VAR_7, VAR_8, VAR_9);
}
