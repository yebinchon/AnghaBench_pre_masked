
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int rc; int zErrmsg; int dbMain; } ;
typedef TYPE_1__ sqlite3rbu ;
typedef int sqlite3_stmt ;
struct TYPE_6__ {int zIdx; } ;
typedef TYPE_2__ RbuObjIter ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int **,int *,char*) ;
 char* FUNC_1 (char const*,int*) ;
 int FUNC_2 (int *,int,int ,int,int ) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;

__attribute__((used)) static char *FUNC_6(sqlite3rbu *VAR_3, RbuObjIter *VAR_4){
  sqlite3_stmt *VAR_5 = 0;
  int VAR_6 = VAR_3->rc;
  char *VAR_7 = 0;

  if( VAR_6==VAR_0 ){
    VAR_6 = FUNC_0(VAR_3->dbMain, &VAR_5, &VAR_3->zErrmsg,
        "SELECT trim(sql) FROM sqlite_master WHERE type='index' AND name=?"
    );
  }
  if( VAR_6==VAR_0 ){
    int VAR_8;
    VAR_6 = FUNC_2(VAR_5, 1, VAR_4->zIdx, -1, VAR_2);
    if( VAR_6==VAR_0 && VAR_1==FUNC_5(VAR_5) ){
      const char *VAR_9 = (const char*)FUNC_3(VAR_5, 0);
      if( VAR_9 ){
        int VAR_10 = 0;
        int VAR_11;
        for(VAR_11=0; VAR_9[VAR_11]; VAR_11++){
          char VAR_12 = VAR_9[VAR_11];
          if( VAR_12=='(' ){
            VAR_10++;
          }
          else if( VAR_12==')' ){
            VAR_10--;
            if( VAR_10==0 ){
              VAR_11++;
              break;
            }
          }else if( VAR_12=='"' || VAR_12=='\'' || VAR_12=='`' ){
            for(VAR_11++; 1; VAR_11++){
              if( VAR_9[VAR_11]==VAR_12 ){
                if( VAR_9[VAR_11+1]!=VAR_12 ) break;
                VAR_11++;
              }
            }
          }else if( VAR_12=='[' ){
            for(VAR_11++; 1; VAR_11++){
              if( VAR_9[VAR_11]==']' ) break;
            }
          }
        }
        if( VAR_9[VAR_11] ){
          VAR_7 = FUNC_1(&VAR_9[VAR_11], &VAR_6);
        }
      }
    }

    VAR_8 = FUNC_4(VAR_5);
    if( VAR_6==VAR_0 ) VAR_6 = VAR_8;
  }

  VAR_3->rc = VAR_6;
  return VAR_7;
}
