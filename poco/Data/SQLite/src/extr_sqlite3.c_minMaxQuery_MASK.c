
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_16__ {scalar_t__ mallocFailed; } ;
typedef TYPE_4__ sqlite3 ;
struct TYPE_14__ {char* zToken; } ;
struct TYPE_13__ {TYPE_5__* pList; } ;
struct TYPE_18__ {scalar_t__ op; TYPE_2__ u; TYPE_1__ x; } ;
struct TYPE_17__ {int nExpr; TYPE_3__* a; } ;
struct TYPE_15__ {int sortOrder; } ;
typedef TYPE_5__ ExprList ;
typedef TYPE_6__ Expr ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 TYPE_5__* FUNC_1 (TYPE_4__*,TYPE_5__*,int ) ;
 scalar_t__ FUNC_2 (char const*,char*) ;

__attribute__((used)) static u8 FUNC_3(sqlite3 *VAR_6, Expr *VAR_7, ExprList **VAR_8){
  int VAR_9 = VAR_5;
  ExprList *VAR_10 = VAR_7->x.pList;
  const char *VAR_11;
  ExprList *VAR_12;
  u8 VAR_13;

  FUNC_0( *VAR_8==0 );
  FUNC_0( VAR_7->op==VAR_2 );
  if( VAR_10==0 || VAR_10->nExpr!=1 ) return VAR_9;
  VAR_11 = VAR_7->u.zToken;
  if( FUNC_2(VAR_11, "min")==0 ){
    VAR_9 = VAR_4;
    VAR_13 = VAR_0;
  }else if( FUNC_2(VAR_11, "max")==0 ){
    VAR_9 = VAR_3;
    VAR_13 = VAR_1;
  }else{
    return VAR_9;
  }
  *VAR_8 = VAR_12 = FUNC_1(VAR_6, VAR_10, 0);
  FUNC_0( VAR_12!=0 || VAR_6->mallocFailed );
  if( VAR_12 ) VAR_12->a[0].sortOrder = VAR_13;
  return VAR_9;
}
