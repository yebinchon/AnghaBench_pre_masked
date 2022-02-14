
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_stmt ;
typedef int azCol ;
struct TYPE_3__ {int rc; int nErr; int db; } ;
typedef TYPE_1__ DState ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char**) ;
 scalar_t__ FUNC_1 (int *,int) ;
 char const* FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (char*,char const*) ;
 int FUNC_6 (int ,char*,int,int **,int ) ;
 char** FUNC_7 (char**,int) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (char const*,char*) ;
 int FUNC_10 (int ,int ,char const*,char*,int ,int ,int ,int ,int ) ;

__attribute__((used)) static char **FUNC_11(DState *VAR_3, const char *VAR_4){
  char **VAR_5 = 0;
  sqlite3_stmt *VAR_6 = 0;
  char *VAR_7;
  int VAR_8 = 0;
  int VAR_9 = 0;
  int VAR_10 = 0;
  int VAR_11 = 0;
  int VAR_12 = 1;
  int VAR_13;

  VAR_7 = FUNC_5("PRAGMA table_info=%Q", VAR_4);
  if( VAR_7==0 ) return 0;
  VAR_13 = FUNC_6(VAR_3->db, VAR_7, -1, &VAR_6, 0);
  FUNC_4(VAR_7);
  if( VAR_13 ) return 0;
  while( FUNC_8(VAR_6)==VAR_2 ){
    if( VAR_8>=VAR_9-2 ){
      char **VAR_14;
      VAR_9 = VAR_9*2 + VAR_8 + 10;
      VAR_14 = FUNC_7(VAR_5, VAR_9*sizeof(VAR_5[0]));
      if( VAR_14==0 ) goto col_oom;
      VAR_5 = VAR_14;
      VAR_5[0] = 0;
    }
    VAR_5[++VAR_8] = FUNC_5("%s", FUNC_2(VAR_6, 1));
    if( VAR_5[VAR_8]==0 ) goto col_oom;
    if( FUNC_1(VAR_6, 5) ){
      VAR_10++;
      if( VAR_10==1
       && FUNC_9((const char*)FUNC_2(VAR_6,2),
                          "INTEGER")==0
      ){
        VAR_11 = 1;
      }else{
        VAR_11 = 0;
      }
    }
  }
  FUNC_3(VAR_6);
  VAR_6 = 0;
  VAR_5[VAR_8+1] = 0;







  if( VAR_11 ){







    VAR_7 = FUNC_5("SELECT 1 FROM pragma_index_list(%Q)"
                           " WHERE origin='pk'", VAR_4);
    if( VAR_7==0 ) goto col_oom;
    VAR_13 = FUNC_6(VAR_3->db, VAR_7, -1, &VAR_6, 0);
    FUNC_4(VAR_7);
    if( VAR_13 ){
      FUNC_0(VAR_5);
      return 0;
    }
    VAR_13 = FUNC_8(VAR_6);
    FUNC_3(VAR_6);
    VAR_6 = 0;
    VAR_12 = VAR_13==VAR_2;
  }
  if( VAR_12 ){


    static char *VAR_15[] = { "rowid", "_rowid_", "oid" };
    int VAR_16, VAR_17;
    for(VAR_17=0; VAR_17<3; VAR_17++){
      for(VAR_16=1; VAR_16<=VAR_8; VAR_16++){
        if( FUNC_9(VAR_15[VAR_17],VAR_5[VAR_16])==0 ) break;
      }
      if( VAR_16>VAR_8 ){




        VAR_13 = FUNC_10(VAR_3->db,0,VAR_4,VAR_15[VAR_17],0,0,0,0,0);
        if( VAR_13==VAR_1 ) VAR_5[0] = VAR_15[VAR_17];
        break;
      }
    }
  }
  return VAR_5;

col_oom:
  FUNC_3(VAR_6);
  FUNC_0(VAR_5);
  VAR_3->nErr++;
  VAR_3->rc = VAR_0;
  return 0;
}
