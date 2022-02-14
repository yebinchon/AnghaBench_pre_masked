
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int*) ;

__attribute__((used)) static char *FUNC_2(char *VAR_2, char **VAR_3){
  int VAR_4, VAR_5;
  while(1){
    VAR_4 = FUNC_1(VAR_2, &VAR_5);
    if( VAR_5==VAR_1 ){
      VAR_2 += VAR_4;
    }else if( VAR_5==VAR_0 ){
      *VAR_3 = VAR_2;
      return 0;
    }else{
      VAR_2[VAR_4] = 0;
      *VAR_3 = &VAR_2[1];
      FUNC_0(VAR_2);
      return VAR_2;
    }
  }

}
