
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int i64 ;
struct TYPE_6__ {int zName; int zDb; } ;
struct TYPE_5__ {scalar_t__ rc; scalar_t__ pDeleter; TYPE_2__* pConfig; } ;
typedef TYPE_1__ Fts5Index ;
typedef TYPE_2__ Fts5Config ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,scalar_t__*,char*) ;
 int FUNC_1 (scalar_t__,int,int ) ;
 char* FUNC_2 (char*,int ,int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static void FUNC_5(Fts5Index *VAR_1, i64 VAR_2, i64 VAR_3){
  if( VAR_1->rc!=VAR_0 ) return;

  if( VAR_1->pDeleter==0 ){
    Fts5Config *VAR_4 = VAR_1->pConfig;
    char *VAR_5 = FUNC_2(
        "DELETE FROM '%q'.'%q_data' WHERE id>=? AND id<=?",
          VAR_4->zDb, VAR_4->zName
    );
    if( FUNC_0(VAR_1, &VAR_1->pDeleter, VAR_5) ) return;
  }

  FUNC_1(VAR_1->pDeleter, 1, VAR_2);
  FUNC_1(VAR_1->pDeleter, 2, VAR_3);
  FUNC_4(VAR_1->pDeleter);
  VAR_1->rc = FUNC_3(VAR_1->pDeleter);
}
