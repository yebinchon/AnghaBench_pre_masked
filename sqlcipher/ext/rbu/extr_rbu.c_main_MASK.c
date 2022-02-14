
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zBuf ;
typedef int sqlite3rbu ;
typedef int sqlite3_int64 ;
typedef int sqlite3 ;




 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,...) ;
 scalar_t__ FUNC_3 (char const*,char*,int) ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char const*,int ,int ,int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int,char*,char*,int ) ;
 int FUNC_9 (int ,int *,int *,int ) ;
 int FUNC_10 (int *,int*,int*) ;
 int FUNC_11 (int *,char**) ;
 int * FUNC_12 (int *,int) ;
 int * FUNC_13 (char const*,char const*,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int * FUNC_16 (char const*,char const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_17 (char const*) ;
 int FUNC_18 (char*) ;

int FUNC_19(int VAR_3, char **VAR_4){
  int VAR_5;
  const char *VAR_6;
  const char *VAR_7;
  char VAR_8[200];
  char *VAR_9 = 0;
  sqlite3rbu *VAR_10;
  int VAR_11 = 0;
  int VAR_12 = 0;
  int VAR_13 = 0;
  const char *VAR_14 = 0;
  int VAR_15 = 128;
  sqlite3_int64 VAR_16 = 0;
  int VAR_17 = VAR_3-2;

  if( VAR_3<3 ) FUNC_18(VAR_4[0]);
  for(VAR_5=1; VAR_5<VAR_17; VAR_5++){
    const char *VAR_18 = VAR_4[VAR_5];
    int VAR_19 = FUNC_17(VAR_18);
    if( VAR_19>1 && VAR_19<=8 && 0==FUNC_3(VAR_18, "-vacuum", VAR_19) ){
      VAR_13 = 1;
    }else if( VAR_19>1 && VAR_19<=7
           && 0==FUNC_3(VAR_18, "-presql", VAR_19) && VAR_5<VAR_19-1 ){
      VAR_5++;
      VAR_14 = VAR_4[VAR_5];
    }else if( VAR_19>1 && VAR_19<=5 && 0==FUNC_3(VAR_18, "-step", VAR_19) && VAR_5<VAR_19-1 ){
      VAR_5++;
      VAR_11 = FUNC_0(VAR_4[VAR_5]);
    }else if( VAR_19>1 && VAR_19<=9
           && 0==FUNC_3(VAR_18, "-statstep", VAR_19) && VAR_5<VAR_19-1
    ){
      VAR_5++;
      VAR_12 = FUNC_0(VAR_4[VAR_5]);
    }else{
      FUNC_18(VAR_4[0]);
    }
  }

  VAR_6 = VAR_4[VAR_3-2];
  VAR_7 = VAR_4[VAR_3-1];

  FUNC_4();



  if( VAR_13 ){
    VAR_10 = FUNC_16(VAR_6, VAR_7);
  }else{
    VAR_10 = FUNC_13(VAR_6, VAR_7, 0);
  }
  FUNC_5(VAR_10);

  if( VAR_14 && VAR_10 ){
    sqlite3 *VAR_20 = FUNC_12(VAR_10, 0);
    VAR_15 = FUNC_6(VAR_20, VAR_14, 0, 0, 0);
    if( VAR_15==128 ){
      sqlite3 *VAR_21 = FUNC_12(VAR_10, 1);
      VAR_15 = FUNC_6(VAR_21, VAR_14, 0, 0, 0);
    }
  }





  if( VAR_15==128 ){
    for(VAR_5=0; (VAR_11<=0 || VAR_5<VAR_11) && FUNC_15(VAR_10)==128; VAR_5++){
      if( VAR_12>0 && (VAR_5 % VAR_12)==0 ){
        sqlite3_int64 VAR_22;
        sqlite3_int64 VAR_23;
        FUNC_9(VAR_0, &VAR_22, &VAR_23, 0);
        FUNC_2(VAR_2, "memory used=%d highwater=%d", VAR_22, VAR_23);
        if( VAR_13==0 ){
          int VAR_24;
          int VAR_25;
          FUNC_10(VAR_10, &VAR_24, &VAR_25);
          FUNC_2(VAR_2, "  progress=%d/%d\n", VAR_24, VAR_25);
        }else{
          FUNC_2(VAR_2, "\n");
        }
        FUNC_1(VAR_2);
      }
    }
    VAR_16 = FUNC_14(VAR_10);
    VAR_15 = FUNC_11(VAR_10, &VAR_9);
  }


  switch( VAR_15 ){
    case 128:
      FUNC_8(sizeof(VAR_8), VAR_8,
          "SQLITE_OK: rbu update incomplete (%lld operations so far)\n",
          VAR_16
      );
      FUNC_2(VAR_2, "%s", VAR_8);
      break;

    case 129:
      FUNC_8(sizeof(VAR_8), VAR_8,
          "SQLITE_DONE: rbu update completed (%lld operations)\n",
          VAR_16
      );
      FUNC_2(VAR_2, "%s", VAR_8);
      break;

    default:
      FUNC_2(VAR_1, "error=%d: %s\n", VAR_15, VAR_9);
      break;
  }

  FUNC_7(VAR_9);
  return (VAR_15==128 || VAR_15==129) ? 0 : 1;
}
