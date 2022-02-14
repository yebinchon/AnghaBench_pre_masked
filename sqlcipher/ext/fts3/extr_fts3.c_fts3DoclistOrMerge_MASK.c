
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ sqlite3_int64 ;
typedef scalar_t__ i64 ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char**,char*,int,scalar_t__*) ;
 int FUNC_3 (char**,char**) ;
 int FUNC_4 (char**,char**,char**) ;
 int FUNC_5 (char**,int,scalar_t__*,int*,scalar_t__) ;
 int FUNC_6 (char*,int ,scalar_t__) ;
 int FUNC_7 (char*) ;
 char* FUNC_8 (scalar_t__) ;

__attribute__((used)) static int FUNC_9(
  int VAR_4,
  char *VAR_5, int VAR_6,
  char *VAR_7, int VAR_8,
  char **VAR_9, int *VAR_10
){
  int VAR_11 = VAR_3;
  sqlite3_int64 VAR_12 = 0;
  sqlite3_int64 VAR_13 = 0;
  sqlite3_int64 VAR_14 = 0;
  char *VAR_15 = &VAR_5[VAR_6];
  char *VAR_16 = &VAR_7[VAR_8];
  char *VAR_17 = VAR_5;
  char *VAR_18 = VAR_7;
  char *VAR_19;
  char *VAR_20;
  int VAR_21 = 0;

  *VAR_9 = 0;
  *VAR_10 = 0;
  VAR_20 = FUNC_8((i64)VAR_6+VAR_8+VAR_1-1+VAR_0);
  if( !VAR_20 ) return VAR_2;

  VAR_19 = VAR_20;
  FUNC_2(&VAR_17, VAR_15, 0, &VAR_12);
  FUNC_2(&VAR_18, VAR_16, 0, &VAR_13);
  while( VAR_17 || VAR_18 ){
    sqlite3_int64 VAR_22 = FUNC_0(VAR_12, VAR_13);

    if( VAR_18 && VAR_17 && VAR_22==0 ){
      FUNC_5(&VAR_19, VAR_4, &VAR_14, &VAR_21, VAR_12);
      VAR_11 = FUNC_4(&VAR_19, &VAR_17, &VAR_18);
      if( VAR_11 ) break;
      FUNC_2(&VAR_17, VAR_15, VAR_4, &VAR_12);
      FUNC_2(&VAR_18, VAR_16, VAR_4, &VAR_13);
    }else if( !VAR_18 || (VAR_17 && VAR_22<0) ){
      FUNC_5(&VAR_19, VAR_4, &VAR_14, &VAR_21, VAR_12);
      FUNC_3(&VAR_19, &VAR_17);
      FUNC_2(&VAR_17, VAR_15, VAR_4, &VAR_12);
    }else{
      FUNC_5(&VAR_19, VAR_4, &VAR_14, &VAR_21, VAR_13);
      FUNC_3(&VAR_19, &VAR_18);
      FUNC_2(&VAR_18, VAR_16, VAR_4, &VAR_13);
    }
  }

  if( VAR_11!=VAR_3 ){
    FUNC_7(VAR_20);
    VAR_19 = VAR_20 = 0;
  }else{
    FUNC_1( (VAR_19-VAR_20)<=VAR_6+VAR_8+VAR_1-1 );
    FUNC_6(&VAR_20[(VAR_19-VAR_20)], 0, VAR_0);
  }
  *VAR_9 = VAR_20;
  *VAR_10 = (int)(VAR_19-VAR_20);
  return VAR_11;
}
