
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int idxStr; scalar_t__ needToFreeIdxStr; } ;
typedef TYPE_3__ sqlite3_index_info ;
struct TYPE_13__ {TYPE_2__* pParse; TYPE_3__** ppIdxInfo; TYPE_1__* pSrc; } ;
typedef TYPE_4__ WhereBestIdx ;
struct TYPE_14__ {scalar_t__ mallocFailed; } ;
struct TYPE_11__ {TYPE_5__* db; } ;
struct TYPE_10__ {int pTab; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_5__*,TYPE_3__*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(WhereBestIdx *VAR_0){

  if( FUNC_0(VAR_0->pSrc->pTab) ){
    sqlite3_index_info *VAR_1 = 0;
    VAR_0->ppIdxInfo = &VAR_1;
    FUNC_3(VAR_0);
    FUNC_1( VAR_1!=0 || VAR_0->pParse->db->mallocFailed );
    if( VAR_1 && VAR_1->needToFreeIdxStr ){
      FUNC_5(VAR_1->idxStr);
    }
    FUNC_4(VAR_0->pParse->db, VAR_1);
  }else

  {
    FUNC_2(VAR_0);
  }
}
