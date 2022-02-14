
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*,char) ;

const char *FUNC_1( const char *VAR_0 )
{
  const char *VAR_1;


  if ((VAR_1 = FUNC_0( VAR_0, '/' ))) {
    VAR_1++;
  } else if ((VAR_1 = FUNC_0( VAR_0, ':' ))) {
    VAR_1++;
  } else {
    VAR_1 = VAR_0;
  }

  return VAR_1;
}
