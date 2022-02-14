
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int,int,int ) ;
 char* FUNC_2 (char*,int) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3(char **VAR_1){
  int VAR_2 = 128;
  char *VAR_3 = 0;
  int VAR_4 = 0;

  while( !FUNC_0(VAR_0) ){
    int VAR_5;

    VAR_2 = VAR_2*2;
    VAR_3 = FUNC_2(VAR_3, VAR_2);
    VAR_5 = FUNC_1(&VAR_3[VAR_4], 1, VAR_2-VAR_4-1, VAR_0);

    if( VAR_5==0 ) break;
    VAR_4 += VAR_5;
    VAR_3[VAR_4] = '\0';
  }

  *VAR_1 = VAR_3;
  return 0;
}
