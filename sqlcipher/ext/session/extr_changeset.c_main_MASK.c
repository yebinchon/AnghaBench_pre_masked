
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_value ;
typedef int sqlite3_changeset_iter ;
typedef int sqlite3 ;
typedef int FILE ;




 int VAR_0 ;
 scalar_t__ VAR_1 ;

 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*,char*) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (void*,int,int,int *) ;
 int FUNC_5 (char const) ;
 int VAR_3 ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (char*,int*,void**) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 char* FUNC_10 (int *) ;
 int FUNC_11 (int *,char*,int ,int ,int ) ;
 int FUNC_12 (void*) ;
 char* FUNC_13 (char*,char const*) ;
 int FUNC_14 (char*,int **) ;
 scalar_t__ FUNC_15 (char*,char const*) ;
 int FUNC_16 (int *,int,void*,int ,int ,int ) ;
 int FUNC_17 (int,void*,int,void*,int*,void**) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int,void*,int*,void**) ;
 int FUNC_20 (int *,int,int **) ;
 scalar_t__ FUNC_21 (int *) ;
 int FUNC_22 (int *,int,int **) ;
 int FUNC_23 (int *,char const**,int*,int*,int*) ;
 int FUNC_24 (int *,unsigned char**,int ) ;
 int FUNC_25 (int **,int,void*) ;
 int VAR_4 ;
 scalar_t__ FUNC_26 (char*,char const*) ;
 int FUNC_27 (char*) ;

