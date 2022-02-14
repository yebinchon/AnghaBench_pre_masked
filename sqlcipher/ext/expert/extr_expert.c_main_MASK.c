
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3expert ;
typedef int sqlite3 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,char*,char**) ;
 char* FUNC_5 (int *) ;
 int FUNC_6 (int *,char**) ;
 int FUNC_7 (int *,int ,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int *,char**) ;
 char* FUNC_11 (int *,int,int ) ;
 int FUNC_12 (int *,char*,char**) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (char const*,int **) ;
 scalar_t__ FUNC_15 (char*,char*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_16 (char*) ;
 int FUNC_17 (char**) ;

int FUNC_18(int VAR_8, char **VAR_9){
  const char *VAR_10;
  int VAR_11 = 0;
  char *VAR_12 = 0;
  int VAR_13;
  int VAR_14 = 1;

  sqlite3 *VAR_15 = 0;
  sqlite3expert *VAR_16 = 0;

  if( VAR_8<2 ) FUNC_17(VAR_9);
  VAR_10 = VAR_9[VAR_8-1];
  if( VAR_10[0]=='-' ) FUNC_17(VAR_9);
  VAR_11 = FUNC_14(VAR_10, &VAR_15);
  if( VAR_11!=VAR_5 ){
    FUNC_1(VAR_6, "Cannot open db file: %s - %s\n", VAR_10, FUNC_5(VAR_15));
    FUNC_0(-2);
  }

  VAR_16 = FUNC_10(VAR_15, &VAR_12);
  if( VAR_16==0 ){
    FUNC_1(VAR_6, "Cannot run analysis: %s\n", VAR_12);
    VAR_11 = 1;
  }else{
    for(VAR_13=1; VAR_13<(VAR_8-1); VAR_13++){
      char *VAR_17 = VAR_9[VAR_13];
      int VAR_18;
      if( VAR_17[0]=='-' && VAR_17[1]=='-' && VAR_17[2]!=0 ) VAR_17++;
      VAR_18 = (int)FUNC_16(VAR_17);
      if( VAR_18>=2 && 0==FUNC_15(VAR_17, "-file", VAR_18) ){
        if( ++VAR_13==(VAR_8-1) ) FUNC_3("-file");
        VAR_11 = FUNC_4(VAR_16, VAR_9[VAR_13], &VAR_12);
      }

      else if( VAR_18>=3 && 0==FUNC_15(VAR_17, "-sql", VAR_18) ){
        if( ++VAR_13==(VAR_8-1) ) FUNC_3("-sql");
        VAR_11 = FUNC_12(VAR_16, VAR_9[VAR_13], &VAR_12);
      }

      else if( VAR_18>=3 && 0==FUNC_15(VAR_17, "-sample", VAR_18) ){
        int VAR_19;
        if( ++VAR_13==(VAR_8-1) ) FUNC_3("-sample");
        VAR_19 = FUNC_2(VAR_9[VAR_13]);
        FUNC_7(VAR_16, VAR_0, VAR_19);
      }

      else if( VAR_18>=2 && 0==FUNC_15(VAR_17, "-verbose", VAR_18) ){
        if( ++VAR_13==(VAR_8-1) ) FUNC_3("-verbose");
        VAR_14 = FUNC_2(VAR_9[VAR_13]);
      }

      else{
        FUNC_17(VAR_9);
      }
    }
  }

  if( VAR_11==VAR_5 ){
    VAR_11 = FUNC_6(VAR_16, &VAR_12);
  }

  if( VAR_11==VAR_5 ){
    int VAR_20 = FUNC_8(VAR_16);
    if( VAR_14>0 ){
      const char *VAR_21 = FUNC_11(VAR_16,0,VAR_1);
      FUNC_1(VAR_7, "-- Candidates -------------------------------\n");
      FUNC_1(VAR_7, "%s\n", VAR_21);
    }
    for(VAR_13=0; VAR_13<VAR_20; VAR_13++){
      const char *VAR_22 = FUNC_11(VAR_16, VAR_13, VAR_4);
      const char *VAR_23 = FUNC_11(VAR_16, VAR_13, VAR_2);
      const char *VAR_24 = FUNC_11(VAR_16, VAR_13, VAR_3);
      if( VAR_23==0 ) VAR_23 = "(no new indexes)\n";
      if( VAR_14>0 ){
        FUNC_1(VAR_7, "-- Query %d ----------------------------------\n",VAR_13+1);
        FUNC_1(VAR_7, "%s\n\n", VAR_22);
      }
      FUNC_1(VAR_7, "%s\n%s\n", VAR_23, VAR_24);
    }
  }else{
    FUNC_1(VAR_6, "Error: %s\n", VAR_12 ? VAR_12 : "?");
  }

  FUNC_9(VAR_16);
  FUNC_13(VAR_12);
  return VAR_11;
}
