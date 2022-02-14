
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int sqlite3_vtab_cursor ;
struct TYPE_14__ {scalar_t__ rCostX; struct TYPE_14__* pNext; } ;
typedef TYPE_1__ fuzzer_stem ;
struct TYPE_15__ {scalar_t__ rLimit; TYPE_1__* pStem; TYPE_1__* pDone; int zBuf; int nBuf; int iRowid; } ;
typedef TYPE_2__ fuzzer_cursor ;
typedef scalar_t__ fuzzer_cost ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,TYPE_1__*) ;
 TYPE_1__* FUNC_1 (TYPE_2__*,TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 TYPE_1__* FUNC_3 (TYPE_2__*,int ,scalar_t__) ;
 int FUNC_4 (TYPE_1__*,int *,int *) ;
 int FUNC_5 (TYPE_2__*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_6(sqlite3_vtab_cursor *VAR_2){
  fuzzer_cursor *VAR_3 = (fuzzer_cursor*)VAR_2;
  int VAR_4;
  fuzzer_stem *VAR_5, *VAR_6;

  VAR_3->iRowid++;




  VAR_5 = VAR_3->pStem;
  if( VAR_5->rCostX>0 ){
    VAR_4 = FUNC_4(VAR_5, &VAR_3->zBuf, &VAR_3->nBuf);
    if( VAR_4==VAR_0 ) return VAR_0;
    VAR_6 = FUNC_3(VAR_3, VAR_3->zBuf, VAR_5->rCostX);
    if( VAR_6 ){
      if( FUNC_0(VAR_3, VAR_6)==0 ){
        VAR_6->pNext = VAR_3->pDone;
        VAR_3->pDone = VAR_6;
      }else{
        if( FUNC_1(VAR_3, VAR_6)==VAR_6 ){
          return VAR_1;
        }
      }
    }else{
      return VAR_0;
    }
  }




  while( (VAR_5 = VAR_3->pStem)!=0 ){
    int VAR_7 = FUNC_0(VAR_3, VAR_5);
    if( VAR_7<0 ){
      return VAR_0;
    }else if( VAR_7>0 ){
      VAR_3->pStem = 0;
      VAR_5 = FUNC_1(VAR_3, VAR_5);
      if( (VAR_4 = FUNC_5(VAR_3, VAR_5))!=0 ){
        if( VAR_4<0 ) return VAR_0;
        continue;
      }
      return VAR_1;
    }
    VAR_3->pStem = 0;
    VAR_5->pNext = VAR_3->pDone;
    VAR_3->pDone = VAR_5;
    if( FUNC_2(VAR_3) ){
      VAR_4 = FUNC_5(VAR_3, VAR_3->pStem);
      if( VAR_4<0 ) return VAR_0;
      if( VAR_4==0 ){
        return VAR_1;
      }
    }
  }



  VAR_3->rLimit = (fuzzer_cost)0;
  return VAR_1;
}
