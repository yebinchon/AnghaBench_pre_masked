
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,char const*,int) ;
 char const* FUNC_1 (char const*) ;

__attribute__((used)) static const char *FUNC_2(const char *VAR_0, int VAR_1, const char *VAR_2){
  VAR_2 = FUNC_1(VAR_2);
  if( FUNC_0(VAR_0, VAR_2, VAR_1)!=0 ) return 0;
  VAR_2 = FUNC_1(VAR_2+VAR_1);
  if( VAR_2[0]!='=' ) return 0;
  return FUNC_1(VAR_2+1);
}
