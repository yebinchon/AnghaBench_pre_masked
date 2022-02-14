
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_stmt ;
typedef int sqlite3 ;


 scalar_t__ VAR_0 ;
 char** VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (int *,char const*) ;
 int VAR_2 ;
 int * FUNC_3 (int *,char*) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (int *,char const*) ;
 int FUNC_6 (int *,char const*) ;
 int FUNC_7 (int *,char const*) ;
 int FUNC_8 (int *,char const*) ;
 int FUNC_9 (int *,char const*) ;
 int FUNC_10 (int *,char const*) ;
 int FUNC_11 (int *,char const*) ;
 char* FUNC_12 (int *,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (char*,int **) ;
 scalar_t__ FUNC_15 (int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_16 (char const*,char*) ;
 int FUNC_17 (char*) ;

int FUNC_18(int VAR_4, char **VAR_5){
  sqlite3 *VAR_6;
  int VAR_7;
  const char *VAR_8;
  const char *VAR_9;

  if( VAR_4<2 ) FUNC_17(VAR_5[0]);
  VAR_7 = FUNC_14(VAR_5[1], &VAR_6);
  if( VAR_7 ){
    FUNC_1(VAR_3, "Cannot open %s\n", VAR_5[1]);
    FUNC_0(1);
  }
  if( VAR_4==2 ){
    sqlite3_stmt *VAR_10;
    int VAR_11 = 0;
    VAR_10 = FUNC_3(VAR_6, "SELECT b.sql"
                        "  FROM sqlite_master a, sqlite_master b"
                        " WHERE a.name GLOB '*_segdir'"
                        "   AND b.name=substr(a.name,1,length(a.name)-7)"
                        " ORDER BY 1");
    while( FUNC_15(VAR_10)==VAR_0 ){
      VAR_11++;
      FUNC_4("%s;\n", FUNC_12(VAR_10, 0));
    }
    FUNC_13(VAR_10);
    if( VAR_11==0 ){
      FUNC_4("/* No FTS3/4 tables found in database %s */\n", VAR_5[1]);
    }
    return 0;
  }
  if( VAR_4<4 ) FUNC_17(VAR_5[0]);
  VAR_8 = VAR_5[2];
  VAR_9 = VAR_5[3];
  VAR_2 = VAR_4-4;
  VAR_1 = VAR_5+4;
  if( FUNC_16(VAR_9,"big-segments")==0 ){
    FUNC_2(VAR_6, VAR_8);
  }else if( FUNC_16(VAR_9,"doclist")==0 ){
    if( VAR_4<7 ) FUNC_17(VAR_5[0]);
    FUNC_5(VAR_6, VAR_8);
  }else if( FUNC_16(VAR_9,"schema")==0 ){
    FUNC_6(VAR_6, VAR_8);
  }else if( FUNC_16(VAR_9,"segdir")==0 ){
    FUNC_7(VAR_6, VAR_8);
  }else if( FUNC_16(VAR_9,"segment")==0 ){
    if( VAR_4<5 ) FUNC_17(VAR_5[0]);
    FUNC_8(VAR_6, VAR_8);
  }else if( FUNC_16(VAR_9,"segment-stats")==0 ){
    FUNC_9(VAR_6, VAR_8);
  }else if( FUNC_16(VAR_9,"stat")==0 ){
    FUNC_10(VAR_6, VAR_8);
  }else if( FUNC_16(VAR_9,"vocabulary")==0 ){
    FUNC_11(VAR_6, VAR_8);
  }else{
    FUNC_17(VAR_5[0]);
  }
  return 0;
}
