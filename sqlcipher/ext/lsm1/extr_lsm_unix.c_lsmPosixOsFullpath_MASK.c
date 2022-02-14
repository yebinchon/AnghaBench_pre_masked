
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lsm_env ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_4 ;
 char* FUNC_1 (char*,int) ;
 int FUNC_2 (int *,char*) ;
 char* FUNC_3 (int *,int) ;
 char* FUNC_4 (int *,char*,int) ;
 int FUNC_5 (char*,char const*,int) ;
 int FUNC_6 (char const*) ;

__attribute__((used)) static int FUNC_7(
  lsm_env *VAR_5,
  const char *VAR_6,
  char *VAR_7,
  int *VAR_8
){
  int VAR_9 = *VAR_8;
  int VAR_10;

  if( VAR_6[0]!='/' ){
    char *VAR_11;
    char *VAR_12;
    int VAR_13 = 512;
    VAR_12 = FUNC_3(VAR_5, VAR_13);
    while( VAR_12 ){
      VAR_11 = FUNC_1(VAR_12, VAR_13);
      if( VAR_11 || VAR_4!=VAR_0 ) break;
      VAR_13 = VAR_13*2;
      VAR_12 = FUNC_4(VAR_5, VAR_12, VAR_13);
    }
    if( VAR_12==0 ) return VAR_2;
    if( VAR_11==0 ) return VAR_1;
    FUNC_0( VAR_11==VAR_12 );

    VAR_13 = FUNC_6(VAR_12);
    VAR_10 = VAR_13 + 1 + FUNC_6(VAR_6) + 1;
    if( VAR_10<=VAR_9 ){
      FUNC_5(VAR_7, VAR_12, VAR_13);
      VAR_7[VAR_13] = '/';
      FUNC_5(&VAR_7[VAR_13+1], VAR_6, FUNC_6(VAR_6)+1);
    }
    FUNC_2(VAR_5, VAR_12);
  }else{
    VAR_10 = FUNC_6(VAR_6)+1;
    if( VAR_10<=VAR_9 ){
      FUNC_5(VAR_7, VAR_6, FUNC_6(VAR_6)+1);
    }
  }

  *VAR_8 = VAR_10;
  return VAR_3;
}
