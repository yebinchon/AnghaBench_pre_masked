
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct ExprList_item {int * pExpr; } ;
struct TYPE_19__ {scalar_t__ mallocFailed; } ;
typedef TYPE_2__ sqlite3 ;
typedef int sNC ;
struct TYPE_20__ {int nCol; int szTabRow; TYPE_7__* aCol; } ;
typedef TYPE_3__ Table ;
struct TYPE_25__ {int zName; } ;
struct TYPE_24__ {scalar_t__ affinity; char const* zName; scalar_t__ zColl; int colFlags; } ;
struct TYPE_23__ {int pSrcList; } ;
struct TYPE_22__ {TYPE_2__* db; } ;
struct TYPE_21__ {int selFlags; TYPE_1__* pEList; int pSrc; } ;
struct TYPE_18__ {int nExpr; struct ExprList_item* a; } ;
typedef TYPE_4__ Select ;
typedef TYPE_5__ Parse ;
typedef TYPE_6__ NameContext ;
typedef int Expr ;
typedef TYPE_7__ Column ;
typedef TYPE_8__ CollSeq ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 char* FUNC_1 (TYPE_6__*,int *,int ,int ,int ) ;
 int FUNC_2 (char const*,char const*,int) ;
 int FUNC_3 (TYPE_6__*,int ,int) ;
 char const* FUNC_4 (TYPE_2__*,char const*,int) ;
 scalar_t__ FUNC_5 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_6 (int *) ;
 TYPE_8__* FUNC_7 (TYPE_5__*,int *) ;
 int FUNC_8 (char const*) ;

void FUNC_9(
  Parse *VAR_3,
  Table *VAR_4,
  Select *VAR_5
){
  sqlite3 *VAR_6 = VAR_3->db;
  NameContext VAR_7;
  Column *VAR_8;
  CollSeq *VAR_9;
  int VAR_10;
  Expr *VAR_11;
  struct ExprList_item *VAR_12;

  FUNC_0( VAR_5!=0 );
  FUNC_0( (VAR_5->selFlags & VAR_1)!=0 );
  FUNC_0( VAR_4->nCol==VAR_5->pEList->nExpr || VAR_6->mallocFailed );
  if( VAR_6->mallocFailed ) return;
  FUNC_3(&VAR_7, 0, sizeof(VAR_7));
  VAR_7.pSrcList = VAR_5->pSrc;
  VAR_12 = VAR_5->pEList->a;
  for(VAR_10=0, VAR_8=VAR_4->aCol; VAR_10<VAR_4->nCol; VAR_10++, VAR_8++){
    const char *VAR_13;
    int VAR_14, VAR_15;
    VAR_11 = VAR_12[VAR_10].pExpr;
    VAR_13 = FUNC_1(&VAR_7, VAR_11, 0, 0, 0);

    VAR_8->affinity = FUNC_6(VAR_11);
    if( VAR_13 ){
      VAR_15 = FUNC_8(VAR_13);
      VAR_14 = FUNC_8(VAR_8->zName);
      VAR_8->zName = FUNC_4(VAR_6, VAR_8->zName, VAR_14+VAR_15+2);
      if( VAR_8->zName ){
        FUNC_2(&VAR_8->zName[VAR_14+1], VAR_13, VAR_15+1);
        VAR_8->colFlags |= VAR_0;
      }
    }
    if( VAR_8->affinity==0 ) VAR_8->affinity = VAR_2;
    VAR_9 = FUNC_7(VAR_3, VAR_11);
    if( VAR_9 && VAR_8->zColl==0 ){
      VAR_8->zColl = FUNC_5(VAR_6, VAR_9->zName);
    }
  }
  VAR_4->szTabRow = 1;
}
