
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ sqlite3_int64 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 char* FUNC_1 (char const*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char) ;
 int FUNC_4 (char*,char const*,size_t) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (char const*) ;

__attribute__((used)) static const char *FUNC_8(
  int *VAR_2,
  const char *VAR_3,
  char **VAR_4,
  int *VAR_5
){
  const char *VAR_6 = 0;

  sqlite3_int64 VAR_7 = FUNC_7(VAR_3);
  char *VAR_8 = FUNC_6(VAR_7+1);

  FUNC_0( *VAR_2==VAR_1 );
  *VAR_5 = 0;
  *VAR_4 = 0;

  if( VAR_8==0 ){
    *VAR_2 = VAR_0;
  }else{
    FUNC_4(VAR_8, VAR_3, (size_t)(VAR_7+1));
    if( FUNC_3(VAR_8[0]) ){
      int VAR_9 = FUNC_2(VAR_8);
      VAR_6 = &VAR_3[VAR_9];
      *VAR_5 = 1;
    }else{
      VAR_6 = FUNC_1(VAR_3);
      if( VAR_6 ){
        VAR_8[VAR_6-VAR_3] = '\0';
      }
    }
  }

  if( VAR_6==0 ){
    FUNC_5(VAR_8);
  }else{
    *VAR_4 = VAR_8;
  }

  return VAR_6;
}
