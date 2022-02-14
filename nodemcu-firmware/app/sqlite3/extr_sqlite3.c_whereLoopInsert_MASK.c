
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


typedef int u16 ;
typedef int sqlite3 ;
struct TYPE_25__ {int pWC; TYPE_8__* pOrSet; TYPE_6__* pWInfo; } ;
typedef TYPE_4__ WhereLoopBuilder ;
struct TYPE_23__ {TYPE_7__* pIndex; } ;
struct TYPE_24__ {TYPE_2__ btree; } ;
struct TYPE_26__ {int wsFlags; TYPE_3__ u; struct TYPE_26__* pNextLoop; int nOut; int rRun; int prereq; scalar_t__ nLTerm; } ;
typedef TYPE_5__ WhereLoop ;
struct TYPE_27__ {TYPE_5__* pLoops; TYPE_1__* pParse; } ;
typedef TYPE_6__ WhereInfo ;
struct TYPE_29__ {int n; } ;
struct TYPE_28__ {scalar_t__ tnum; } ;
struct TYPE_22__ {int * db; } ;
typedef TYPE_7__ Index ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_5__* FUNC_0 (int *,int) ;
 int FUNC_1 (char*,...) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_5__*,TYPE_5__*) ;
 int FUNC_3 (int *,TYPE_5__*) ;
 TYPE_5__** FUNC_4 (TYPE_5__**,TYPE_5__*) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (TYPE_5__*,int ) ;
 int FUNC_7 (int *,TYPE_5__*,TYPE_5__*) ;
 int FUNC_8 (TYPE_8__*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_9(WhereLoopBuilder *VAR_4, WhereLoop *VAR_5){
  WhereLoop **VAR_6, *VAR_7;
  WhereInfo *VAR_8 = VAR_4->pWInfo;
  sqlite3 *VAR_9 = VAR_8->pParse->db;
  int VAR_10;




  if( VAR_4->pOrSet!=0 ){
    if( VAR_5->nLTerm ){




      FUNC_8(VAR_4->pOrSet, VAR_5->prereq, VAR_5->rRun,
                                    VAR_5->nOut);






    }
    return VAR_1;
  }



  FUNC_2(VAR_8->pLoops, VAR_5);
  VAR_6 = FUNC_4(&VAR_8->pLoops, VAR_5);

  if( VAR_6==0 ){
    return VAR_1;
  }else{
    VAR_7 = *VAR_6;
  }
  if( VAR_7==0 ){

    *VAR_6 = VAR_7 = FUNC_0(VAR_9, sizeof(WhereLoop));
    if( VAR_7==0 ) return VAR_0;
    FUNC_5(VAR_7);
    VAR_7->pNextLoop = 0;
  }else{



    WhereLoop **VAR_11 = &VAR_7->pNextLoop;
    WhereLoop *VAR_12;
    while( *VAR_11 ){
      VAR_11 = FUNC_4(VAR_11, VAR_5);
      if( VAR_11==0 ) break;
      VAR_12 = *VAR_11;
      if( VAR_12==0 ) break;
      *VAR_11 = VAR_12->pNextLoop;






      FUNC_3(VAR_9, VAR_12);
    }
  }
  VAR_10 = FUNC_7(VAR_9, VAR_7, VAR_5);
  if( (VAR_7->wsFlags & VAR_2)==0 ){
    Index *VAR_13 = VAR_7->u.btree.pIndex;
    if( VAR_13 && VAR_13->tnum==0 ){
      VAR_7->u.btree.pIndex = 0;
    }
  }
  return VAR_10;
}
