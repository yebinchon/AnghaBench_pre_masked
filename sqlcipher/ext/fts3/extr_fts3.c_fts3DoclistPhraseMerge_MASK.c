
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ sqlite3_int64 ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char**,char*,int,scalar_t__*) ;
 int FUNC_3 (int ,char**) ;
 scalar_t__ FUNC_4 (char**,int,int ,int,char**,char**) ;
 int FUNC_5 (char**,int,scalar_t__*,int*,scalar_t__) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (scalar_t__) ;

__attribute__((used)) static int FUNC_8(
  int VAR_3,
  int VAR_4,
  char *VAR_5, int VAR_6,
  char **VAR_7, int *VAR_8
){
  sqlite3_int64 VAR_9 = 0;
  sqlite3_int64 VAR_10 = 0;
  sqlite3_int64 VAR_11 = 0;
  char *VAR_12 = *VAR_7;
  char *VAR_13 = &VAR_5[VAR_6];
  char *VAR_14 = &VAR_12[*VAR_8];
  char *VAR_15 = VAR_5;
  char *VAR_16 = VAR_12;
  char *VAR_17;
  int VAR_18 = 0;
  char *VAR_19;

  FUNC_1( VAR_4>0 );
  if( VAR_3 ){
    VAR_19 = FUNC_7((sqlite3_int64)*VAR_8 + VAR_0);
    if( VAR_19==0 ) return VAR_1;
  }else{
    VAR_19 = VAR_12;
  }
  VAR_17 = VAR_19;

  FUNC_2(&VAR_15, VAR_13, 0, &VAR_9);
  FUNC_2(&VAR_16, VAR_14, 0, &VAR_10);

  while( VAR_15 && VAR_16 ){
    sqlite3_int64 VAR_20 = FUNC_0(VAR_9, VAR_10);
    if( VAR_20==0 ){
      char *VAR_21 = VAR_17;
      sqlite3_int64 VAR_22 = VAR_11;
      int VAR_23 = VAR_18;

      FUNC_5(&VAR_17, VAR_3, &VAR_11, &VAR_18, VAR_9);
      if( 0==FUNC_4(&VAR_17, VAR_4, 0, 1, &VAR_15, &VAR_16) ){
        VAR_17 = VAR_21;
        VAR_11 = VAR_22;
        VAR_18 = VAR_23;
      }
      FUNC_2(&VAR_15, VAR_13, VAR_3, &VAR_9);
      FUNC_2(&VAR_16, VAR_14, VAR_3, &VAR_10);
    }else if( VAR_20<0 ){
      FUNC_3(0, &VAR_15);
      FUNC_2(&VAR_15, VAR_13, VAR_3, &VAR_9);
    }else{
      FUNC_3(0, &VAR_16);
      FUNC_2(&VAR_16, VAR_14, VAR_3, &VAR_10);
    }
  }

  *VAR_8 = (int)(VAR_17 - VAR_19);
  if( VAR_3 ){
    FUNC_6(VAR_12);
    *VAR_7 = VAR_19;
  }

  return VAR_2;
}
