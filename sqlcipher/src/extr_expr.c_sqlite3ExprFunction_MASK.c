
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_19__ {scalar_t__* aLimit; } ;
typedef TYPE_2__ sqlite3 ;
typedef int Token ;
struct TYPE_18__ {TYPE_4__* pList; } ;
struct TYPE_22__ {TYPE_1__ x; } ;
struct TYPE_21__ {scalar_t__ nExpr; } ;
struct TYPE_20__ {TYPE_2__* db; } ;
typedef TYPE_3__ Parse ;
typedef TYPE_4__ ExprList ;
typedef TYPE_5__ Expr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_5__*,int ) ;
 int FUNC_1 (TYPE_5__*,int ) ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_3__*,char*,int *) ;
 TYPE_5__* FUNC_4 (TYPE_2__*,int ,int *,int) ;
 int FUNC_5 (TYPE_2__*,TYPE_4__*) ;
 int FUNC_6 (TYPE_3__*,TYPE_5__*) ;

Expr *FUNC_7(
  Parse *VAR_6,
  ExprList *VAR_7,
  Token *VAR_8,
  int VAR_9
){
  Expr *VAR_10;
  sqlite3 *VAR_11 = VAR_6->db;
  FUNC_2( *VAR_8 );
  VAR_10 = FUNC_4(VAR_11, VAR_5, VAR_8, 1);
  if( VAR_10==0 ){
    FUNC_5(VAR_11, VAR_7);
    return 0;
  }
  if( VAR_7 && VAR_7->nExpr > VAR_6->db->aLimit[VAR_4] ){
    FUNC_3(VAR_6, "too many arguments on function %T", VAR_8);
  }
  VAR_10->x.pList = VAR_7;
  FUNC_1(VAR_10, VAR_1);
  FUNC_2( !FUNC_0(VAR_10, VAR_2) );
  FUNC_6(VAR_6, VAR_10);
  if( VAR_9==VAR_3 ) FUNC_1(VAR_10, VAR_0);
  return VAR_10;
}
