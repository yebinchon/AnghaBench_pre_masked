
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u8 ;
typedef int sqlite3 ;
struct TYPE_11__ {int wtFlags; int iParent; TYPE_3__* pWC; int pExpr; } ;
typedef TYPE_2__ WhereTerm ;
struct TYPE_12__ {scalar_t__ nTerm; scalar_t__ nSlot; TYPE_2__* a; TYPE_2__* aStatic; TYPE_1__* pParse; } ;
typedef TYPE_3__ WhereClause ;
struct TYPE_10__ {int * db; } ;
typedef int Expr ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,TYPE_2__*,int) ;
 int FUNC_1 (int *,TYPE_2__*) ;
 TYPE_2__* FUNC_2 (int *,int) ;
 int FUNC_3 (int *,TYPE_2__*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(WhereClause *VAR_2, Expr *VAR_3, u8 VAR_4){
  WhereTerm *VAR_5;
  int VAR_6;
  FUNC_6( VAR_4 & VAR_1 );
  if( VAR_2->nTerm>=VAR_2->nSlot ){
    WhereTerm *VAR_7 = VAR_2->a;
    sqlite3 *VAR_8 = VAR_2->pParse->db;
    VAR_2->a = FUNC_2(VAR_8, sizeof(VAR_2->a[0])*VAR_2->nSlot*2 );
    if( VAR_2->a==0 ){
      if( VAR_4 & VAR_0 ){
        FUNC_4(VAR_8, VAR_3);
      }
      VAR_2->a = VAR_7;
      return 0;
    }
    FUNC_0(VAR_2->a, VAR_7, sizeof(VAR_2->a[0])*VAR_2->nTerm);
    if( VAR_7!=VAR_2->aStatic ){
      FUNC_1(VAR_8, VAR_7);
    }
    VAR_2->nSlot = FUNC_3(VAR_8, VAR_2->a)/sizeof(VAR_2->a[0]);
  }
  VAR_5 = &VAR_2->a[VAR_6 = VAR_2->nTerm++];
  VAR_5->pExpr = FUNC_5(VAR_3);
  VAR_5->wtFlags = VAR_4;
  VAR_5->pWC = VAR_2;
  VAR_5->iParent = -1;
  return VAR_6;
}
