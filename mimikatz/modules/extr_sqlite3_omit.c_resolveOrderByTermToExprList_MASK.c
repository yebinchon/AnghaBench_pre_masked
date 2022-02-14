
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_14__ {int suppressErr; } ;
typedef TYPE_3__ sqlite3 ;
typedef int nc ;
struct TYPE_18__ {int nExpr; TYPE_2__* a; } ;
struct TYPE_12__ {TYPE_7__* pEList; } ;
struct TYPE_17__ {int ncFlags; scalar_t__ nErr; TYPE_1__ uNC; int pSrcList; TYPE_5__* pParse; } ;
struct TYPE_16__ {TYPE_3__* db; } ;
struct TYPE_15__ {int pSrc; TYPE_7__* pEList; } ;
struct TYPE_13__ {int pExpr; } ;
typedef TYPE_4__ Select ;
typedef TYPE_5__ Parse ;
typedef TYPE_6__ NameContext ;
typedef TYPE_7__ ExprList ;
typedef int Expr ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_6__*,int ,int) ;
 int FUNC_2 (int ,int ,int *,int) ;
 scalar_t__ FUNC_3 (int *,int*) ;
 int FUNC_4 (TYPE_6__*,int *) ;

__attribute__((used)) static int FUNC_5(
  Parse *VAR_2,
  Select *VAR_3,
  Expr *VAR_4
){
  int VAR_5;
  ExprList *VAR_6;
  NameContext VAR_7;
  sqlite3 *VAR_8;
  int VAR_9;
  u8 VAR_10;

  FUNC_0( FUNC_3(VAR_4, &VAR_5)==0 );
  VAR_6 = VAR_3->pEList;



  FUNC_1(&VAR_7, 0, sizeof(VAR_7));
  VAR_7.pParse = VAR_2;
  VAR_7.pSrcList = VAR_3->pSrc;
  VAR_7.uNC.pEList = VAR_6;
  VAR_7.ncFlags = VAR_0|VAR_1;
  VAR_7.nErr = 0;
  VAR_8 = VAR_2->db;
  VAR_10 = VAR_8->suppressErr;
  VAR_8->suppressErr = 1;
  VAR_9 = FUNC_4(&VAR_7, VAR_4);
  VAR_8->suppressErr = VAR_10;
  if( VAR_9 ) return 0;





  for(VAR_5=0; VAR_5<VAR_6->nExpr; VAR_5++){
    if( FUNC_2(0, VAR_6->a[VAR_5].pExpr, VAR_4, -1)<2 ){
      return VAR_5+1;
    }
  }


  return 0;
}
