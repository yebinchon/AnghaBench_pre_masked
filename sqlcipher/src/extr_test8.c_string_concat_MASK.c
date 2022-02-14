
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char*,char*,...) ;

__attribute__((used)) static void FUNC_2(char **VAR_2, char *VAR_3, int VAR_4, int *VAR_5){
  char *VAR_6 = *VAR_2;
  if( !VAR_3 && VAR_4 && *VAR_5==VAR_1 ){
    *VAR_5 = VAR_0;
  }
  if( *VAR_5!=VAR_1 ){
    FUNC_0(VAR_6);
    VAR_6 = 0;
  }else{
    if( VAR_6 ){
      char *VAR_7 = VAR_6;
      VAR_6 = FUNC_1("%s%s", VAR_6, VAR_3);
      FUNC_0(VAR_7);
    }else{
      VAR_6 = FUNC_1("%s", VAR_3);
    }
    if( !VAR_6 ){
      *VAR_5 = VAR_0;
    }
  }
  *VAR_2 = VAR_6;
  if( VAR_4 ){
    FUNC_0(VAR_3);
  }
}
