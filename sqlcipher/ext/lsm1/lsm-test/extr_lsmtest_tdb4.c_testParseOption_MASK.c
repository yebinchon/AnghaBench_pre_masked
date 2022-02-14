
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*,int) ;

__attribute__((used)) static int FUNC_1(
  const char **VAR_0,
  const char **VAR_1,
  const char **VAR_2,
  char *VAR_3
){
  const char *VAR_4 = *VAR_0;
  const char *VAR_5;
  int VAR_6;

  char *VAR_7 = VAR_3;

  while( *VAR_4==' ' ) VAR_4++;
  VAR_5 = VAR_4;
  while( *VAR_4 && *VAR_4!='=' ) VAR_4++;
  if( *VAR_4==0 ) return 1;

  VAR_6 = (VAR_4 - VAR_5);
  FUNC_0(VAR_7, VAR_5, VAR_6);
  *VAR_1 = VAR_7;
  VAR_7 += VAR_6;
  *VAR_7++ = '\0';

  VAR_4++;
  VAR_5 = VAR_4;
  while( *VAR_4 && *VAR_4!=' ' ) VAR_4++;
  VAR_6 = (VAR_4 - VAR_5);

  FUNC_0(VAR_7, VAR_5, VAR_6);
  *VAR_2 = VAR_7;
  VAR_7 += VAR_6;
  *VAR_7++ = '\0';

  *VAR_0 = VAR_4;
  return 0;
}
