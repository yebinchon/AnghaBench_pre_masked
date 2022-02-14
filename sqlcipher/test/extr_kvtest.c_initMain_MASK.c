
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3 ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char*,int ,int ,char**) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (char*,int,int,int,int) ;
 int FUNC_8 (char*,int **) ;
 scalar_t__ FUNC_9 (char*,char*) ;

__attribute__((used)) static int FUNC_10(int VAR_0, char **VAR_1){
  char *VAR_2;
  int VAR_3, VAR_4;
  int VAR_5 = 1000;
  int VAR_6 = 10000;
  int VAR_7 = 0;
  int VAR_8 = 4096;
  sqlite3 *VAR_9;
  char *VAR_10;
  char *VAR_11 = 0;

  FUNC_0( FUNC_9(VAR_1[1],"init")==0 );
  FUNC_0( VAR_0>=3 );
  VAR_2 = VAR_1[2];
  for(VAR_3=3; VAR_3<VAR_0; VAR_3++){
    char *VAR_12 = VAR_1[VAR_3];
    if( VAR_12[0]!='-' ) FUNC_1("unknown argument: \"%s\"", VAR_12);
    if( VAR_12[1]=='-' ) VAR_12++;
    if( FUNC_9(VAR_12, "-count")==0 ){
      if( VAR_3==VAR_0-1 ) FUNC_1("missing argument on \"%s\"", VAR_1[VAR_3]);
      VAR_5 = FUNC_2(VAR_1[++VAR_3]);
      if( VAR_5<1 ) FUNC_1("the --count must be positive");
      continue;
    }
    if( FUNC_9(VAR_12, "-size")==0 ){
      if( VAR_3==VAR_0-1 ) FUNC_1("missing argument on \"%s\"", VAR_1[VAR_3]);
      VAR_6 = FUNC_2(VAR_1[++VAR_3]);
      if( VAR_6<1 ) FUNC_1("the --size must be positive");
      continue;
    }
    if( FUNC_9(VAR_12, "-variance")==0 ){
      if( VAR_3==VAR_0-1 ) FUNC_1("missing argument on \"%s\"", VAR_1[VAR_3]);
      VAR_7 = FUNC_2(VAR_1[++VAR_3]);
      continue;
    }
    if( FUNC_9(VAR_12, "-pagesize")==0 ){
      if( VAR_3==VAR_0-1 ) FUNC_1("missing argument on \"%s\"", VAR_1[VAR_3]);
      VAR_8 = FUNC_2(VAR_1[++VAR_3]);
      if( VAR_8<512 || VAR_8>65536 || ((VAR_8-1)&VAR_8)!=0 ){
        FUNC_1("the --pagesize must be power of 2 between 512 and 65536");
      }
      continue;
    }
    FUNC_1("unknown option: \"%s\"", VAR_1[VAR_3]);
  }
  VAR_4 = FUNC_8(VAR_2, &VAR_9);
  if( VAR_4 ){
    FUNC_1("cannot open database \"%s\": %s", VAR_2, FUNC_4(VAR_9));
  }
  VAR_10 = FUNC_7(
    "DROP TABLE IF EXISTS kv;\n"
    "PRAGMA page_size=%d;\n"
    "VACUUM;\n"
    "BEGIN;\n"
    "CREATE TABLE kv(k INTEGER PRIMARY KEY, v BLOB);\n"
    "WITH RECURSIVE c(x) AS (VALUES(1) UNION ALL SELECT x+1 FROM c WHERE x<%d)"
    " INSERT INTO kv(k,v) SELECT x, randomblob(%d+(random()%%(%d))) FROM c;\n"
    "COMMIT;\n",
    VAR_8, VAR_5, VAR_6, VAR_7+1
  );
  VAR_4 = FUNC_5(VAR_9, VAR_10, 0, 0, &VAR_11);
  if( VAR_4 ) FUNC_1("database create failed: %s", VAR_11);
  FUNC_6(VAR_10);
  FUNC_3(VAR_9);
  return 0;
}
