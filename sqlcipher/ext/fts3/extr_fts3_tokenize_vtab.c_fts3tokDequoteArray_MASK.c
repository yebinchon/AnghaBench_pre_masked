
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char const* const,int) ;
 int FUNC_1 (char*) ;
 char** FUNC_2 (int) ;
 scalar_t__ FUNC_3 (char const* const) ;

__attribute__((used)) static int FUNC_4(
  int VAR_2,
  const char * const *VAR_3,
  char ***VAR_4
){
  int VAR_5 = VAR_1;
  if( VAR_2==0 ){
    *VAR_4 = 0;
  }else{
    int VAR_6;
    int VAR_7 = 0;
    char **VAR_8;

    for(VAR_6=0; VAR_6<VAR_2; VAR_6++){
      VAR_7 += (int)(FUNC_3(VAR_3[VAR_6]) + 1);
    }

    *VAR_4 = VAR_8 = FUNC_2(sizeof(char *)*VAR_2 + VAR_7);
    if( VAR_8==0 ){
      VAR_5 = VAR_0;
    }else{
      char *VAR_9 = (char *)&VAR_8[VAR_2];
      for(VAR_6=0; VAR_6<VAR_2; VAR_6++){
        int VAR_10 = (int)FUNC_3(VAR_3[VAR_6]);
        VAR_8[VAR_6] = VAR_9;
        FUNC_0(VAR_9, VAR_3[VAR_6], VAR_10+1);
        FUNC_1(VAR_9);
        VAR_9 += (VAR_10+1);
      }
    }
  }

  return VAR_5;
}
