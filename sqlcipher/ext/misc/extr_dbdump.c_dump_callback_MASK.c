
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int sqlite3_uint64 ;
typedef int sqlite3_stmt ;
typedef int r ;
struct TYPE_10__ {int writableSchema; int rc; int pArg; int (* xCallback ) (char*,int ) ;int nErr; int db; } ;
struct TYPE_9__ {char* z; } ;
typedef TYPE_1__ DText ;
typedef TYPE_2__ DState ;






 int VAR_0 ;
 scalar_t__ VAR_1 ;

 int FUNC_0 (TYPE_1__*,char const*,int ) ;
 int FUNC_1 (char**) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int*,double*,int) ;
 int FUNC_5 (TYPE_2__*,char*,...) ;
 int FUNC_6 (TYPE_2__*,char const*) ;
 int FUNC_7 (char const*) ;
 scalar_t__ FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int) ;
 double FUNC_10 (int *,int) ;
 double FUNC_11 (int *,int) ;
 scalar_t__ FUNC_12 (int *,int) ;
 int FUNC_13 (int *,int) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ,char*,int,int **,int ) ;
 scalar_t__ FUNC_16 (int *) ;
 scalar_t__ FUNC_17 (char*,char const*) ;
 scalar_t__ FUNC_18 (char const*,char*) ;
 scalar_t__ FUNC_19 (char const*,char*,int) ;
 int FUNC_20 (char*,int ) ;
 int FUNC_21 (char*,int ) ;
 int FUNC_22 (char*,int ) ;
 int FUNC_23 (char*,int ) ;
 int FUNC_24 (char*,int ) ;
 int FUNC_25 (char*,int ) ;
 int FUNC_26 (char*,int ) ;
 int FUNC_27 (char*,int ) ;
 int FUNC_28 (char*,int ) ;
 int FUNC_29 (char*,int ) ;
 int FUNC_30 (char*,int ) ;
 int FUNC_31 (char const*,int ) ;
 int FUNC_32 (char const*,int ) ;
 int FUNC_33 (char*,int ) ;
 int FUNC_34 (char*,int ) ;
 int FUNC_35 (char*,int ) ;
 char** FUNC_36 (TYPE_2__*,char const*) ;

