
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_21__ {int tabFlags; int nCol; int iPKey; scalar_t__ keyConf; TYPE_7__* aCol; int zName; } ;
typedef TYPE_3__ Table ;
struct TYPE_25__ {char* zName; int colFlags; } ;
struct TYPE_19__ {char* zToken; } ;
struct TYPE_24__ {scalar_t__ op; TYPE_1__ u; } ;
struct TYPE_23__ {int nExpr; TYPE_2__* a; } ;
struct TYPE_22__ {int db; int iPkSortOrder; TYPE_3__* pNewTable; } ;
struct TYPE_20__ {int sortOrder; int pExpr; } ;
typedef TYPE_4__ Parse ;
typedef TYPE_5__ ExprList ;
typedef TYPE_6__ Expr ;
typedef TYPE_7__ Column ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int) ;
 char const* FUNC_1 (TYPE_7__*,char*) ;
 int FUNC_2 (TYPE_4__*,int ,int ,int ,TYPE_5__*,int,int ,int ,int,int ,int ) ;
 int FUNC_3 (TYPE_4__*,char*,...) ;
 int FUNC_4 (int ,TYPE_5__*) ;
 TYPE_6__* FUNC_5 (int ) ;
 int FUNC_6 (TYPE_4__*,int*,TYPE_6__*) ;
 scalar_t__ FUNC_7 (char const*,char*) ;
 int FUNC_8 (TYPE_6__*) ;

void FUNC_9(
  Parse *VAR_7,
  ExprList *VAR_8,
  int VAR_9,
  int VAR_10,
  int VAR_11
){
  Table *VAR_12 = VAR_7->pNewTable;
  Column *VAR_13 = 0;
  int VAR_14 = -1, VAR_15;
  int VAR_16;
  if( VAR_12==0 ) goto primary_key_exit;
  if( VAR_12->tabFlags & VAR_5 ){
    FUNC_3(VAR_7,
      "table \"%s\" has more than one primary key", VAR_12->zName);
    goto primary_key_exit;
  }
  VAR_12->tabFlags |= VAR_5;
  if( VAR_8==0 ){
    VAR_14 = VAR_12->nCol - 1;
    VAR_13 = &VAR_12->aCol[VAR_14];
    VAR_13->colFlags |= VAR_0;
    VAR_16 = 1;
  }else{
    VAR_16 = VAR_8->nExpr;
    for(VAR_15=0; VAR_15<VAR_16; VAR_15++){
      Expr *VAR_17 = FUNC_5(VAR_8->a[VAR_15].pExpr);
      FUNC_0( VAR_17!=0 );
      FUNC_8(VAR_17);
      if( VAR_17->op==VAR_6 ){
        const char *VAR_18 = VAR_17->u.zToken;
        for(VAR_14=0; VAR_14<VAR_12->nCol; VAR_14++){
          if( FUNC_7(VAR_18, VAR_12->aCol[VAR_14].zName)==0 ){
            VAR_13 = &VAR_12->aCol[VAR_14];
            VAR_13->colFlags |= VAR_0;
            break;
          }
        }
      }
    }
  }
  if( VAR_16==1
   && VAR_13
   && FUNC_7(FUNC_1(VAR_13,""), "INTEGER")==0
   && VAR_11!=VAR_3
  ){
    if( VAR_1 && VAR_8 ){
      Expr *VAR_19 = FUNC_5(VAR_8->a[0].pExpr);
      FUNC_6(VAR_7, &VAR_12->iPKey, VAR_19);
    }
    VAR_12->iPKey = VAR_14;
    VAR_12->keyConf = (u8)VAR_9;
    FUNC_0( VAR_10==0 || VAR_10==1 );
    VAR_12->tabFlags |= VAR_10*VAR_4;
    if( VAR_8 ) VAR_7->iPkSortOrder = VAR_8->a[0].sortOrder;
  }else if( VAR_10 ){

    FUNC_3(VAR_7, "AUTOINCREMENT is only allowed on an "
       "INTEGER PRIMARY KEY");

  }else{
    FUNC_2(VAR_7, 0, 0, 0, VAR_8, VAR_9, 0,
                           0, VAR_11, 0, VAR_2);
    VAR_8 = 0;
  }

primary_key_exit:
  FUNC_4(VAR_7->db, VAR_8);
  return;
}
