
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ sqlite3_int64 ;


 int FUNC_0 (int) ;
 int FUNC_1 (char**,char*,scalar_t__*) ;
 int FUNC_2 (int ,char**) ;
 int FUNC_3 (char*,char**) ;
 int FUNC_4 (char*,scalar_t__*) ;

void FUNC_5(
  int VAR_0,
  char *VAR_1,
  int VAR_2,
  char **VAR_3,
  sqlite3_int64 *VAR_4,
  int *VAR_5,
  u8 *VAR_6
){
  char *VAR_7 = *VAR_3;

  FUNC_0( VAR_2>0 );
  FUNC_0( *VAR_6==0 );
  FUNC_0( VAR_7 || *VAR_4==0 );
  FUNC_0( !VAR_7 || (VAR_7>VAR_1 && VAR_7<&VAR_1[VAR_2]) );

  if( VAR_7==0 ){
    sqlite3_int64 VAR_8 = 0;
    char *VAR_9 = 0;
    char *VAR_10 = VAR_1;
    char *VAR_11 = &VAR_1[VAR_2];
    int VAR_12 = 1;

    while( VAR_10<VAR_11 ){
      sqlite3_int64 VAR_13;
      VAR_10 += FUNC_4(VAR_10, &VAR_13);
      VAR_8 += (VAR_12 * VAR_13);
      VAR_9 = VAR_10;
      FUNC_2(0, &VAR_10);
      while( VAR_10<VAR_11 && *VAR_10==0 ) VAR_10++;
      VAR_12 = (VAR_0 ? -1 : 1);
    }

    *VAR_5 = (int)(VAR_11 - VAR_9);
    *VAR_3 = VAR_9;
    *VAR_4 = VAR_8;
  }else{
    int VAR_14 = (VAR_0 ? -1 : 1);
    sqlite3_int64 VAR_15;
    FUNC_1(&VAR_7, VAR_1, &VAR_15);
    *VAR_4 -= (VAR_14 * VAR_15);

    if( VAR_7==VAR_1 ){
      *VAR_6 = 1;
    }else{
      char *VAR_16 = VAR_7;
      FUNC_3(VAR_1, &VAR_7);
      *VAR_5 = (int)(VAR_16 - VAR_7);
    }
    *VAR_3 = VAR_7;
  }
}
