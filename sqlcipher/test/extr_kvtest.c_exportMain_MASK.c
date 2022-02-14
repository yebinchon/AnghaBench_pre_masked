
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_stmt ;
typedef scalar_t__ sqlite3_int64 ;
typedef int sqlite3 ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (char*,char*) ;
 size_t FUNC_5 (void const*,int,size_t,int *) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (int *) ;
 void* FUNC_10 (int *,int) ;
 scalar_t__ FUNC_11 (int *,int) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (char*) ;
 char* FUNC_16 (char*,char*) ;
 int FUNC_17 (char*,int **) ;
 int FUNC_18 (int *,char*,int,int **,int ) ;
 int FUNC_19 (int,char*,char*,int,...) ;
 scalar_t__ FUNC_20 (int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_21 (char const*,char*) ;
 scalar_t__ FUNC_22 (char*) ;

__attribute__((used)) static int FUNC_23(int VAR_4, char **VAR_5){
  char *VAR_6;
  char *VAR_7;
  sqlite3 *VAR_8;
  sqlite3_stmt *VAR_9;
  int VAR_10;
  int VAR_11;
  int VAR_12;
  char *VAR_13;
  char *VAR_14;
  size_t VAR_15;
  int VAR_16;

  FUNC_0( FUNC_21(VAR_5[1],"export")==0 );
  FUNC_0( VAR_4>=3 );
  if( VAR_4<4 ) FUNC_1("Usage: kvtest export DATABASE DIRECTORY [OPTIONS]");
  VAR_6 = VAR_5[2];
  VAR_7 = VAR_5[3];
  FUNC_6(VAR_7);
  for(VAR_16=4; VAR_16<VAR_4; VAR_16++){
    const char *VAR_17 = VAR_5[VAR_16];
    if( VAR_17[0]=='-' && VAR_17[1]=='-' ) VAR_17++;
    if( FUNC_21(VAR_17,"-tree")==0 ){
      VAR_13 = FUNC_16("%s/00", VAR_7);
      FUNC_6(VAR_13);
      FUNC_15(VAR_13);
      continue;
    }
    FUNC_1("unknown argument: \"%s\"\n", VAR_5[VAR_16]);
  }
  VAR_11 = FUNC_7(VAR_7);
  if( VAR_11!=VAR_0 && VAR_11!=VAR_1 ){
    FUNC_1("object \"%s\" is not a directory", VAR_7);
  }
  VAR_10 = FUNC_17(VAR_6, &VAR_8);
  if( VAR_10 ){
    FUNC_1("cannot open database \"%s\": %s", VAR_6, FUNC_13(VAR_8));
  }
  VAR_10 = FUNC_18(VAR_8, "SELECT k, v FROM kv ORDER BY k", -1, &VAR_9, 0);
  if( VAR_10 ){
    FUNC_1("prepare_v2 failed: %s\n", FUNC_13(VAR_8));
  }
  VAR_12 = (int)FUNC_22(VAR_7);
  VAR_13 = FUNC_16("%s/00/00/00.extra---------------------", VAR_7);
  if( VAR_13==0 ){
    FUNC_1("malloc failed\n");
  }
  VAR_14 = VAR_13 + VAR_12 + 1;
  while( FUNC_20(VAR_9)==VAR_2 ){
    int VAR_18 = FUNC_12(VAR_9, 0);
    sqlite3_int64 VAR_19 = FUNC_11(VAR_9, 1);
    const void *VAR_20 = FUNC_10(VAR_9, 1);
    FILE *VAR_21;
    if( VAR_11==VAR_0 ){
      FUNC_19(20, VAR_14, "%06d", VAR_18);
    }else{
      FUNC_19(20, VAR_14, "%02d", VAR_18/10000);
      FUNC_6(VAR_13);
      FUNC_19(20, VAR_14, "%02d/%02d", VAR_18/10000, (VAR_18/100)%100);
      FUNC_6(VAR_13);
      FUNC_19(20, VAR_14, "%02d/%02d/%02d",
                       VAR_18/10000, (VAR_18/100)%100, VAR_18%100);
    }
    VAR_21 = FUNC_4(VAR_13, "wb");
    VAR_15 = FUNC_5(VAR_20, 1, (size_t)VAR_19, VAR_21);
    FUNC_2(VAR_21);
    FUNC_8("\r%s   ", VAR_14); FUNC_3(VAR_3);
    if( VAR_15!=(size_t)VAR_19 ){
      FUNC_1("Wrote only %d of %d bytes to %s\n",
                  (int)VAR_15, VAR_19, VAR_13);
    }
  }
  FUNC_14(VAR_9);
  FUNC_9(VAR_8);
  FUNC_15(VAR_13);
  FUNC_8("\n");
  return 0;
}
