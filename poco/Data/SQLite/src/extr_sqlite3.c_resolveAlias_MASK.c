
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef int sqlite3 ;
struct TYPE_22__ {int zToken; } ;
struct TYPE_25__ {scalar_t__ op; int flags; TYPE_2__ u; } ;
struct TYPE_24__ {int nExpr; TYPE_1__* a; } ;
struct TYPE_23__ {int * db; } ;
struct TYPE_21__ {TYPE_5__* pExpr; } ;
typedef TYPE_3__ Parse ;
typedef TYPE_4__ ExprList ;
typedef TYPE_5__ Expr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_5__*,int ) ;
 int FUNC_1 (TYPE_5__*,int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_5__*,int) ;
 int FUNC_4 (TYPE_5__*,TYPE_5__*,int) ;
 int FUNC_5 (int *,TYPE_5__*) ;
 int FUNC_6 (int *,int ) ;
 TYPE_5__* FUNC_7 (TYPE_3__*,TYPE_5__*,int ) ;
 int FUNC_8 (int *,TYPE_5__*) ;
 TYPE_5__* FUNC_9 (int *,TYPE_5__*,int ) ;

__attribute__((used)) static void FUNC_10(
  Parse *VAR_7,
  ExprList *VAR_8,
  int VAR_9,
  Expr *VAR_10,
  const char *VAR_11,
  int VAR_12
){
  Expr *VAR_13;
  Expr *VAR_14;
  sqlite3 *VAR_15;

  FUNC_2( VAR_9>=0 && VAR_9<VAR_8->nExpr );
  VAR_13 = VAR_8->a[VAR_9].pExpr;
  FUNC_2( VAR_13!=0 );
  VAR_15 = VAR_7->db;
  VAR_14 = FUNC_9(VAR_15, VAR_13, 0);
  if( VAR_14!=0 ){
    if( VAR_11[0]!='G' ) FUNC_3(VAR_14, VAR_12);
    if( VAR_10->op==VAR_6 ){
      VAR_14 = FUNC_7(VAR_7, VAR_14, VAR_10->u.zToken);
    }
    FUNC_1(VAR_10, VAR_4);
    FUNC_8(VAR_15, VAR_10);
    FUNC_4(VAR_10, VAR_14, sizeof(*VAR_10));
    if( !FUNC_0(VAR_10, VAR_1) && VAR_10->u.zToken!=0 ){
      FUNC_2( (VAR_10->flags & (VAR_3|VAR_5))==0 );
      VAR_10->u.zToken = FUNC_6(VAR_15, VAR_10->u.zToken);
      VAR_10->flags |= VAR_2;
    }
    FUNC_5(VAR_15, VAR_14);
  }
  FUNC_1(VAR_10, VAR_0);
}
