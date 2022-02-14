
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 char* FUNC_1 (char const*) ;
 int FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char const*) ;
 int FUNC_4 (char*,char const*) ;
 scalar_t__ FUNC_5 (scalar_t__) ;

const char *FUNC_6(const char *VAR_0)
{
  const char *VAR_1;
  char *VAR_2;

  if( VAR_0==0 ) return 0;
  VAR_1 = FUNC_1(VAR_0);
  if( VAR_1==0 && (VAR_2=(char *)FUNC_5( FUNC_3(VAR_0)+1 ))!=0 ){
    FUNC_4(VAR_2,VAR_0);
    VAR_1 = VAR_2;
    FUNC_2(VAR_1);
  }
  FUNC_0(VAR_1);
  return VAR_1;
}
