
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_stmt ;
typedef int sqlite3 ;
typedef int azDb ;
typedef int Str ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int FUNC_0 (int *,char const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 (char**) ;
 int FUNC_9 () ;
 int FUNC_10 (char*) ;
 void* FUNC_11 (int) ;
 int FUNC_12 (char*,char*) ;
 int VAR_9 ;
 char** FUNC_13 (char**,int) ;
 int FUNC_14 () ;
 int FUNC_15 (int *,int ,unsigned int) ;
 int FUNC_16 (int) ;
 int FUNC_17 (char*) ;
 int FUNC_18 (int ,int ) ;
 int VAR_10 ;
 int FUNC_19 (int *) ;
 scalar_t__ FUNC_20 (int *,int ) ;
 int FUNC_21 (int ,void*,...) ;
 int FUNC_22 (int *) ;
 int FUNC_23 () ;
 int FUNC_24 (char*,int **,int ,char*) ;
 int FUNC_25 (int *,char*,int,int **,int ) ;
 int FUNC_26 (int *,int,int ,int*) ;
 scalar_t__ FUNC_27 (int *) ;
 int VAR_11 ;
 scalar_t__ FUNC_28 (char*,char*) ;
 int VAR_12 ;

int FUNC_29(int VAR_13, char **VAR_14){
  int VAR_15;
  int VAR_16 = 0;
  char **VAR_17 = 0;
  int VAR_18 = 0;
  int VAR_19 = 0;
  int VAR_20 = 0;
  int VAR_21 = 0;
  int VAR_22 = 0;
  int VAR_23;
  sqlite3 *VAR_24;
  sqlite3_stmt *VAR_25;
  Str VAR_26;
  unsigned VAR_27 = 0;

  for(VAR_15=1; VAR_15<VAR_13; VAR_15++){
    char *VAR_28 = VAR_14[VAR_15];
    if( VAR_28[0]!='-' ){
      VAR_17 = FUNC_13(VAR_17, sizeof(VAR_17[0])*(VAR_16+1));
      if( VAR_17==0 ) FUNC_5("out of memory");
      VAR_17[VAR_16++] = VAR_28;
      continue;
    }
    VAR_28++;
    if( VAR_28[0]=='-' ) VAR_28++;
    if( FUNC_28(VAR_28, "help")==0 ){
      FUNC_17(VAR_14[0]);
    }else if( FUNC_28(VAR_28, "limit-mem")==0 ){
      if( VAR_15==VAR_13-1 ) FUNC_5("missing argument to %s", VAR_14[VAR_15]);
      VAR_21 = FUNC_10(VAR_14[++VAR_15]);
    }else if( FUNC_28(VAR_28, "no-lookaside")==0 ){
      VAR_19 = 1;
    }else if( FUNC_28(VAR_28, "timeout")==0 ){
      if( VAR_15==VAR_13-1 ) FUNC_5("missing argument to %s", VAR_14[VAR_15]);
      VAR_22 = FUNC_10(VAR_14[++VAR_15]);
    }else if( FUNC_28(VAR_28, "trace")==0 ){
      VAR_27 |= VAR_7|VAR_8;
    }else if( FUNC_28(VAR_28, "limit-vdbe")==0 ){
      VAR_20 = 1;
    }else if( FUNC_28(VAR_28, "v")==0 || FUNC_28(VAR_28, "verbose")==0 ){
      VAR_18 = 1;
      VAR_27 |= VAR_8;
    }else{
      FUNC_5("unknown command-line option: \"%s\"\n", VAR_14[VAR_15]);
    }
  }
  if( VAR_16==0 ){
    FUNC_17(VAR_14[0]);
  }
  if( VAR_18 ){
    FUNC_21(VAR_2, VAR_10);
  }
  if( VAR_21>0 ){
    void *VAR_29 = FUNC_11( VAR_21 );
    if( VAR_29==0 ) FUNC_5("cannot allocate %d-byte heap\n", VAR_21);
    VAR_23 = FUNC_21(VAR_1, VAR_29, VAR_21, 32);
    if( VAR_23 ) FUNC_5("heap configuration failed: %d\n", VAR_23);
  }
  if( VAR_19 ){
    FUNC_21(VAR_3, 0, 0);
  }
  FUNC_9();
  FUNC_7();
  FUNC_2(&VAR_26);

  FUNC_18(VAR_0, VAR_12);

  for(VAR_15=0; VAR_15<VAR_16; VAR_15++){
    if( VAR_18 && VAR_16>1 ){
      FUNC_12("DATABASE-FILE: %s\n", VAR_17[VAR_15]);
      FUNC_6(VAR_11);
    }
    if( VAR_22 ) FUNC_16(VAR_22);
    FUNC_4("test.db", VAR_17[VAR_15]);
    VAR_23 = FUNC_24("test.db", &VAR_24, VAR_5, "inmem");
    if( VAR_23 ){
      FUNC_12("cannot open test.db for \"%s\"\n", VAR_17[VAR_15]);
      FUNC_14();
      continue;
    }

    if( VAR_20 ){
      FUNC_26(VAR_24, 100000, VAR_9, &VAR_20);
    }

    VAR_23 = FUNC_25(VAR_24, "SELECT sql FROM autoexec", -1, &VAR_25, 0);
    if( VAR_23==VAR_4 ){
      while( VAR_6==FUNC_27(VAR_25) ){
        FUNC_0(&VAR_26, (const char*)FUNC_20(VAR_25, 0));
        FUNC_0(&VAR_26, "\n");
      }
    }
    FUNC_22(VAR_25);
    FUNC_0(&VAR_26, "PRAGMA integrity_check;\n");
    FUNC_15(VAR_24, FUNC_3(&VAR_26), VAR_27);
    FUNC_19(VAR_24);
    FUNC_14();
    FUNC_1(&VAR_26);
    if( FUNC_23()>0 ){
      FUNC_8(VAR_17);
      FUNC_14();
      FUNC_5("memory leak of %lld bytes", FUNC_23());
    }
  }
  FUNC_1(&VAR_26);
  FUNC_14();
  return 0;
}
