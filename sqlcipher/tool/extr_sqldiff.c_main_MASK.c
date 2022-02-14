
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3_stmt ;
typedef int azExt ;
struct TYPE_2__ {char* zArgv0; int bSchemaPK; int bSchemaOnly; int bHandleVtab; int db; int fDebug; } ;
typedef int FILE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 void FUNC_1 (char const*,int *) ;
 int FUNC_2 (char*,...) ;
 int * FUNC_3 (char*,int ) ;
 void FUNC_4 (char const*,int *) ;
 int * FUNC_5 (char*,char*) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (char**) ;
 TYPE_1__ VAR_2 ;
 int FUNC_8 (char*) ;
 void FUNC_9 (char const*,int *) ;
 char** FUNC_10 (char**,int) ;
 int FUNC_11 () ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int *,int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,int) ;
 int FUNC_16 (int ,char*,int ,int ,char**) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int ,char*,int ,char**) ;
 char* FUNC_19 (char*,char const*) ;
 int FUNC_20 (char const*,int *) ;
 scalar_t__ FUNC_21 (int *) ;
 int * VAR_3 ;
 scalar_t__ FUNC_22 (char const*,char*) ;
 int FUNC_23 (char*,int ,int ) ;
 void FUNC_24 (char const*,int *) ;

int FUNC_25(int VAR_4, char **VAR_5){
  const char *VAR_6 = 0;
  const char *VAR_7 = 0;
  int VAR_8;
  int VAR_9;
  char *VAR_10 = 0;
  char *VAR_11;
  sqlite3_stmt *VAR_12;
  char *VAR_13 = 0;
  FILE *VAR_14 = VAR_3;
  void (*VAR_15)(const char*,FILE*) = FUNC_4;

  int VAR_16 = 0;
  char **VAR_17 = 0;

  int VAR_18 = 0;
  int VAR_19 = 0;

  VAR_2.zArgv0 = VAR_5[0];
  FUNC_14(VAR_0);
  for(VAR_8=1; VAR_8<VAR_4; VAR_8++){
    const char *VAR_20 = VAR_5[VAR_8];
    if( VAR_20[0]=='-' ){
      VAR_20++;
      if( VAR_20[0]=='-' ) VAR_20++;
      if( FUNC_22(VAR_20,"changeset")==0 ){
        if( VAR_8==VAR_4-1 ) FUNC_2("missing argument to %s", VAR_5[VAR_8]);
        VAR_14 = FUNC_5(VAR_5[++VAR_8], "wb");
        if( VAR_14==0 ) FUNC_2("cannot open: %s", VAR_5[VAR_8]);
        VAR_15 = FUNC_1;
        VAR_19 = 1;
      }else
      if( FUNC_22(VAR_20,"debug")==0 ){
        if( VAR_8==VAR_4-1 ) FUNC_2("missing argument to %s", VAR_5[VAR_8]);
        VAR_2.fDebug = FUNC_23(VAR_5[++VAR_8], 0, 0);
      }else
      if( FUNC_22(VAR_20,"help")==0 ){
        FUNC_11();
        return 0;
      }else

      if( FUNC_22(VAR_20,"lib")==0 || FUNC_22(VAR_20,"L")==0 ){
        if( VAR_8==VAR_4-1 ) FUNC_2("missing argument to %s", VAR_5[VAR_8]);
        VAR_17 = FUNC_10(VAR_17, sizeof(VAR_17[0])*(VAR_16+1));
        if( VAR_17==0 ) FUNC_2("out of memory");
        VAR_17[VAR_16++] = VAR_5[++VAR_8];
      }else

      if( FUNC_22(VAR_20,"primarykey")==0 ){
        VAR_2.bSchemaPK = 1;
      }else
      if( FUNC_22(VAR_20,"rbu")==0 ){
        VAR_15 = FUNC_9;
      }else
      if( FUNC_22(VAR_20,"schema")==0 ){
        VAR_2.bSchemaOnly = 1;
      }else
      if( FUNC_22(VAR_20,"summary")==0 ){
        VAR_15 = FUNC_24;
      }else
      if( FUNC_22(VAR_20,"table")==0 ){
        if( VAR_8==VAR_4-1 ) FUNC_2("missing argument to %s", VAR_5[VAR_8]);
        VAR_13 = VAR_5[++VAR_8];
      }else
      if( FUNC_22(VAR_20,"transaction")==0 ){
        VAR_18 = 1;
      }else
      if( FUNC_22(VAR_20,"vtab")==0 ){
        VAR_2.bHandleVtab = 1;
      }else
      {
        FUNC_2("unknown option: %s", VAR_5[VAR_8]);
      }
    }else if( VAR_6==0 ){
      VAR_6 = VAR_5[VAR_8];
    }else if( VAR_7==0 ){
      VAR_7 = VAR_5[VAR_8];
    }else{
      FUNC_2("unknown argument: %s", VAR_5[VAR_8]);
    }
  }
  if( VAR_7==0 ){
    FUNC_2("two database arguments required");
  }
  VAR_9 = FUNC_20(VAR_6, &VAR_2.db);
  if( VAR_9 ){
    FUNC_2("cannot open database file \"%s\"", VAR_6);
  }
  VAR_9 = FUNC_16(VAR_2.db, "SELECT * FROM sqlite_master", 0, 0, &VAR_10);
  if( VAR_9 || VAR_10 ){
    FUNC_2("\"%s\" does not appear to be a valid SQLite database", VAR_6);
  }

  FUNC_15(VAR_2.db, 1);
  for(VAR_8=0; VAR_8<VAR_16; VAR_8++){
    VAR_9 = FUNC_18(VAR_2.db, VAR_17[VAR_8], 0, &VAR_10);
    if( VAR_9 || VAR_10 ){
      FUNC_2("error loading %s: %s", VAR_17[VAR_8], VAR_10);
    }
  }
  FUNC_7(VAR_17);

  VAR_11 = FUNC_19("ATTACH %Q as aux;", VAR_7);
  VAR_9 = FUNC_16(VAR_2.db, VAR_11, 0, 0, &VAR_10);
  if( VAR_9 || VAR_10 ){
    FUNC_2("cannot attach database \"%s\"", VAR_7);
  }
  VAR_9 = FUNC_16(VAR_2.db, "SELECT * FROM aux.sqlite_master", 0, 0, &VAR_10);
  if( VAR_9 || VAR_10 ){
    FUNC_2("\"%s\" does not appear to be a valid SQLite database", VAR_7);
  }

  if( VAR_19 ) VAR_18 = 0;
  if( VAR_18 ) FUNC_6(VAR_14, "BEGIN TRANSACTION;\n");
  if( VAR_15==FUNC_9 ){
    FUNC_6(VAR_14, "CREATE TABLE IF NOT EXISTS rbu_count"
           "(tbl TEXT PRIMARY KEY COLLATE NOCASE, cnt INTEGER) "
           "WITHOUT ROWID;\n"
    );
  }
  if( VAR_13 ){
    VAR_15(VAR_13, VAR_14);
  }else{

    VAR_12 = FUNC_3("%s", FUNC_0() );
    while( VAR_1==FUNC_21(VAR_12) ){
      VAR_15((const char*)FUNC_13(VAR_12,0), VAR_14);
    }
    FUNC_17(VAR_12);
  }
  if( VAR_18 ) FUNC_8("COMMIT;\n");



  FUNC_12(VAR_2.db);
  return 0;
}
