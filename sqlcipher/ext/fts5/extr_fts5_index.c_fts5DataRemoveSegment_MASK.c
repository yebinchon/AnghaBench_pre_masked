
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ i64 ;
struct TYPE_7__ {int zName; int zDb; } ;
struct TYPE_6__ {scalar_t__ pIdxDeleter; scalar_t__ rc; TYPE_2__* pConfig; } ;
typedef TYPE_1__ Fts5Index ;
typedef TYPE_2__ Fts5Config ;


 scalar_t__ FUNC_0 (int,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_1__*,scalar_t__,scalar_t__) ;
 int FUNC_2 (TYPE_1__*,scalar_t__*,int ) ;
 int FUNC_3 (scalar_t__,int,int) ;
 int FUNC_4 (char*,int ,int ) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static void FUNC_7(Fts5Index *VAR_1, int VAR_2){
  i64 VAR_3 = FUNC_0(VAR_2, 0);
  i64 VAR_4 = FUNC_0(VAR_2+1, 0)-1;
  FUNC_1(VAR_1, VAR_3, VAR_4);
  if( VAR_1->pIdxDeleter==0 ){
    Fts5Config *VAR_5 = VAR_1->pConfig;
    FUNC_2(VAR_1, &VAR_1->pIdxDeleter, FUNC_4(
          "DELETE FROM '%q'.'%q_idx' WHERE segid=?",
          VAR_5->zDb, VAR_5->zName
    ));
  }
  if( VAR_1->rc==VAR_0 ){
    FUNC_3(VAR_1->pIdxDeleter, 1, VAR_2);
    FUNC_6(VAR_1->pIdxDeleter);
    VAR_1->rc = FUNC_5(VAR_1->pIdxDeleter);
  }
}
