
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int sqlite3_stmt ;
struct TYPE_7__ {int fDebug; int bSchemaOnly; int db; } ;
struct TYPE_6__ {char* z; } ;
typedef TYPE_1__ Str ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 char** FUNC_0 (char*,char const*,int*,int ) ;
 int * FUNC_1 (char*,char const*,...) ;
 int FUNC_2 (char const*,int *) ;
 int FUNC_3 (int *,char*,...) ;
 TYPE_5__ VAR_3 ;
 int FUNC_4 (char**) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (char*,...) ;
 char* FUNC_7 (char const*) ;
 int FUNC_8 (int *,int) ;
 char* FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (char*) ;
 scalar_t__ FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (char*,char*) ;
 scalar_t__ FUNC_15 (int ,char*,char const*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (TYPE_1__*) ;
 int FUNC_18 (TYPE_1__*,char*,...) ;

__attribute__((used)) static void FUNC_19(const char *VAR_4, FILE *VAR_5){
  char *VAR_6 = FUNC_7(VAR_4);
  char **VAR_7 = 0;
  char **VAR_8 = 0;
  int VAR_9;
  int VAR_10;
  int VAR_11 = 0;
  int VAR_12;
  int VAR_13;
  int VAR_14;
  const char *VAR_15;
  Str VAR_16;
  sqlite3_stmt *VAR_17;

  FUNC_17(&VAR_16);
  if( VAR_3.fDebug==VAR_0 ){




    VAR_7 = FUNC_0("aux",VAR_4, &VAR_9, 0);
    if( VAR_7==0 ){
      FUNC_6("Rowid not accessible for %s\n", VAR_6);
    }else{
      FUNC_6("%s:", VAR_6);
      for(VAR_14=0; VAR_7[VAR_14]; VAR_14++){
        FUNC_6(" %s", VAR_7[VAR_14]);
        if( VAR_14+1==VAR_9 ) FUNC_6(" *");
      }
      FUNC_6("\n");
    }
    goto end_diff_one_table;
  }


  if( FUNC_15(VAR_3.db,"aux",VAR_4,0,0,0,0,0,0) ){
    if( !FUNC_15(VAR_3.db,"main",VAR_4,0,0,0,0,0,0) ){

      FUNC_3(VAR_5, "DROP TABLE %s;\n", VAR_6);
    }
    goto end_diff_one_table;
  }

  if( FUNC_15(VAR_3.db,"main",VAR_4,0,0,0,0,0,0) ){

    FUNC_2(VAR_4, VAR_5);
    goto end_diff_one_table;
  }

  VAR_7 = FUNC_0("main", VAR_4, &VAR_9, 0);
  VAR_8 = FUNC_0("aux", VAR_4, &VAR_10, 0);
  if( VAR_7 && VAR_8 ){
    for(VAR_11=0; VAR_7[VAR_11] && VAR_8[VAR_11]; VAR_11++){
      if( FUNC_14(VAR_7[VAR_11],VAR_8[VAR_11])!=0 ) break;
    }
  }
  if( VAR_7==0
   || VAR_8==0
   || VAR_9!=VAR_10
   || VAR_7[VAR_11]
  ){

    FUNC_3(VAR_5, "DROP TABLE %s; -- due to schema mismatch\n", VAR_6);
    FUNC_2(VAR_4, VAR_5);
    goto end_diff_one_table;
  }


  for(VAR_12=VAR_11; VAR_8[VAR_12]; VAR_12++){
    FUNC_3(VAR_5, "ALTER TABLE %s ADD COLUMN %s;\n", VAR_6, FUNC_7(VAR_8[VAR_12]));
  }
  VAR_13 = VAR_10+1+2*(VAR_12-VAR_10);
  if( VAR_12>VAR_10 ){
    VAR_15 = "SELECT ";
    for(VAR_14=0; VAR_14<VAR_9; VAR_14++){
      FUNC_18(&VAR_16, "%sB.%s", VAR_15, VAR_7[VAR_14]);
      VAR_15 = ", ";
    }
    FUNC_18(&VAR_16, ", 1%s -- changed row\n", VAR_9==VAR_11 ? "" : ",");
    while( VAR_7[VAR_14] ){
      FUNC_18(&VAR_16, "       A.%s IS NOT B.%s, B.%s%s\n",
                VAR_7[VAR_14], VAR_8[VAR_14], VAR_8[VAR_14], VAR_8[VAR_14+1]==0 ? "" : ",");
      VAR_14++;
    }
    while( VAR_8[VAR_14] ){
      FUNC_18(&VAR_16, "       B.%s IS NOT NULL, B.%s%s\n",
                VAR_8[VAR_14], VAR_8[VAR_14], VAR_8[VAR_14+1]==0 ? "" : ",");
      VAR_14++;
    }
    FUNC_18(&VAR_16, "  FROM main.%s A, aux.%s B\n", VAR_6, VAR_6);
    VAR_15 = " WHERE";
    for(VAR_14=0; VAR_14<VAR_9; VAR_14++){
      FUNC_18(&VAR_16, "%s A.%s=B.%s", VAR_15, VAR_7[VAR_14], VAR_7[VAR_14]);
      VAR_15 = " AND";
    }
    VAR_15 = "\n   AND (";
    while( VAR_7[VAR_14] ){
      FUNC_18(&VAR_16, "%sA.%s IS NOT B.%s%s\n",
                VAR_15, VAR_7[VAR_14], VAR_8[VAR_14], VAR_8[VAR_14+1]==0 ? ")" : "");
      VAR_15 = "        OR ";
      VAR_14++;
    }
    while( VAR_8[VAR_14] ){
      FUNC_18(&VAR_16, "%sB.%s IS NOT NULL%s\n",
                VAR_15, VAR_8[VAR_14], VAR_8[VAR_14+1]==0 ? ")" : "");
      VAR_15 = "        OR ";
      VAR_14++;
    }
    FUNC_18(&VAR_16, " UNION ALL\n");
  }
  VAR_15 = "SELECT ";
  for(VAR_14=0; VAR_14<VAR_9; VAR_14++){
    FUNC_18(&VAR_16, "%sA.%s", VAR_15, VAR_7[VAR_14]);
    VAR_15 = ", ";
  }
  FUNC_18(&VAR_16, ", 2%s -- deleted row\n", VAR_9==VAR_11 ? "" : ",");
  while( VAR_8[VAR_14] ){
    FUNC_18(&VAR_16, "       NULL, NULL%s\n", VAR_14==VAR_12-1 ? "" : ",");
    VAR_14++;
  }
  FUNC_18(&VAR_16, "  FROM main.%s A\n", VAR_6);
  FUNC_18(&VAR_16, " WHERE NOT EXISTS(SELECT 1 FROM aux.%s B\n", VAR_6);
  VAR_15 = "                   WHERE";
  for(VAR_14=0; VAR_14<VAR_9; VAR_14++){
    FUNC_18(&VAR_16, "%s A.%s=B.%s", VAR_15, VAR_7[VAR_14], VAR_7[VAR_14]);
    VAR_15 = " AND";
  }
  FUNC_18(&VAR_16, ")\n");
  VAR_15 = " UNION ALL\nSELECT ";
  for(VAR_14=0; VAR_14<VAR_9; VAR_14++){
    FUNC_18(&VAR_16, "%sB.%s", VAR_15, VAR_7[VAR_14]);
    VAR_15 = ", ";
  }
  FUNC_18(&VAR_16, ", 3%s -- inserted row\n", VAR_9==VAR_11 ? "" : ",");
  while( VAR_8[VAR_14] ){
    FUNC_18(&VAR_16, "       1, B.%s%s\n", VAR_8[VAR_14], VAR_8[VAR_14+1]==0 ? "" : ",");
    VAR_14++;
  }
  FUNC_18(&VAR_16, "  FROM aux.%s B\n", VAR_6);
  FUNC_18(&VAR_16, " WHERE NOT EXISTS(SELECT 1 FROM main.%s A\n", VAR_6);
  VAR_15 = "                   WHERE";
  for(VAR_14=0; VAR_14<VAR_9; VAR_14++){
    FUNC_18(&VAR_16, "%s A.%s=B.%s", VAR_15, VAR_7[VAR_14], VAR_7[VAR_14]);
    VAR_15 = " AND";
  }
  FUNC_18(&VAR_16, ")\n ORDER BY");
  VAR_15 = " ";
  for(VAR_14=1; VAR_14<=VAR_9; VAR_14++){
    FUNC_18(&VAR_16, "%s%d", VAR_15, VAR_14);
    VAR_15 = ", ";
  }
  FUNC_18(&VAR_16, ";\n");

  if( VAR_3.fDebug & VAR_1 ){
    FUNC_6("SQL for %s:\n%s\n", VAR_6, VAR_16.z);
    goto end_diff_one_table;
  }


  VAR_17 = FUNC_1(
    "SELECT name FROM main.sqlite_master"
    " WHERE type='index' AND tbl_name=%Q"
    "   AND sql IS NOT NULL"
    "   AND sql NOT IN (SELECT sql FROM aux.sqlite_master"
    "                    WHERE type='index' AND tbl_name=%Q"
    "                      AND sql IS NOT NULL)",
    VAR_4, VAR_4);
  while( VAR_2==FUNC_13(VAR_17) ){
    char *VAR_18 = FUNC_7((const char*)FUNC_9(VAR_17,0));
    FUNC_3(VAR_5, "DROP INDEX %s;\n", VAR_18);
    FUNC_12(VAR_18);
  }
  FUNC_11(VAR_17);


  if( !VAR_3.bSchemaOnly ){
    VAR_17 = FUNC_1("%s", VAR_16.z);
    while( VAR_2==FUNC_13(VAR_17) ){
      int VAR_19 = FUNC_8(VAR_17, VAR_9);
      if( VAR_19==1 || VAR_19==2 ){
        if( VAR_19==1 ){
          FUNC_3(VAR_5, "UPDATE %s", VAR_6);
          VAR_15 = " SET";
          for(VAR_14=VAR_9+1; VAR_14<VAR_13; VAR_14+=2){
            if( FUNC_8(VAR_17,VAR_14)==0 ) continue;
            FUNC_3(VAR_5, "%s %s=", VAR_15, VAR_8[(VAR_14+VAR_9-1)/2]);
            VAR_15 = ",";
            FUNC_5(VAR_5, FUNC_10(VAR_17,VAR_14+1));
          }
        }else{
          FUNC_3(VAR_5, "DELETE FROM %s", VAR_6);
        }
        VAR_15 = " WHERE";
        for(VAR_14=0; VAR_14<VAR_9; VAR_14++){
          FUNC_3(VAR_5, "%s %s=", VAR_15, VAR_8[VAR_14]);
          FUNC_5(VAR_5, FUNC_10(VAR_17,VAR_14));
          VAR_15 = " AND";
        }
        FUNC_3(VAR_5, ";\n");
      }else{
        FUNC_3(VAR_5, "INSERT INTO %s(%s", VAR_6, VAR_8[0]);
        for(VAR_14=1; VAR_8[VAR_14]; VAR_14++) FUNC_3(VAR_5, ",%s", VAR_8[VAR_14]);
        FUNC_3(VAR_5, ") VALUES");
        VAR_15 = "(";
        for(VAR_14=0; VAR_14<VAR_10; VAR_14++){
          FUNC_3(VAR_5, "%s", VAR_15);
          VAR_15 = ",";
          FUNC_5(VAR_5, FUNC_10(VAR_17,VAR_14));
        }
        for(VAR_14=VAR_10+2; VAR_14<VAR_13; VAR_14+=2){
          FUNC_3(VAR_5, ",");
          FUNC_5(VAR_5, FUNC_10(VAR_17,VAR_14));
        }
        FUNC_3(VAR_5, ");\n");
      }
    }
    FUNC_11(VAR_17);
  }


  VAR_17 = FUNC_1(
    "SELECT sql FROM aux.sqlite_master"
    " WHERE type='index' AND tbl_name=%Q"
    "   AND sql IS NOT NULL"
    "   AND sql NOT IN (SELECT sql FROM main.sqlite_master"
    "                    WHERE type='index' AND tbl_name=%Q"
    "                      AND sql IS NOT NULL)",
    VAR_4, VAR_4);
  while( VAR_2==FUNC_13(VAR_17) ){
    FUNC_3(VAR_5, "%s;\n", FUNC_9(VAR_17,0));
  }
  FUNC_11(VAR_17);

end_diff_one_table:
  FUNC_16(&VAR_16);
  FUNC_12(VAR_6);
  FUNC_4(VAR_7);
  FUNC_4(VAR_8);
  return;
}
