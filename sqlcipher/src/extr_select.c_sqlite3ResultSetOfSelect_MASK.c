
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_19__ {int bDisable; } ;
struct TYPE_20__ {scalar_t__ mallocFailed; TYPE_1__ lookaside; int flags; } ;
typedef TYPE_2__ sqlite3 ;
struct TYPE_21__ {int nTabRef; int nRowLogEst; int iPKey; int aCol; int nCol; scalar_t__ zName; } ;
typedef TYPE_3__ Table ;
struct TYPE_23__ {scalar_t__ nErr; TYPE_2__* db; } ;
struct TYPE_22__ {int pEList; struct TYPE_22__* pPrior; } ;
typedef TYPE_4__ Select ;
typedef TYPE_5__ Parse ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_5__*,int ,int *,int *) ;
 TYPE_3__* FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_5__*,TYPE_3__*,TYPE_4__*) ;
 int FUNC_6 (TYPE_5__*,TYPE_4__*,int ) ;

Table *FUNC_7(Parse *VAR_2, Select *VAR_3){
  Table *VAR_4;
  sqlite3 *VAR_5 = VAR_2->db;
  u64 VAR_6;

  VAR_6 = VAR_5->flags;
  VAR_5->flags &= ~(u64)VAR_0;
  VAR_5->flags |= VAR_1;
  FUNC_6(VAR_2, VAR_3, 0);
  VAR_5->flags = VAR_6;
  if( VAR_2->nErr ) return 0;
  while( VAR_3->pPrior ) VAR_3 = VAR_3->pPrior;
  VAR_4 = FUNC_2(VAR_5, sizeof(Table) );
  if( VAR_4==0 ){
    return 0;
  }


  FUNC_0( VAR_5->lookaside.bDisable );
  VAR_4->nTabRef = 1;
  VAR_4->zName = 0;
  VAR_4->nRowLogEst = 200; FUNC_0( 200==FUNC_4(1048576) );
  FUNC_1(VAR_2, VAR_3->pEList, &VAR_4->nCol, &VAR_4->aCol);
  FUNC_5(VAR_2, VAR_4, VAR_3);
  VAR_4->iPKey = -1;
  if( VAR_5->mallocFailed ){
    FUNC_3(VAR_5, VAR_4);
    return 0;
  }
  return VAR_4;
}
