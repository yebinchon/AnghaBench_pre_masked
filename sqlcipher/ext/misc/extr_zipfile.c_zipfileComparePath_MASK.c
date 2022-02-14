
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,char const*,int) ;
 scalar_t__ FUNC_1 (char const*) ;

__attribute__((used)) static int FUNC_2(const char *VAR_0, const char *VAR_1, int VAR_2){
  int VAR_3 = (int)FUNC_1(VAR_0);
  if( VAR_0[VAR_3-1]=='/' ) VAR_3--;
  if( VAR_1[VAR_2-1]=='/' ) VAR_2--;
  if( VAR_3==VAR_2 && FUNC_0(VAR_0, VAR_1, VAR_3)==0 ) return 0;
  return 1;
}