int FUNC_28(int VAR_5, char **VAR_6){
  int VAR_7, VAR_8;
  void *VAR_9 = 0;
  if( VAR_5<3 ) FUNC_27(VAR_6[0]);
  FUNC_7(VAR_6[1], &VAR_7, &VAR_9);




  if( FUNC_26(VAR_6[2],"apply")==0 ){
    sqlite3 *VAR_10;
    if( VAR_5!=4 ) FUNC_27(VAR_6[0]);
    VAR_8 = FUNC_14(VAR_6[3], &VAR_10);
    if( VAR_8!=VAR_0 ){
      FUNC_3(VAR_4, "unable to open database file \"%s\": %s\n",
              VAR_6[3], FUNC_10(VAR_10));
      FUNC_9(VAR_10);
      FUNC_0(1);
    }
    FUNC_11(VAR_10, "BEGIN", 0, 0, 0);
    VAR_3 = 0;
    VAR_8 = FUNC_16(VAR_10, VAR_7, VAR_9, 0, VAR_2, 0);
    if( VAR_8 ){
      FUNC_3(VAR_4, "sqlite3changeset_apply() returned %d\n", VAR_8);
    }
    if( VAR_3 ){
      FUNC_3(VAR_4, "%d conflicts - no changes applied\n", VAR_3);
      FUNC_11(VAR_10, "ROLLBACK", 0, 0, 0);
    }else if( VAR_8 ){
      FUNC_3(VAR_4, "sqlite3changeset_apply() returns %d "
                      "- no changes applied\n", VAR_8);
      FUNC_11(VAR_10, "ROLLBACK", 0, 0, 0);
    }else{
      FUNC_11(VAR_10, "COMMIT", 0, 0, 0);
    }
    FUNC_9(VAR_10);
  }else





  if( FUNC_26(VAR_6[2],"concat")==0 ){
    int VAR_11;
    void *VAR_12;
    int VAR_13;
    void *VAR_14;
    FILE *VAR_15;
    const char *VAR_16 = VAR_6[4];
    if( VAR_5!=5 ) FUNC_27(VAR_6[0]);
    VAR_15 = FUNC_2(VAR_16, "wb");
    if( VAR_15==0 ){
      FUNC_3(VAR_4, "cannot open \"%s\" for writing\n", VAR_16);
      FUNC_0(1);
    }
    FUNC_7(VAR_6[3], &VAR_11, &VAR_12);
    VAR_8 = FUNC_17(VAR_7, VAR_9, VAR_11, VAR_12, &VAR_13, &VAR_14);
    if( VAR_8!=VAR_0 ){
      FUNC_3(VAR_4, "sqlite3changeset_concat() returns %d\n", VAR_8);
    }else if( VAR_13>0 && FUNC_4(VAR_14, VAR_13, 1, VAR_15)!=1 ){
      FUNC_3(VAR_4, "unable to write all %d bytes of output to \"%s\"\n",
              VAR_13, VAR_16);
    }
    FUNC_1(VAR_15);
    FUNC_12(VAR_14);
    FUNC_12(VAR_12);
  }else




  if( FUNC_26(VAR_6[2],"dump")==0 ){
    int VAR_17 = 0;
    int VAR_18;
    sqlite3_changeset_iter *VAR_19;
    VAR_8 = FUNC_25(&VAR_19, VAR_7, VAR_9);
    if( VAR_8!=VAR_0 ){
      FUNC_3(VAR_4, "sqlite3changeset_start() returns %d\n", VAR_8);
      FUNC_0(1);
    }
    while( FUNC_21(VAR_19)==VAR_1 ){
      int VAR_20, VAR_21, VAR_22;
      const char *VAR_23;
      unsigned char *VAR_24;
      FUNC_23(VAR_19, &VAR_23, &VAR_22, &VAR_20, &VAR_21);
      VAR_17++;
      FUNC_6("%d: %s table=[%s] indirect=%d nColumn=%d\n",
             VAR_17, VAR_20==129 ? "INSERT" :
                       VAR_20==128 ? "UPDATE" : "DELETE",
             VAR_23, VAR_21, VAR_22);
      FUNC_24(VAR_19, &VAR_24, 0);
      for(VAR_18=0; VAR_18<VAR_22; VAR_18++){
        sqlite3_value *VAR_25;
        VAR_25 = 0;
        FUNC_22(VAR_19, VAR_18, &VAR_25);
        if( VAR_25 ){
          FUNC_6("    old[%d]%s = ", VAR_18, VAR_24[VAR_18] ? "pk" : "  ");
          FUNC_8(VAR_25);
          FUNC_6("\n");
        }
        VAR_25 = 0;
        FUNC_20(VAR_19, VAR_18, &VAR_25);
        if( VAR_25 ){
          FUNC_6("    new[%d]%s = ", VAR_18, VAR_24[VAR_18] ? "pk" : "  ");
          FUNC_8(VAR_25);
          FUNC_6("\n");
        }
      }
    }
    FUNC_18(VAR_19);
  }else




  if( FUNC_26(VAR_6[2],"invert")==0 ){
    FILE *VAR_26;
    int VAR_27 = 0;
    void *VAR_28 = 0;
    const char *VAR_29 = VAR_6[3];
    if( VAR_5!=4 ) FUNC_27(VAR_6[0]);
    VAR_26 = FUNC_2(VAR_29, "wb");
    if( VAR_26==0 ){
      FUNC_3(VAR_4, "cannot open \"%s\" for writing\n", VAR_29);
      FUNC_0(1);
    }
    VAR_8 = FUNC_19(VAR_7, VAR_9, &VAR_27, &VAR_28);
    if( VAR_8!=VAR_0 ){
      FUNC_3(VAR_4, "sqlite3changeset_invert() returns %d\n", VAR_8);
    }else if( VAR_27>0 && FUNC_4(VAR_28, VAR_27, 1, VAR_26)!=1 ){
      FUNC_3(VAR_4, "unable to write all %d bytes of output to \"%s\"\n",
              VAR_27, VAR_29);
    }
    FUNC_1(VAR_26);
    FUNC_12(VAR_28);
  }else




  if( FUNC_26(VAR_6[2],"sql")==0 ){
    int VAR_30 = 0;
    char *VAR_31 = 0;
    char *VAR_32 = 0;
    sqlite3_changeset_iter *VAR_33 = 0;
    VAR_8 = FUNC_25(&VAR_33, VAR_7, VAR_9);
    if( VAR_8!=VAR_0 ){
      FUNC_3(VAR_4, "sqlite3changeset_start() returns %d\n", VAR_8);
      FUNC_0(1);
    }
    FUNC_6("BEGIN;\n");
    while( FUNC_21(VAR_33)==VAR_1 ){
      int VAR_34, VAR_35, VAR_36;
      const char *VAR_37;
      FUNC_23(VAR_33, &VAR_37, &VAR_36, &VAR_34, &VAR_35);
      VAR_30++;
      if( VAR_31==0 || FUNC_26(VAR_31,VAR_37)!=0 ){
        FUNC_12(VAR_31);
        FUNC_12(VAR_32);
        VAR_31 = FUNC_13("%s", VAR_37);
        if( !FUNC_5(VAR_37[0]) || FUNC_15("*[^a-zA-Z0-9]*",VAR_37)==0 ){
          VAR_32 = FUNC_13("\"%w\"", VAR_37);
        }else{
          VAR_32 = FUNC_13("%s", VAR_37);
        }
        FUNC_6("/****** Changes for table %s ***************/\n", VAR_32);
      }
      switch( VAR_34 ){
        case 130: {
          unsigned char *VAR_38;
          int VAR_39;
          const char *VAR_40 = " ";
          FUNC_24(VAR_33, &VAR_38, 0);
          FUNC_6("/* %d */ DELETE FROM %s WHERE", VAR_30, VAR_32);
          for(VAR_39=0; VAR_39<VAR_36; VAR_39++){
            sqlite3_value *VAR_41;
            if( VAR_38[VAR_39]==0 ) continue;
            FUNC_6("%sc%d=", VAR_40, VAR_39+1);
            VAR_40 = " AND ";
            FUNC_22(VAR_33, VAR_39, &VAR_41);
            FUNC_8(VAR_41);
          }
          FUNC_6(";\n");
          break;
        }
        case 128: {
          unsigned char *VAR_42;
          int VAR_43;
          const char *VAR_44 = " ";
          FUNC_24(VAR_33, &VAR_42, 0);
          FUNC_6("/* %d */ UPDATE %s SET", VAR_30, VAR_32);
          for(VAR_43=0; VAR_43<VAR_36; VAR_43++){
            sqlite3_value *VAR_45 = 0;
            FUNC_20(VAR_33, VAR_43, &VAR_45);
            if( VAR_45 ){
              FUNC_6("%sc%d=", VAR_44, VAR_43+1);
              VAR_44 = ", ";
              FUNC_8(VAR_45);
            }
          }
          FUNC_6(" WHERE");
          VAR_44 = " ";
          for(VAR_43=0; VAR_43<VAR_36; VAR_43++){
            sqlite3_value *VAR_46;
            if( VAR_42[VAR_43]==0 ) continue;
            FUNC_6("%sc%d=", VAR_44, VAR_43+1);
            VAR_44 = " AND ";
            FUNC_22(VAR_33, VAR_43, &VAR_46);
            FUNC_8(VAR_46);
          }
          FUNC_6(";\n");
          break;
        }
        case 129: {
          int VAR_47;
          FUNC_6("/* %d */ INSERT INTO %s VALUES", VAR_30, VAR_32);
          for(VAR_47=0; VAR_47<VAR_36; VAR_47++){
            sqlite3_value *VAR_48;
            FUNC_6("%c", VAR_47==0 ? '(' : ',');
            FUNC_20(VAR_33, VAR_47, &VAR_48);
            FUNC_8(VAR_48);
          }
          FUNC_6(");\n");
          break;
        }
      }
    }
    FUNC_6("COMMIT;\n");
    FUNC_18(VAR_33);
    FUNC_12(VAR_31);
    FUNC_12(VAR_32);
  }else


  FUNC_27(VAR_6[0]);
  FUNC_12(VAR_9);
  return 0;
}
