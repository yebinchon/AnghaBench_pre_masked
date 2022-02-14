
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static int FUNC_2(char *VAR_0, int *VAR_1){
  int VAR_2 = 0;
  int VAR_3 = *VAR_1;
  switch( VAR_0[VAR_3-2] ){

    case 'a':
      if( VAR_3>2 && 0==FUNC_0("at", &VAR_0[VAR_3-2], 2) ){
        FUNC_1(&VAR_0[VAR_3-2], "ate", 3);
        *VAR_1 = VAR_3 - 2 + 3;
        VAR_2 = 1;
      }
      break;

    case 'b':
      if( VAR_3>2 && 0==FUNC_0("bl", &VAR_0[VAR_3-2], 2) ){
        FUNC_1(&VAR_0[VAR_3-2], "ble", 3);
        *VAR_1 = VAR_3 - 2 + 3;
        VAR_2 = 1;
      }
      break;

    case 'i':
      if( VAR_3>2 && 0==FUNC_0("iz", &VAR_0[VAR_3-2], 2) ){
        FUNC_1(&VAR_0[VAR_3-2], "ize", 3);
        *VAR_1 = VAR_3 - 2 + 3;
        VAR_2 = 1;
      }
      break;

  }
  return VAR_2;
}
