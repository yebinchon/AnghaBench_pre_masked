
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_vfs ;
typedef int sqlite3 ;


 scalar_t__ FUNC_0 (char) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char const*,...) ;
 int FUNC_2 (int *,int *,char*) ;
 char* FUNC_3 (char const*,int*) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (int *) ;
 int * FUNC_6 (char*,int ,char const*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char const*,int **,int,char*) ;
 int VAR_3 ;
 scalar_t__ FUNC_9 (char*,char*) ;

int FUNC_10(int VAR_4, char **VAR_5){

  const char VAR_6[] =
    "Usage: %s options...\n"
    "  where available options are:\n"
    "\n"
    "    -db      DATABASE-FILE  (database file to operate on)\n"
    "    -script  SCRIPT-FILE    (script file to read sql from)\n"
    "    -log     LOG-FILE       (log file to create)\n"
    "    -logdata                (log all data to log file)\n"
    "\n"
    "  Options -db, -script and -log are compulsory\n"
    "\n"
  ;

  const char *VAR_7 = 0;
  const char *VAR_8 = 0;
  const char *VAR_9 = 0;
  int VAR_10 = 0;

  int VAR_11;
  int VAR_12, VAR_13;
  int VAR_14;

  sqlite3_vfs *VAR_15;

  char *VAR_16 = 0;
  int VAR_17;

  sqlite3 *VAR_18;

  for(VAR_11=1; VAR_11<VAR_4; VAR_11++){
    if( FUNC_9("-db", VAR_5[VAR_11]) && (VAR_11+1)<VAR_4 ){
      VAR_7 = VAR_5[++VAR_11];
    }

    else if( FUNC_9("-script", VAR_5[VAR_11]) && (VAR_11+1)<VAR_4 ){
      VAR_8 = VAR_5[++VAR_11];
    }

    else if( FUNC_9("-log", VAR_5[VAR_11]) && (VAR_11+1)<VAR_4 ){
      VAR_9 = VAR_5[++VAR_11];
    }

    else if( FUNC_9("-logdata", VAR_5[VAR_11]) ){
      VAR_10 = 1;
    }

    else {
      goto usage;
    }
  }
  if( !VAR_7 || !VAR_8 || !VAR_9 ) goto usage;

  VAR_16 = FUNC_3(VAR_8, &VAR_17);
  if( !VAR_16 ){
    FUNC_1(VAR_3, "Failed to read script file\n");
    return -1;
  }

  VAR_15 = FUNC_6("logging", 0, VAR_9, VAR_10);

  VAR_14 = FUNC_8(
     VAR_7, &VAR_18, VAR_2 | VAR_1, "logging"
  );
  if( VAR_14!=VAR_0 ){
    FUNC_1(VAR_3, "Failed to open db: %s\n", FUNC_5(VAR_18));
    return -2;
  }

  for(VAR_12=VAR_13=0; VAR_13<VAR_17; VAR_13++){
    if( VAR_16[VAR_13]==';' ){
      int VAR_19;
      char VAR_20 = VAR_16[VAR_13+1];
      VAR_16[VAR_13+1] = 0;
      VAR_19 = FUNC_4(&VAR_16[VAR_12]);
      VAR_16[VAR_13+1] = VAR_20;
      if( VAR_19 ){
        VAR_16[VAR_13] = 0;
        while( VAR_12<VAR_13 && FUNC_0(VAR_16[VAR_12]) ){ VAR_12++; }
        if( VAR_12<VAR_13 ){
          FUNC_2(VAR_15, VAR_18, &VAR_16[VAR_12]);
        }
        VAR_16[VAR_13] = ';';
        VAR_12 = VAR_13+1;
      }
    }
  }

  FUNC_7(VAR_15);
  return 0;

usage:
  FUNC_1(VAR_3, VAR_6, VAR_5[0]);
  return -3;
}
