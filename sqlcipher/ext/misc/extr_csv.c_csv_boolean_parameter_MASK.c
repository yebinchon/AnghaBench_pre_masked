
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 char* FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*,char const*,int) ;

__attribute__((used)) static int FUNC_3(
  const char *VAR_0,
  int VAR_1,
  const char *VAR_2,
  int *VAR_3
){
  int VAR_4;
  VAR_2 = FUNC_1(VAR_2);
  if( FUNC_2(VAR_0, VAR_2, VAR_1)!=0 ) return 0;
  VAR_2 = FUNC_1(VAR_2 + VAR_1);
  if( VAR_2[0]==0 ){
    *VAR_3 = 1;
    return 1;
  }
  if( VAR_2[0]!='=' ) return 0;
  VAR_2 = FUNC_1(VAR_2+1);
  VAR_4 = FUNC_0(VAR_2);
  if( VAR_4>=0 ){
    *VAR_3 = VAR_4;
    return 1;
  }
  return 0;
}
