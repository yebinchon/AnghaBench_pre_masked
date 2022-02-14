
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_7__ ;
typedef struct TYPE_33__ TYPE_6__ ;
typedef struct TYPE_32__ TYPE_5__ ;
typedef struct TYPE_31__ TYPE_4__ ;
typedef struct TYPE_30__ TYPE_3__ ;
typedef struct TYPE_29__ TYPE_2__ ;
typedef struct TYPE_28__ TYPE_1__ ;


struct TYPE_30__ {int mallocFailed; } ;
typedef TYPE_3__ sqlite3 ;
struct TYPE_34__ {scalar_t__ op; int iTable; struct TYPE_34__* pRight; } ;
struct TYPE_33__ {int nExpr; TYPE_2__* a; } ;
struct TYPE_32__ {int nId; TYPE_1__* a; } ;
struct TYPE_31__ {TYPE_3__* db; } ;
struct TYPE_29__ {TYPE_7__* pExpr; scalar_t__ zName; } ;
struct TYPE_28__ {scalar_t__ zName; } ;
typedef TYPE_4__ Parse ;
typedef TYPE_5__ IdList ;
typedef TYPE_6__ ExprList ;
typedef TYPE_7__ Expr ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_4__*,char*,int,int) ;
 int FUNC_4 (TYPE_3__*,TYPE_7__*) ;
 TYPE_7__* FUNC_5 (TYPE_4__*,TYPE_7__*,int) ;
 TYPE_6__* FUNC_6 (TYPE_4__*,TYPE_6__*,TYPE_7__*) ;
 int FUNC_7 (TYPE_7__*) ;
 int FUNC_8 (TYPE_3__*,TYPE_5__*) ;
 int FUNC_9 (TYPE_4__*,TYPE_7__*) ;

ExprList *FUNC_10(
  Parse *VAR_3,
  ExprList *VAR_4,
  IdList *VAR_5,
  Expr *VAR_6
){
  sqlite3 *VAR_7 = VAR_3->db;
  int VAR_8;
  int VAR_9;
  int VAR_10 = VAR_4 ? VAR_4->nExpr : 0;


  if( FUNC_1(VAR_5==0) ) goto vector_append_error;
  if( VAR_6==0 ) goto vector_append_error;






  if( VAR_6->op!=VAR_1 && VAR_5->nId!=(VAR_8=FUNC_7(VAR_6)) ){
    FUNC_3(VAR_3, "%d columns assigned %d values",
                    VAR_5->nId, VAR_8);
    goto vector_append_error;
  }

  for(VAR_9=0; VAR_9<VAR_5->nId; VAR_9++){
    Expr *VAR_11 = FUNC_5(VAR_3, VAR_6, VAR_9);
    VAR_4 = FUNC_6(VAR_3, VAR_4, VAR_11);
    if( VAR_4 ){
      FUNC_2( VAR_4->nExpr==VAR_10+VAR_9+1 );
      VAR_4->a[VAR_4->nExpr-1].zName = VAR_5->a[VAR_9].zName;
      VAR_5->a[VAR_9].zName = 0;
    }
  }

  if( !VAR_7->mallocFailed && VAR_6->op==VAR_1 && FUNC_0(VAR_4!=0) ){
    Expr *VAR_12 = VAR_4->a[VAR_10].pExpr;
    FUNC_2( VAR_12!=0 );
    FUNC_2( VAR_12->op==VAR_2 );



    VAR_12->pRight = VAR_6;
    VAR_6 = 0;



    VAR_12->iTable = VAR_5->nId;
  }

vector_append_error:
  if( VAR_0 ){
    FUNC_9(VAR_3, VAR_6);
  }
  FUNC_4(VAR_7, VAR_6);
  FUNC_8(VAR_7, VAR_5);
  return VAR_4;
}
