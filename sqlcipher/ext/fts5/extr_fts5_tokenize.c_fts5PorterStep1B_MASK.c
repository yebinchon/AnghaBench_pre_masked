
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static int FUNC_4(char *VAR_0, int *VAR_1){
  int VAR_2 = 0;
  int VAR_3 = *VAR_1;
  switch( VAR_0[VAR_3-2] ){

    case 'e':
      if( VAR_3>3 && 0==FUNC_2("eed", &VAR_0[VAR_3-3], 3) ){
        if( FUNC_0(VAR_0, VAR_3-3) ){
          FUNC_3(&VAR_0[VAR_3-3], "ee", 2);
          *VAR_1 = VAR_3 - 3 + 2;
        }
      }else if( VAR_3>2 && 0==FUNC_2("ed", &VAR_0[VAR_3-2], 2) ){
        if( FUNC_1(VAR_0, VAR_3-2) ){
          *VAR_1 = VAR_3 - 2;
          VAR_2 = 1;
        }
      }
      break;

    case 'n':
      if( VAR_3>3 && 0==FUNC_2("ing", &VAR_0[VAR_3-3], 3) ){
        if( FUNC_1(VAR_0, VAR_3-3) ){
          *VAR_1 = VAR_3 - 3;
          VAR_2 = 1;
        }
      }
      break;

  }
  return VAR_2;
}
