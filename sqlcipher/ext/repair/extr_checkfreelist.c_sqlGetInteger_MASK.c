
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int sqlite3_stmt ;
typedef int sqlite3 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char const*,char const*) ;
 int FUNC_4 (int *,char*,int,int **,int ) ;
 scalar_t__ FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(
  sqlite3 *VAR_4,
  const char *VAR_5,
  const char *VAR_6,
  u32 *VAR_7
){
  int VAR_8, VAR_9;
  char *VAR_10;
  sqlite3_stmt *VAR_11 = 0;
  int VAR_12 = 0;

  VAR_10 = FUNC_3(VAR_6, VAR_5);
  if( VAR_10==0 ){
    VAR_8 = VAR_1;
  }else{
    VAR_8 = FUNC_4(VAR_4, VAR_10, -1, &VAR_11, 0);
    FUNC_2(VAR_10);
  }

  if( VAR_8==VAR_2 && VAR_3==FUNC_5(VAR_11) ){
    *VAR_7 = (u32)FUNC_0(VAR_11, 0);
    VAR_12 = 1;
  }

  VAR_9 = FUNC_1(VAR_11);
  if( VAR_8==VAR_2 ) VAR_8 = VAR_9;
  if( VAR_8==VAR_2 && VAR_12==0 ) VAR_8 = VAR_0;
  return VAR_8;
}
