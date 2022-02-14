
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zLine ;
typedef int sqlite3_stmt ;
typedef int sqlite3 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int * FUNC_2 (int *,char*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int *,char*,...) ;
 int FUNC_5 (int *,int,char*,int,int ) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int) ;
 char* FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,char const*,int,int **,char const**) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int,char*,char*,char const*) ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (char*) ;

__attribute__((used)) static int FUNC_17(
  sqlite3 *VAR_6,
  const char *VAR_7,
  sqlite3 *VAR_8,
  const char *VAR_9,
  int *VAR_10,
  int *VAR_11,
  int VAR_12
){
  int VAR_13 = VAR_2;
  const char *VAR_14;
  sqlite3_stmt *VAR_15 = 0;
  sqlite3_stmt *VAR_16 = 0;
  const char *VAR_17;
  int VAR_18;
  char VAR_19[4000];

  FUNC_4(VAR_8, "BEGIN");
  FUNC_4(VAR_8, "CREATE TABLE IF NOT EXISTS staging(x TEXT)");
  FUNC_4(VAR_8, "CREATE TABLE IF NOT EXISTS \"%w\"(x TEXT)", VAR_9);
  VAR_16 = FUNC_2(VAR_8, "INSERT INTO staging(x) VALUES(?1)");
  *VAR_11 = *VAR_10 = 0;
  while( VAR_13==VAR_2 && VAR_7 && VAR_7[0] ){
    VAR_14 = 0;
    VAR_13 = FUNC_11(VAR_6, VAR_7, -1, &VAR_15, &VAR_14);
    VAR_7 = VAR_14;
    FUNC_0( VAR_13==VAR_2 || VAR_15==0 );
    if( VAR_13!=VAR_2 ){
      FUNC_3("Error with [%s]\n%s\n", VAR_7, FUNC_9(VAR_6));
      break;
    }
    if( !VAR_15 ) continue;
    (*VAR_10)++;
    VAR_18 = FUNC_6(VAR_15);
    FUNC_4(VAR_8, "DELETE FROM staging;");
    while( FUNC_15(VAR_15)==VAR_3 ){
      int VAR_20, VAR_21;
      for(VAR_20=VAR_21=0; VAR_20<VAR_18 && VAR_21<sizeof(VAR_19)-50; VAR_20++){
        int VAR_22 = FUNC_8(VAR_15, VAR_20);
        if( VAR_22==VAR_1 ){
          VAR_17 = "NULL";
        }else{
          VAR_17 = (const char*)FUNC_7(VAR_15, VAR_20);
        }
        if( VAR_20 ) VAR_19[VAR_21++] = ',';
        if( VAR_22==VAR_4 ){
          FUNC_13(sizeof(VAR_19)-VAR_21, VAR_19+VAR_21, "'%q'", VAR_17);
        }else{
          FUNC_13(sizeof(VAR_19)-VAR_21, VAR_19+VAR_21, "%s", VAR_17);
        }
        VAR_21 += (int)FUNC_16(VAR_19+VAR_21);
      }


      if( VAR_21>=sizeof(VAR_19)-100 ){
        FUNC_3("Excessively long output line: %d bytes\n" ,VAR_21);
        FUNC_1(1);
      }
      if( VAR_12 ){
        FUNC_3("%s\n", VAR_19);
      }
      (*VAR_11)++;
      FUNC_5(VAR_16, 1, VAR_19, VAR_21, VAR_5);
      VAR_13 = FUNC_15(VAR_16);
      FUNC_0( VAR_13==VAR_0 );
      VAR_13 = FUNC_12(VAR_16);
    }
    FUNC_4(VAR_8,
      "INSERT INTO \"%w\"(x) VALUES('### %q ###')",
      VAR_9, FUNC_14(VAR_15)
    );
    FUNC_4(VAR_8,
      "INSERT INTO \"%w\"(x) SELECT group_concat(x,char(10))"
      "  FROM (SELECT x FROM staging ORDER BY x)",
      VAR_9
    );
    FUNC_4(VAR_8, "COMMIT");
    FUNC_10(VAR_15);
    VAR_15 = 0;
  }
  FUNC_10(VAR_15);
  FUNC_10(VAR_16);
  return VAR_13;
}
