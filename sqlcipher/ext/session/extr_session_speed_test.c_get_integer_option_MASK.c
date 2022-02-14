
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CmdLineOption ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(CmdLineOption *VAR_0, const char *VAR_1){
  int VAR_2 = 0;
  int VAR_3 = 0;
  int VAR_4 = 1;
  if( VAR_1[0]=='-' ){
    VAR_4 = -1;
    VAR_2 = 1;
  }
  while( VAR_1[VAR_2] ){
    if( VAR_1[VAR_2]<'0' || VAR_1[VAR_2]>'9' ) FUNC_0(VAR_0);
    VAR_3 = VAR_3*10 + (VAR_1[VAR_2] - '0');
    VAR_2++;
  }
  return (VAR_3*VAR_4);
}