__attribute__((used)) static int FUNC_37(void *VAR_2, int VAR_3, char **VAR_4, char **VAR_5){
  int VAR_6;
  const char *VAR_7;
  const char *VAR_8;
  const char *VAR_9;
  DState *VAR_10 = (DState*)VAR_2;
  sqlite3_stmt *VAR_11;

  (void)VAR_5;
  if( VAR_3!=3 ) return 1;
  VAR_7 = VAR_4[0];
  VAR_8 = VAR_4[1];
  VAR_9 = VAR_4[2];

  if( FUNC_18(VAR_7, "sqlite_sequence")==0 ){
    VAR_10->xCallback("DELETE FROM sqlite_sequence;\n", VAR_10->pArg);
  }else if( FUNC_17("sqlite_stat?", VAR_7)==0 ){
    VAR_10->xCallback("ANALYZE sqlite_master;\n", VAR_10->pArg);
  }else if( FUNC_19(VAR_7, "sqlite_", 7)==0 ){
    return 0;
  }else if( FUNC_19(VAR_9, "CREATE VIRTUAL TABLE", 20)==0 ){
    if( !VAR_10->writableSchema ){
      VAR_10->xCallback("PRAGMA writable_schema=ON;\n", VAR_10->pArg);
      VAR_10->writableSchema = 1;
    }
    FUNC_5(VAR_10,
       "INSERT INTO sqlite_master(type,name,tbl_name,rootpage,sql)"
       "VALUES('table','%q','%q',0,'%q');",
       VAR_7, VAR_7, VAR_9);
    return 0;
  }else{
    if( FUNC_17("CREATE TABLE ['\"]*", VAR_9)==0 ){
      VAR_10->xCallback("CREATE TABLE IF NOT EXISTS ", VAR_10->pArg);
      VAR_10->xCallback(VAR_9+13, VAR_10->pArg);
    }else{
      VAR_10->xCallback(VAR_9, VAR_10->pArg);
    }
    VAR_10->xCallback(";\n", VAR_10->pArg);
  }

  if( FUNC_18(VAR_8, "table")==0 ){
    DText VAR_12;
    DText VAR_13;
    char **VAR_14;
    int VAR_15;
    int VAR_16;

    VAR_14 = FUNC_36(VAR_10, VAR_7);
    if( VAR_14==0 ) return 0;

    FUNC_3(&VAR_13);
    FUNC_0(&VAR_13, "INSERT INTO ", 0);



    FUNC_0(&VAR_13, VAR_7, FUNC_7(VAR_7));





    if( VAR_14[0] ){
      FUNC_0(&VAR_13, "(", 0);
      FUNC_0(&VAR_13, VAR_14[0], 0);
      for(VAR_15=1; VAR_14[VAR_15]; VAR_15++){
        FUNC_0(&VAR_13, ",", 0);
        FUNC_0(&VAR_13, VAR_14[VAR_15], FUNC_7(VAR_14[VAR_15]));
      }
      FUNC_0(&VAR_13, ")", 0);
    }
    FUNC_0(&VAR_13, " VALUES(", 0);


    FUNC_3(&VAR_12);
    FUNC_0(&VAR_12, "SELECT ", 0);
    if( VAR_14[0] ){
      FUNC_0(&VAR_12, VAR_14[0], 0);
      FUNC_0(&VAR_12, ",", 0);
    }
    for(VAR_15=1; VAR_14[VAR_15]; VAR_15++){
      FUNC_0(&VAR_12, VAR_14[VAR_15], FUNC_7(VAR_14[VAR_15]));
      if( VAR_14[VAR_15+1] ){
        FUNC_0(&VAR_12, ",", 0);
      }
    }
    VAR_16 = VAR_15;
    if( VAR_14[0]==0 ) VAR_16--;
    FUNC_1(VAR_14);
    FUNC_0(&VAR_12, " FROM ", 0);
    FUNC_0(&VAR_12, VAR_7, FUNC_7(VAR_7));

    VAR_6 = FUNC_15(VAR_10->db, VAR_12.z, -1, &VAR_11, 0);
    if( VAR_6!=VAR_0 ){
      VAR_10->nErr++;
      if( VAR_10->rc==VAR_0 ) VAR_10->rc = VAR_6;
    }else{
      while( VAR_1==FUNC_16(VAR_11) ){
        VAR_10->xCallback(VAR_13.z, VAR_10->pArg);
        for(VAR_15=0; VAR_15<VAR_16; VAR_15++){
          if( VAR_15 ) VAR_10->xCallback(",", VAR_10->pArg);
          switch( FUNC_13(VAR_11,VAR_15) ){
            case 130: {
              FUNC_5(VAR_10, "%lld", FUNC_11(VAR_11,VAR_15));
              break;
            }
            case 131: {
              double VAR_17 = FUNC_10(VAR_11,VAR_15);
              sqlite3_uint64 VAR_18;
              FUNC_4(&VAR_18,&VAR_17,sizeof(VAR_17));
              if( VAR_18==0x7ff0000000000000LL ){
                VAR_10->xCallback("1e999", VAR_10->pArg);
              }else if( VAR_18==0xfff0000000000000LL ){
                VAR_10->xCallback("-1e999", VAR_10->pArg);
              }else{
                FUNC_5(VAR_10, "%!.20g", VAR_17);
              }
              break;
            }
            case 129: {
              VAR_10->xCallback("NULL", VAR_10->pArg);
              break;
            }
            case 128: {
              FUNC_6(VAR_10,
                   (const char*)FUNC_12(VAR_11,VAR_15));
              break;
            }
            case 132: {
              int VAR_19 = FUNC_9(VAR_11,VAR_15);
              unsigned char *VAR_20 = (unsigned char*)FUNC_8(VAR_11,VAR_15);
              int VAR_21;
              VAR_10->xCallback("x'", VAR_10->pArg);
              for(VAR_21=0; VAR_21<VAR_19; VAR_21++){
                char VAR_22[3];
                VAR_22[0] = "0123456789abcdef"[(VAR_20[VAR_21]>>4)&15];
                VAR_22[1] = "0123456789abcdef"[VAR_20[VAR_21]&15];
                VAR_22[2] = 0;
                VAR_10->xCallback(VAR_22, VAR_10->pArg);
              }
              VAR_10->xCallback("'", VAR_10->pArg);
              break;
            }
          }
        }
        VAR_10->xCallback(");\n", VAR_10->pArg);
      }
    }
    FUNC_14(VAR_11);
    FUNC_2(&VAR_13);
    FUNC_2(&VAR_12);
  }
  return 0;
}
