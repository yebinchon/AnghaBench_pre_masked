
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_stmt ;
typedef int sqlite3 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int *,int,char const*,int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 char* FUNC_6 (int *,int) ;
 char* FUNC_7 (int *) ;
 int FUNC_8 (int *,char*,int ,int ,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char*) ;
 char* FUNC_11 (char*,char const*) ;
 int FUNC_12 (char*,int **,int ,int ) ;
 int FUNC_13 (int *,char*,int,int **,int ) ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (char const*,char const*,int) ;
 int VAR_3 ;
 scalar_t__ FUNC_17 (char const*,char*) ;
 char* FUNC_18 (char const*,char*) ;
 int FUNC_19 (char*,int ,int ) ;
 int FUNC_20 (char*) ;

int FUNC_21(int VAR_4, char **VAR_5){
  sqlite3 *VAR_6 = 0;
  sqlite3_stmt *VAR_7 = 0;
  char *VAR_8;
  int VAR_9 = 0;
  int VAR_10;
  int VAR_11 = 0;
  int VAR_12, VAR_13;
  const char *VAR_14 = 0;
  sqlite3_stmt *VAR_15 = 0;
  int VAR_16 = 0;
  int VAR_17 = 0;

  for(VAR_12=VAR_13=1; VAR_12<VAR_4; VAR_12++){
    const char *VAR_18 = VAR_5[VAR_12];
    if( VAR_18[0]=='-' ){
      VAR_18++;
      if( VAR_18[0]=='-' ) VAR_18++;
      if( FUNC_17(VAR_18,"progress")==0 ){
        if( VAR_12+1<VAR_4 ){
          VAR_17 = FUNC_19(VAR_5[++VAR_12],0,0);
          continue;
        }
        FUNC_2("The --progress option requires an argument\n");
        FUNC_0(0);
      }
      if( FUNC_17(VAR_18,"q")==0 ){
        VAR_11 = 1;
        continue;
      }
      if( FUNC_17(VAR_18,"using")==0 ){
        if( VAR_12+1<VAR_4 ){
          VAR_14 = VAR_5[++VAR_12];
          continue;
        }
        FUNC_2("The --using option requires an argument\n");
        FUNC_0(0);
      }
      if( FUNC_17(VAR_18, "help")==0 || FUNC_17(VAR_18, "?")==0 ){
        FUNC_20(VAR_5[0]);
      }
      FUNC_2("Unknown command-line option: \"%s\"\n", VAR_5[VAR_12]);
      FUNC_0(0);
    }else{
      if( VAR_13<VAR_12 ) VAR_5[VAR_13++] = VAR_5[VAR_12];
    }
  }
  VAR_4 = VAR_13;

  if( VAR_4!=3 ) FUNC_20(VAR_5[0]);
  VAR_10 = FUNC_12(VAR_5[1], &VAR_6, VAR_0, 0);
  if( VAR_10 ){
    FUNC_2("Cannot open \"%s\" for reading: %s\n", VAR_5[1], FUNC_7(VAR_6));
    goto errorOut;
  }
  VAR_10 = FUNC_13(VAR_6, "SELECT * FROM sqlite_master", -1, &VAR_7, 0);
  if( VAR_10 ){
    FUNC_2("Cannot read the schema from \"%s\" - %s\n", VAR_5[1],
           FUNC_7(VAR_6));
    goto errorOut;
  }
  FUNC_9(VAR_7);
  VAR_7 = 0;
  VAR_10 = FUNC_8(VAR_6,
     "CREATE TABLE temp.idxu(\n"
     "  tbl TEXT COLLATE nocase,\n"
     "  idx TEXT COLLATE nocase,\n"
     "  cnt INT,\n"
     "  PRIMARY KEY(idx)\n"
     ") WITHOUT ROWID;", 0, 0, 0);
  if( VAR_10 ){
    FUNC_2("Cannot create the result table - %s\n",
           FUNC_7(VAR_6));
    goto errorOut;
  }
  VAR_10 = FUNC_8(VAR_6,
     "INSERT INTO temp.idxu(tbl,idx,cnt)"
     " SELECT tbl_name, name, 0 FROM sqlite_master"
     " WHERE type='index' AND sql IS NOT NULL", 0, 0, 0);


  VAR_8 = FUNC_11("ATTACH %Q AS log", VAR_5[2]);
  VAR_10 = FUNC_8(VAR_6, VAR_8, 0, 0, 0);
  FUNC_10(VAR_8);
  if( VAR_10 ){
    FUNC_2("Cannot open the LOG database \"%s\" - %s\n",
           VAR_5[2], FUNC_7(VAR_6));
    goto errorOut;
  }
  VAR_10 = FUNC_13(VAR_6,
     "SELECT sql, rowid FROM log.sqllog"
     " WHERE upper(substr(sql,1,5)) NOT IN ('BEGIN','COMMI','ROLLB','PRAGM')",
                          -1, &VAR_7, 0);
  if( VAR_10 ){
    FUNC_2("Cannot read the SQLLOG table in the LOG database \"%s\" - %s\n",
           VAR_5[2], FUNC_7(VAR_6));
    goto errorOut;
  }

  VAR_10 = FUNC_13(VAR_6,
    "UPDATE temp.idxu SET cnt=cnt+1 WHERE idx=?1",
    -1, &VAR_15, 0);
  if( VAR_10 ){
    FUNC_2("Cannot prepare a statement to increment a counter for "
           "indexes used\n");
    goto errorOut;
  }


  while( FUNC_15(VAR_7)==VAR_1 ){
    const char *VAR_19 = (const char*)FUNC_6(VAR_7, 0);
    sqlite3_stmt *VAR_20;
    if( VAR_19==0 ) continue;
    VAR_8 = FUNC_11("EXPLAIN QUERY PLAN %s", VAR_19);
    VAR_10 = FUNC_13(VAR_6, VAR_8, -1, &VAR_20, 0);
    FUNC_10(VAR_8);
    if( VAR_10 ){
      if( !VAR_11 ){
        FUNC_2("Cannot compile LOG entry %d (%s): %s\n",
             FUNC_5(VAR_7, 1), VAR_19, FUNC_7(VAR_6));
        FUNC_1(VAR_3);
      }
      VAR_9++;
    }else{
      VAR_16++;
      if( VAR_17>0 && (VAR_16%VAR_17)==0 ){
        FUNC_2("%d...\n", VAR_16);
        FUNC_1(VAR_3);
      }
      while( FUNC_15(VAR_20)==VAR_1 ){
        const char *VAR_21 = (const char*)FUNC_6(VAR_20,3);
        const char *VAR_22, *VAR_23;
        int VAR_24;

        VAR_22 = FUNC_18(VAR_21, " USING INDEX ");
        if( VAR_22==0 ) continue;
        VAR_22 += 13;
        for(VAR_23=VAR_22+1; VAR_23[0] && VAR_23[1]!='('; VAR_23++){}
        VAR_24 = VAR_23 - VAR_22;
        if( VAR_14 && FUNC_16(VAR_14, VAR_22, VAR_24)==0 ){
          FUNC_2("Using %s:\n%s\n", VAR_14, VAR_19);
          FUNC_1(VAR_3);
        }
        FUNC_3(VAR_15,1,VAR_22,VAR_24,VAR_2);
        FUNC_15(VAR_15);
        FUNC_14(VAR_15);
      }
    }
    FUNC_9(VAR_20);
  }
  FUNC_9(VAR_7);


  VAR_10 = FUNC_13(VAR_6,
     "SELECT tbl, idx, cnt, "
     "   (SELECT group_concat(name,',') FROM pragma_index_info(idx))"
     " FROM temp.idxu, main.sqlite_master"
     " WHERE temp.idxu.tbl=main.sqlite_master.tbl_name"
     "   AND temp.idxu.idx=main.sqlite_master.name"
     " ORDER BY cnt DESC, tbl, idx",
     -1, &VAR_7, 0);
  if( VAR_10 ){
    FUNC_2("Cannot query the result table - %s\n",
           FUNC_7(VAR_6));
    goto errorOut;
  }
  while( FUNC_15(VAR_7)==VAR_1 ){
    FUNC_2("%10d %s on %s(%s)\n",
       FUNC_5(VAR_7, 2),
       FUNC_6(VAR_7, 1),
       FUNC_6(VAR_7, 0),
       FUNC_6(VAR_7, 3));
  }
  FUNC_9(VAR_7);
  VAR_7 = 0;

errorOut:
  FUNC_9(VAR_15);
  FUNC_9(VAR_7);
  FUNC_4(VAR_6);
  return VAR_9;
}
