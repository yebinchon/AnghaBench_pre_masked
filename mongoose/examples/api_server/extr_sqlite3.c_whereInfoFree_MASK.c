
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {int nLevel; int pWC; struct TYPE_13__* zColAff; TYPE_3__* a; int idxStr; scalar_t__ needToFreeIdxStr; } ;
typedef TYPE_4__ sqlite3_index_info ;
typedef int sqlite3 ;
typedef TYPE_4__ WhereInfo ;
struct TYPE_10__ {TYPE_4__* pIdx; } ;
struct TYPE_11__ {int wsFlags; TYPE_1__ u; } ;
struct TYPE_12__ {TYPE_2__ plan; TYPE_4__* pIdxInfo; } ;
typedef TYPE_4__ Index ;


 scalar_t__ FUNC_0 (TYPE_4__*) ;
 int VAR_0 ;
 int FUNC_1 (int *,TYPE_4__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(sqlite3 *VAR_1, WhereInfo *VAR_2){
  if( FUNC_0(VAR_2) ){
    int VAR_3;
    for(VAR_3=0; VAR_3<VAR_2->nLevel; VAR_3++){
      sqlite3_index_info *VAR_4 = VAR_2->a[VAR_3].pIdxInfo;
      if( VAR_4 ){

        if( VAR_4->needToFreeIdxStr ){
          FUNC_2(VAR_4->idxStr);
        }
        FUNC_1(VAR_1, VAR_4);
      }
      if( VAR_2->a[VAR_3].plan.wsFlags & VAR_0 ){
        Index *VAR_5 = VAR_2->a[VAR_3].plan.u.pIdx;
        if( VAR_5 ){
          FUNC_1(VAR_1, VAR_5->zColAff);
          FUNC_1(VAR_1, VAR_5);
        }
      }
    }
    FUNC_3(VAR_2->pWC);
    FUNC_1(VAR_1, VAR_2);
  }
}
