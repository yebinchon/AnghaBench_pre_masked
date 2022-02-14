
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int sqlite3_stmt ;
struct TYPE_6__ {int zName; int zDb; } ;
struct TYPE_5__ {scalar_t__ pIdxSelect; TYPE_2__* pConfig; } ;
typedef TYPE_1__ Fts5Index ;
typedef TYPE_2__ Fts5Config ;


 int FUNC_0 (TYPE_1__*,scalar_t__*,int ) ;
 int FUNC_1 (char*,int ,int ) ;

__attribute__((used)) static sqlite3_stmt *FUNC_2(Fts5Index *VAR_0){
  if( VAR_0->pIdxSelect==0 ){
    Fts5Config *VAR_1 = VAR_0->pConfig;
    FUNC_0(VAR_0, &VAR_0->pIdxSelect, FUNC_1(
          "SELECT pgno FROM '%q'.'%q_idx' WHERE "
          "segid=? AND term<=? ORDER BY term DESC LIMIT 1",
          VAR_1->zDb, VAR_1->zName
    ));
  }
  return VAR_0->pIdxSelect;
}
