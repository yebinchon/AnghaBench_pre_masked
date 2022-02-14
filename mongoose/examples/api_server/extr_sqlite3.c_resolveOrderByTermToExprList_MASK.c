
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_12__ {int suppressErr; } ;
typedef TYPE_2__ sqlite3 ;
typedef int nc ;
struct TYPE_16__ {int nExpr; TYPE_1__* a; } ;
struct TYPE_15__ {scalar_t__ nErr; int ncFlags; TYPE_6__* pEList; int pSrcList; TYPE_4__* pParse; } ;
struct TYPE_14__ {TYPE_2__* db; } ;
struct TYPE_13__ {int pSrc; TYPE_6__* pEList; } ;
struct TYPE_11__ {int pExpr; } ;
typedef TYPE_3__ Select ;
typedef TYPE_4__ Parse ;
typedef TYPE_5__ NameContext ;
typedef TYPE_6__ ExprList ;
typedef int Expr ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_5__*,int ,int) ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int *,int*) ;
 int FUNC_4 (TYPE_5__*,int *) ;

__attribute__((used)) static int FUNC_5(
  Parse *VAR_1,
  Select *VAR_2,
  Expr *VAR_3
){
  int VAR_4;
  ExprList *VAR_5;
  NameContext VAR_6;
  sqlite3 *VAR_7;
  int VAR_8;
  u8 VAR_9;

  FUNC_0( FUNC_3(VAR_3, &VAR_4)==0 );
  VAR_5 = VAR_2->pEList;



  FUNC_1(&VAR_6, 0, sizeof(VAR_6));
  VAR_6.pParse = VAR_1;
  VAR_6.pSrcList = VAR_2->pSrc;
  VAR_6.pEList = VAR_5;
  VAR_6.ncFlags = VAR_0;
  VAR_6.nErr = 0;
  VAR_7 = VAR_1->db;
  VAR_9 = VAR_7->suppressErr;
  VAR_7->suppressErr = 1;
  VAR_8 = FUNC_4(&VAR_6, VAR_3);
  VAR_7->suppressErr = VAR_9;
  if( VAR_8 ) return 0;





  for(VAR_4=0; VAR_4<VAR_5->nExpr; VAR_4++){
    if( FUNC_2(VAR_5->a[VAR_4].pExpr, VAR_3)<2 ){
      return VAR_4+1;
    }
  }


  return 0;
}
