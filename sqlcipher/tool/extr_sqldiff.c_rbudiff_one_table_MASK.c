
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_6__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef int sqlite3_stmt ;
struct TYPE_8__ {int bSchemaPK; } ;
struct TYPE_7__ {char* z; int member_2; int member_1; int member_0; } ;
typedef TYPE_1__ Str ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char const*) ;
 char** FUNC_1 (char*,char const*,int*,int*) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (int *,char*,...) ;
 TYPE_6__ VAR_3 ;
 int FUNC_4 (char const*,char**,int,int,TYPE_1__*) ;
 int FUNC_5 (char*,int ,int) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (char const*,int,char const*,int,char*) ;
 int FUNC_8 (char*,char const*) ;
 char* FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *,int) ;
 scalar_t__ FUNC_12 (int *,int) ;
 int FUNC_13 (int *,int) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (char*) ;
 char* FUNC_16 (int) ;
 scalar_t__ FUNC_17 (int *) ;
 int FUNC_18 (TYPE_1__*) ;
 int FUNC_19 (TYPE_1__*,char*,...) ;
 int FUNC_20 (TYPE_1__*,char*,char*,char**,int) ;

__attribute__((used)) static void FUNC_21(const char *VAR_4, FILE *VAR_5){
  int VAR_6;
  int VAR_7;
  char **VAR_8;
  int VAR_9;
  int VAR_10;
  Str VAR_11 = {0, 0, 0};
  Str VAR_12 = {0, 0, 0};
  Str VAR_13 = {0, 0, 0};
  sqlite3_stmt *VAR_14 = 0;
  int VAR_15 = 0;


  VAR_3.bSchemaPK = 1;


  FUNC_0(VAR_4);



  VAR_8 = FUNC_1("main", VAR_4, &VAR_7, &VAR_6);
  if( VAR_8==0 ){
    FUNC_8("table %s has no usable PK columns", VAR_4);
  }
  for(VAR_10=0; VAR_8[VAR_10]; VAR_10++);


  FUNC_19(&VAR_11, "CREATE TABLE IF NOT EXISTS 'data_%q'(", VAR_4);
  if( VAR_6 ) FUNC_19(&VAR_11, "rbu_rowid, ");
  FUNC_20(&VAR_11, ", ", "%s", &VAR_8[VAR_6], -1);
  FUNC_19(&VAR_11, ", rbu_control);");


  FUNC_4(VAR_4, VAR_8, VAR_7, VAR_6, &VAR_12);



  FUNC_19(&VAR_13, "INSERT INTO 'data_%q' (", VAR_4);
  if( VAR_6 ) FUNC_19(&VAR_13, "rbu_rowid, ");
  FUNC_20(&VAR_13, ", ", "%s", &VAR_8[VAR_6], -1);
  FUNC_19(&VAR_13, ", rbu_control) VALUES(");

  VAR_14 = FUNC_2("%s", VAR_12.z);

  while( FUNC_17(VAR_14)==VAR_2 ){




    if( VAR_11.z ){
      FUNC_3(VAR_5, "%s\n", VAR_11.z);
      FUNC_18(&VAR_11);
    }


    FUNC_3(VAR_5, "%s", VAR_13.z);
    VAR_15++;

    if( FUNC_12(VAR_14, VAR_10)==VAR_1 ){
      for(VAR_9=0; VAR_9<=VAR_10; VAR_9++){
        if( VAR_9>0 ) FUNC_3(VAR_5, ", ");
        FUNC_6(VAR_5, FUNC_13(VAR_14, VAR_9));
      }
    }else{
      char *VAR_16;
      int VAR_17 = FUNC_10(VAR_14, VAR_10);

      VAR_16 = (char*)FUNC_16(VAR_17+1);
      FUNC_5(VAR_16, FUNC_11(VAR_14, VAR_10), VAR_17+1);

      for(VAR_9=0; VAR_9<VAR_10; VAR_9++){
        int VAR_18 = 0;
        if( VAR_9>=VAR_7
            && FUNC_12(VAR_14, VAR_9)==VAR_0
            && FUNC_12(VAR_14, VAR_10+1+VAR_9)==VAR_0
        ){
          const char *VAR_19 = FUNC_9(VAR_14, VAR_10+1+VAR_9);
          int VAR_20 = FUNC_10(VAR_14, VAR_10+1+VAR_9);
          const char *VAR_21 = FUNC_9(VAR_14, VAR_9);
          int VAR_22 = FUNC_10(VAR_14, VAR_9);
          char *VAR_23;
          int VAR_24;

          VAR_23 = FUNC_16(VAR_22 + 60);
          VAR_24 = FUNC_7(VAR_19, VAR_20, VAR_21, VAR_22, VAR_23);
          if( VAR_24<VAR_22 ){
            int VAR_25;
            FUNC_3(VAR_5, "x'");
            for(VAR_25=0; VAR_25<VAR_24; VAR_25++) FUNC_3(VAR_5, "%02x", (u8)VAR_23[VAR_25]);
            FUNC_3(VAR_5, "'");
            VAR_16[VAR_9-VAR_6] = 'f';
            VAR_18 = 1;
          }
          FUNC_15(VAR_23);
        }

        if( VAR_18==0 ){
          FUNC_6(VAR_5, FUNC_13(VAR_14, VAR_9));
        }
        FUNC_3(VAR_5, ", ");
      }
      FUNC_3(VAR_5, "'%s'", VAR_16);
      FUNC_15(VAR_16);
    }


    FUNC_3(VAR_5, ");\n");
  }

  FUNC_14(VAR_14);
  if( VAR_15>0 ){
    Str VAR_26 = {0, 0, 0};
    FUNC_19(&VAR_26, "INSERT INTO rbu_count VALUES('data_%q', %d);", VAR_4, VAR_15);
    FUNC_3(VAR_5, "%s\n", VAR_26.z);
    FUNC_18(&VAR_26);
  }

  FUNC_18(&VAR_11);
  FUNC_18(&VAR_12);
  FUNC_18(&VAR_13);
}
