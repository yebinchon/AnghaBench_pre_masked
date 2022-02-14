
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct ExprList_item {int * pExpr; } ;
struct TYPE_17__ {scalar_t__ mallocFailed; } ;
typedef TYPE_2__ sqlite3 ;
typedef int sNC ;
struct TYPE_22__ {int zName; } ;
struct TYPE_21__ {scalar_t__ affinity; void* zColl; void* zType; } ;
struct TYPE_20__ {int pSrcList; } ;
struct TYPE_19__ {TYPE_2__* db; } ;
struct TYPE_18__ {int selFlags; TYPE_1__* pEList; int pSrc; } ;
struct TYPE_16__ {int nExpr; struct ExprList_item* a; } ;
typedef TYPE_3__ Select ;
typedef TYPE_4__ Parse ;
typedef TYPE_5__ NameContext ;
typedef int Expr ;
typedef TYPE_6__ Column ;
typedef TYPE_7__ CollSeq ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_5__*,int *,int ,int ,int ) ;
 int FUNC_2 (TYPE_5__*,int ,int) ;
 void* FUNC_3 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 TYPE_7__* FUNC_5 (TYPE_4__*,int *) ;

__attribute__((used)) static void FUNC_6(
  Parse *VAR_2,
  int VAR_3,
  Column *VAR_4,
  Select *VAR_5
){
  sqlite3 *VAR_6 = VAR_2->db;
  NameContext VAR_7;
  Column *VAR_8;
  CollSeq *VAR_9;
  int VAR_10;
  Expr *VAR_11;
  struct ExprList_item *VAR_12;

  FUNC_0( VAR_5!=0 );
  FUNC_0( (VAR_5->selFlags & VAR_0)!=0 );
  FUNC_0( VAR_3==VAR_5->pEList->nExpr || VAR_6->mallocFailed );
  if( VAR_6->mallocFailed ) return;
  FUNC_2(&VAR_7, 0, sizeof(VAR_7));
  VAR_7.pSrcList = VAR_5->pSrc;
  VAR_12 = VAR_5->pEList->a;
  for(VAR_10=0, VAR_8=VAR_4; VAR_10<VAR_3; VAR_10++, VAR_8++){
    VAR_11 = VAR_12[VAR_10].pExpr;
    VAR_8->zType = FUNC_3(VAR_6, FUNC_1(&VAR_7, VAR_11, 0, 0, 0));
    VAR_8->affinity = FUNC_4(VAR_11);
    if( VAR_8->affinity==0 ) VAR_8->affinity = VAR_1;
    VAR_9 = FUNC_5(VAR_2, VAR_11);
    if( VAR_9 ){
      VAR_8->zColl = FUNC_3(VAR_6, VAR_9->zName);
    }
  }
}
