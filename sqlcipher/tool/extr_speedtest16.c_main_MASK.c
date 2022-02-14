
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite_uint64 ;
typedef int sqlite3 ;
typedef int FILE ;


 scalar_t__ FUNC_0 (char) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (int ,char*,char*) ;
 int FUNC_5 (char*,int,int,int *) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (int *,long,int ) ;
 int FUNC_8 (int *) ;
 char* FUNC_9 (int) ;
 int VAR_3 ;
 int FUNC_10 (int *,char*) ;
 int FUNC_11 (char*,...) ;
 int VAR_4 ;
 int FUNC_12 () ;
 int FUNC_13 (int *) ;
 int FUNC_14 (char*) ;
 int FUNC_15 () ;
 int FUNC_16 (void*,int **) ;
 int VAR_5 ;
 int FUNC_17 (char*) ;

int FUNC_18(int VAR_6, char **VAR_7){
  void *VAR_8;
  sqlite3 *VAR_9;
  int VAR_10;
  int VAR_11;
  char *VAR_12;
  int VAR_13, VAR_14;
  FILE *VAR_15;
  sqlite_uint64 VAR_16, VAR_17;
  sqlite_uint64 VAR_18 = 0;
  int VAR_19 = 0;
  int VAR_20 = 0;

  if( VAR_6!=3 ){
    FUNC_4(VAR_5, "Usage: %s FILENAME SQL-SCRIPT\n"
                    "Runs SQL-SCRIPT as UTF16 against a UTF16 database\n",
                    VAR_7[0]);
    FUNC_2(1);
  }
  VAR_15 = FUNC_3(VAR_7[2], "r");
  FUNC_7(VAR_15, 0L, VAR_0);
  VAR_11 = FUNC_8(VAR_15);
  VAR_12 = FUNC_9( VAR_11+1 );
  FUNC_7(VAR_15, 0L, VAR_1);
  VAR_11 = FUNC_5(VAR_12, 1, VAR_11, VAR_15);
  VAR_12[VAR_11] = 0;

  FUNC_11("SQLite version: %d\n", FUNC_15());
  FUNC_17(VAR_7[1]);
  VAR_8 = FUNC_1(VAR_7[1]);
  VAR_16 = FUNC_12();
  VAR_10 = FUNC_16(VAR_8, &VAR_9);
  VAR_17 = FUNC_12() - VAR_16;
  VAR_18 = VAR_17;
  FUNC_11("sqlite3_open16() returns %d in %llu cycles\n", VAR_10, VAR_17);
  FUNC_6(VAR_8);
  for(VAR_13=VAR_14=0; VAR_14<VAR_11; VAR_14++){
    if( VAR_12[VAR_14]==';' ){
      int VAR_21;
      char VAR_22 = VAR_12[VAR_14+1];
      VAR_12[VAR_14+1] = 0;
      VAR_21 = FUNC_14(&VAR_12[VAR_13]);
      VAR_12[VAR_14+1] = VAR_22;
      if( VAR_21 ){
        VAR_12[VAR_14] = 0;
        while( VAR_13<VAR_14 && FUNC_0(VAR_12[VAR_13]) ){ VAR_13++; }
        if( VAR_13<VAR_14 ){
          VAR_19++;
          VAR_20 += VAR_14-VAR_13;
          FUNC_10(VAR_9, &VAR_12[VAR_13]);
        }
        VAR_12[VAR_14] = ';';
        VAR_13 = VAR_14+1;
      }
    }
  }
  VAR_16 = FUNC_12();
  FUNC_13(VAR_9);
  VAR_17 = FUNC_12() - VAR_16;
  VAR_18 += VAR_17;
  FUNC_11("sqlite3_close() returns in %llu cycles\n", VAR_17);
  FUNC_11("\n");
  FUNC_11("Statements run:       %15d\n", VAR_19);
  FUNC_11("Bytes of SQL text:    %15d\n", VAR_20);
  FUNC_11("Total prepare time:   %15llu cycles\n", VAR_3);
  FUNC_11("Total run time:       %15llu cycles\n", VAR_4);
  FUNC_11("Total finalize time:  %15llu cycles\n", VAR_2);
  FUNC_11("Open/Close time:      %15llu cycles\n", VAR_18);
  FUNC_11("Total Time:           %15llu cycles\n",
      VAR_3 + VAR_4 + VAR_2 + VAR_18);
  return 0;
}
