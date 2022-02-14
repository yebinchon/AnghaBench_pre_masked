
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3_stmt ;
typedef int i64 ;
struct TYPE_5__ {int db; int zName; int zDb; } ;
struct TYPE_4__ {TYPE_2__* pConfig; } ;
typedef TYPE_1__ Fts5Storage ;
typedef TYPE_2__ Fts5Config ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*,int ,int ,char const*) ;
 int FUNC_4 (int ,char*,int,int **,int ) ;
 scalar_t__ FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(Fts5Storage *VAR_3, const char *VAR_4, i64 *VAR_5){
  Fts5Config *VAR_6 = VAR_3->pConfig;
  char *VAR_7;
  int VAR_8;

  VAR_7 = FUNC_3("SELECT count(*) FROM %Q.'%q_%s'",
      VAR_6->zDb, VAR_6->zName, VAR_4
  );
  if( VAR_7==0 ){
    VAR_8 = VAR_0;
  }else{
    sqlite3_stmt *VAR_9 = 0;
    VAR_8 = FUNC_4(VAR_6->db, VAR_7, -1, &VAR_9, 0);
    if( VAR_8==VAR_1 ){
      if( VAR_2==FUNC_5(VAR_9) ){
        *VAR_5 = FUNC_0(VAR_9, 0);
      }
      VAR_8 = FUNC_1(VAR_9);
    }
  }

  FUNC_2(VAR_7);
  return VAR_8;
}
