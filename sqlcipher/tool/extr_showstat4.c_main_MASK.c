
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_stmt ;
typedef int sqlite3 ;
typedef int r ;
typedef int i64 ;


 scalar_t__ FUNC_0 (char) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (unsigned char const*,int*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,char*) ;
 int FUNC_4 (double*,int*,int) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (char) ;
 int FUNC_7 (int *) ;
 unsigned char* FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int) ;
 char* FUNC_10 (int *,int) ;
 char* FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (char*) ;
 char* FUNC_14 (char*,char const*,...) ;
 int FUNC_15 (char*,int **) ;
 int FUNC_16 (int *,char*,int,int **,int ) ;
 scalar_t__ FUNC_17 (int *) ;
 int VAR_2 ;
 scalar_t__ FUNC_18 (char*,char const*) ;

int FUNC_19(int VAR_3, char **VAR_4){
  sqlite3 *VAR_5;
  sqlite3_stmt *VAR_6;
  char *VAR_7 = 0;
  int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
  const unsigned char *VAR_13;
  int VAR_14;
  i64 VAR_15;
  const char *VAR_16;
  int VAR_17 = 0;

  if( VAR_3!=2 ){
    FUNC_3(VAR_2, "Usage: %s DATABASE-FILE\n", VAR_4[0]);
    FUNC_2(1);
  }
  VAR_8 = FUNC_15(VAR_4[1], &VAR_5);
  if( VAR_8!=VAR_0 || VAR_5==0 ){
    FUNC_3(VAR_2, "Cannot open database file [%s]\n", VAR_4[1]);
    FUNC_2(1);
  }
  VAR_8 = FUNC_16(VAR_5,
        "SELECT tbl||'.'||idx, nEq, nLT, nDLt, sample "
        "FROM sqlite_stat4 ORDER BY 1", -1,
        &VAR_6, 0);
  if( VAR_8!=VAR_0 || VAR_6==0 ){
    FUNC_3(VAR_2, "%s\n", FUNC_11(VAR_5));
    FUNC_7(VAR_5);
    FUNC_2(1);
  }
  while( VAR_1==FUNC_17(VAR_6) ){
    if( VAR_7==0 || FUNC_18(VAR_7, (const char*)FUNC_10(VAR_6,0))!=0 ){
      if( VAR_7 ) FUNC_5("\n**************************************"
                        "**************\n\n");
      FUNC_13(VAR_7);
      VAR_7 = FUNC_14("%s", FUNC_10(VAR_6,0));
      VAR_17 = 0;
    }
    FUNC_5("%s sample %d ------------------------------------\n", VAR_7, ++VAR_17);
    FUNC_5("  nEq    = %s\n", FUNC_10(VAR_6,1));
    FUNC_5("  nLt    = %s\n", FUNC_10(VAR_6,2));
    FUNC_5("  nDLt   = %s\n", FUNC_10(VAR_6,3));
    FUNC_5("  sample = x'");
    VAR_13 = FUNC_8(VAR_6,4);
    VAR_14 = FUNC_9(VAR_6,4);
    for(VAR_9=0; VAR_9<VAR_14; VAR_9++) FUNC_5("%02x", VAR_13[VAR_9]);
    FUNC_5("'\n          ");
    VAR_16 = " ";
    VAR_10 = FUNC_1(VAR_13, &VAR_15);
    if( VAR_15<VAR_10 || VAR_15>VAR_14 ){
      FUNC_5(" <error>\n");
      continue;
    }
    VAR_11 = VAR_12 = (int)VAR_15;
    while( VAR_10<VAR_12 ){
      int VAR_18;
      i64 VAR_19;
      VAR_10 += FUNC_1(VAR_13+VAR_10, &VAR_15);
      if( VAR_10>VAR_12 ) break;
      if( VAR_15<0 ) break;
      switch( VAR_15 ){
        case 0: VAR_18 = 0; break;
        case 1: VAR_18 = 1; break;
        case 2: VAR_18 = 2; break;
        case 3: VAR_18 = 3; break;
        case 4: VAR_18 = 4; break;
        case 5: VAR_18 = 6; break;
        case 6: VAR_18 = 8; break;
        case 7: VAR_18 = 8; break;
        case 8: VAR_18 = 0; break;
        case 9: VAR_18 = 0; break;
        case 10:
        case 11: VAR_18 = 0; break;
        default: VAR_18 = (int)(VAR_15-12)/2; break;
      }
      if( VAR_11+VAR_18>VAR_14 ) break;
      if( VAR_15==0 ){
        FUNC_5("%sNULL", VAR_16);
      }else if( VAR_15==8 || VAR_15==9 ){
        FUNC_5("%s%d", VAR_16, ((int)VAR_15)-8);
      }else if( VAR_15<=7 ){
        VAR_19 = (signed char)VAR_13[VAR_11];
        for(VAR_9=1; VAR_9<VAR_18; VAR_9++){
          VAR_19 = (VAR_19<<8) + VAR_13[VAR_11+VAR_9];
        }
        if( VAR_15==7 ){
          double VAR_20;
          char *VAR_21;
          FUNC_4(&VAR_20, &VAR_19, sizeof(VAR_20));
          VAR_21 = FUNC_14("%s%!.15g", VAR_16, VAR_20);
          FUNC_5("%s", VAR_21);
          FUNC_13(VAR_21);
        }else{
          FUNC_5("%s%lld", VAR_16, VAR_19);
        }
      }else if( (VAR_15&1)==0 ){
        FUNC_5("%sx'", VAR_16);
        for(VAR_9=0; VAR_9<VAR_18; VAR_9++){
          FUNC_5("%02x", VAR_13[VAR_11+VAR_9]);
        }
        FUNC_5("'");
      }else{
        FUNC_5("%s'", VAR_16);
        for(VAR_9=0; VAR_9<VAR_18; VAR_9++){
          char VAR_22 = (char)VAR_13[VAR_11+VAR_9];
          if( FUNC_0(VAR_22) ){
            if( VAR_22=='\'' || VAR_22=='\\' ) FUNC_6('\\');
            FUNC_6(VAR_22);
          }else if( VAR_22=='\n' ){
            FUNC_5("\\n");
          }else if( VAR_22=='\t' ){
            FUNC_5("\\t");
          }else if( VAR_22=='\r' ){
            FUNC_5("\\r");
          }else{
            FUNC_5("\\%03o", VAR_22);
          }
        }
        FUNC_5("'");
      }
      VAR_16 = ",";
      VAR_11 += VAR_18;
    }
    FUNC_5("\n");
  }
  FUNC_13(VAR_7);
  FUNC_12(VAR_6);
  FUNC_7(VAR_5);
  return 0;
}
